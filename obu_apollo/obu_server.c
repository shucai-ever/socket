#include <netinet/in.h>
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


#define SOCK_INVALID	-1
#define SOCK_MAX_CONNECT 5


static uint16_t m_port = 9999;
static int      m_fd   = SOCK_INVALID;
static int      m_client = SOCK_INVALID;
static int      m_loop = 1;

static void server_close()
{
    if(m_fd != SOCK_INVALID){
        close(m_fd);
        m_fd = SOCK_INVALID;
    }
}

static void socket_init()
{
    // 线程结束时，自动释放资源
    pthread_detach(pthread_self());

    int sock_reuse = 1;
    struct sockaddr_in server_addr;
    struct sockaddr_in client_addr;
    socklen_t length = sizeof(struct sockaddr);

    m_fd = socket(AF_INET,SOCK_STREAM,0);
    if(m_fd <= 0){
        printf("obu_server : create socket error\n");
        return;
    }

    // 端口复用，防止关掉程序再开的时候不能创建socket
    setsockopt(m_fd,SOL_SOCKET,SO_REUSEADDR,&sock_reuse,sizeof(sock_reuse));

    bzero(&server_addr, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(m_port);
    server_addr.sin_addr.s_addr = htonl(INADDR_ANY);

    if(bind(m_fd, (struct sockaddr *)&server_addr, sizeof(server_addr)) == -1){
        printf("obu_server : bind socket error\n");
        server_close();
        return;
    }

    if(listen(m_fd,SOCK_MAX_CONNECT) == -1){
        printf("obu_server : listen error\n");
        server_close();
        return;
    }

    while(1)
    {
        int client_fd = accept(m_fd,(struct sockaddr *)&client_addr, &length);
        if(client_fd == -1){
            printf("obu_server : accept error , client_fd === -1\n");
            break;
        }
        m_client = client_fd;
        //printf("vserver : client(c_fd=%d) connect ,online = %d\n",client_fd,(int)(m_list.size()+1));
    }

    server_close();
    return;

}

static void *socket_thread()
{
    if(m_fd != SOCK_INVALID)return NULL;

    while (1) {
        socket_init();
        sleep(5);
    }
}

void obu_server_start(uint16_t port)
{
    if(m_fd == SOCK_INVALID)
    {
        m_port = port;

        pthread_t thread;
        pthread_create(&thread,NULL,socket_thread,NULL);
    }

}

void obu_server_stop()
{
    m_loop = 0;
    if(m_fd != SOCK_INVALID){
        shutdown(m_fd,SHUT_RDWR);
        m_fd = SOCK_INVALID;
    }
}

void obu_server_send()
{
    if(m_fd == SOCK_INVALID){
//        printf("obu_server : server_fd = %d\n",m_fd);
        return;
    }

    char *p = "hello world\n";
    int ret = send(m_client,p,strlen(p),0);
    printf("send ret = %d\n",ret);

}



