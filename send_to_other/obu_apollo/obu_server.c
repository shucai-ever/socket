#include <netinet/in.h>
#include <net/if.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <signal.h>
#include <pthread.h>
#include "obu_server.h"
#include "obu_msgs.h"
#include "obu_obstacle.h"
//#include "sev_cloud.h"


#define SOCK_INVALID -1
#define MSG_HEAD_1 0x60
#define MSG_HEAD_2 0x61


static pthread_mutex_t m_mutex;
static char   * m_device   = "eth0";
static uint16_t m_port = 22222;
static int      m_fd   = SOCK_INVALID;
static struct sockaddr_in m_addr;
static int      m_loop = 0;


static void udp_close()
{
	if(m_fd != SOCK_INVALID){
		close(m_fd);
		m_fd = SOCK_INVALID;
	}
}


// 读数据线程
static void *read_thread()
{
	// 线程结束时，自动释放资源
	pthread_detach(pthread_self());

	uint8_t buffer[1024] = {0};
	struct sockaddr_in from;
	int len = sizeof(struct sockaddr_in);
	int ret,count;

	count = 0;
	while(m_loop){
//		test();continue; 	// 测试用
		bzero(&from, sizeof(struct sockaddr_in));
		memset(buffer,0,sizeof(buffer));
		ret = recvfrom(m_fd, buffer, sizeof(buffer), 0, (struct sockaddr*)&from,(socklen_t*)&len);
//		printf("[%s:%d] recv length === %d\n",inet_ntoa(from.sin_addr),ntohs(from.sin_port),ret);
		if( obumsg_get_gps(buffer,ret) != -1 ){
			char *ip = inet_ntoa(from.sin_addr);
			m_addr.sin_addr.s_addr=inet_addr(ip);
//			m_addr.sin_port = from.sin_port;
			count = 0;
		}else{
			if(count++ == 10)m_addr.sin_addr.s_addr=htonl(INADDR_BROADCAST);
		}
	}

}


// 发送数据线程
static void *send_thread()
{
	// 线程结束时，自动释放资源
	pthread_detach(pthread_self());

	int length;
	uint8_t buffer[1024] ={0};
	static struct timeval s_tv = {0};

	while(m_loop){
		memset(buffer,0,sizeof(buffer));
		length = get_obumsg_buffer(buffer,sizeof(buffer));
		if(length > 0){
			obu_server_send(buffer,length);
			int num = time_interval(&s_tv);
			if(num > 130)
				print_interval(num);
		}
		// 10hz
		usleep(100*1000);
	}

}


static void udp_init()
{
	int opt = 1;
	pthread_t r_thread;
	pthread_t s_thread;

	m_fd = socket(AF_INET, SOCK_DGRAM, 0);
	if (m_fd <= 0)
	{
		perror("obu_server create udp socket failed");
		exit(-1);
	}

	//设置该套接字为广播类型
	if(setsockopt(m_fd, SOL_SOCKET, SO_BROADCAST, (char *)&opt, sizeof(opt)) < 0){
		udp_close();
		perror("obu_server set socket broadcast error");
		exit(-1);
	}

	// 绑定网卡
	struct ifreq ifr = {0};
	strcpy(ifr.ifr_name,m_device);
	if (setsockopt(m_fd, SOL_SOCKET, SO_BINDTODEVICE, (char *)&ifr, sizeof(ifr)) < 0){
		udp_close();
		perror("obu_server bind interface error");
		exit(-1);
	}

	//设置读数据的超时时间
	struct timeval tv_out;
	tv_out.tv_sec = 2;
	tv_out.tv_usec = 0;
	setsockopt(m_fd,SOL_SOCKET,SO_RCVTIMEO,&tv_out, sizeof(tv_out));

	// 绑定地址,用于接收消息
	struct sockaddr_in this_addr;
	bzero(&this_addr, sizeof(struct sockaddr_in));
	this_addr.sin_family = AF_INET;
	this_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	this_addr.sin_port = htons(m_port);
	if(bind(m_fd,(struct sockaddr *)&(this_addr), sizeof(struct sockaddr_in)) == -1)
	{
		udp_close();
		perror("obu_server bind error...");
		exit(-1);
	}

	// 设置广播地址和端口
	bzero(&m_addr, sizeof(struct sockaddr_in));
	m_addr.sin_family=AF_INET;
	m_addr.sin_addr.s_addr=htonl(INADDR_BROADCAST);
	m_addr.sin_port=htons(m_port);
	//    m_addr.sin_addr.s_addr=inet_addr("192.168.1.255");

	m_loop = 1;
	// 读消息线程
	pthread_create(&r_thread,NULL,read_thread,NULL);
	// 发送数据线程
	pthread_create(&s_thread,NULL,send_thread,NULL);
}


void obu_server_start(char * device,uint16_t port)
{
	if(m_fd == SOCK_INVALID)
	{
		m_port = port;
		m_loop = 0;
		if(device)m_device = device;
		pthread_mutex_init(&m_mutex,NULL);
		udp_init();
	}
}

void obu_server_stop()
{
	m_loop = 0;
	udp_close();
	pthread_mutex_destroy(&m_mutex);
}

//extern void Log2Apollo_to_file(const char *tag, const char *buf, int len);

void obu_server_send(uint8_t *data,int len)
{
	if(m_fd == SOCK_INVALID){
		printf("obu_server : socket fd invalid \n");
		return;
	}

	if(len > MSG_BUFFER_SIZE-5){
		printf("obu_server : data length = %d > %d\n",len,MSG_BUFFER_SIZE-5);
		return;
	}

	int ret,i;
	int send_size = 0;
	uint8_t sum = 0 ;

	// 添加2字节头，2字节数据长度，末尾添加1字节校验码
	uint8_t buffer[MSG_BUFFER_SIZE] = {0};
	buffer[0] = MSG_HEAD_1;
	buffer[1] = MSG_HEAD_2;
	buffer[2] = len & 0xff;
	buffer[3] = (len >> 8) & 0xff;
	memcpy(buffer+4,data,len);
	for (i=0;i<len+4;i++) {
		sum+=buffer[i];
	}
	buffer[len+4] = sum;
	send_size = len+5;

	pthread_mutex_lock(&m_mutex);
	//	printf("obu_server : send to |%s|  %s:%d ,length = %d\n",m_device,inet_ntoa(m_addr.sin_addr),ntohs(m_addr.sin_port),send_size);
	ret=sendto(m_fd, buffer, send_size, 0, (struct sockaddr*)&m_addr, sizeof(m_addr));
	if(ret<0){
		perror("obu_server sendto error");
	}
	pthread_mutex_unlock(&m_mutex);
}





