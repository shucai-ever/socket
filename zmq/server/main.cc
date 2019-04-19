#include <unistd.h>	
#include "vserver.h"	

using namespace vision;

// 逆向行驶告警
void send_backward_car(Vserver &s)	
{	
    IllegalCarWarn a;
    AbnormalCar   *p;
    static struct timeval tv = {0};    // 时间结构体,用于限制发送频率
    a.set_id(BACKWARD_DRIVING);
    for(int i=0;i<1;i++){
        p = a.add_array();
        p->set_object_id(i);
        p->set_camera(i);       // 哪个相机 :1,2,3,4
        p->set_lng(1);          // 经度
        p->set_lat(2);          // 纬度
        p->set_lane_id(1);      // 车道id
    }
    s.send_data(a,&tv);
}	

// 交通态势感知
void send_status(Vserver &s)	
{	
    Crowd a;
    Pedestrian *p;
    static struct timeval tv = {0};     // 时间结构体,用于限制发送频率
    a.set_id(TRAFFIC_STATUS);
    for(int i=0;i<3;i++){
        p = a.add_pedestrian();
        p->set_object_id(i);
        p->set_object_type(HUMAN);      // 类型:人,车,摩托车
        p->set_camera(1);               // 哪个相机 :1,2,3,4
        p->set_lng(1128990180);         // 经度
        p->set_lat(281265890);	        // 纬度
    }
    s.send_data(a,&tv,1000);            // 两次发送间隔为小于 1000 ms的话，不会发送
}	

// 异常车辆（静止）
void send_abnormal_car(Vserver &s)	
{	
    IllegalCarWarn a;
    AbnormalCar   *p;
    static struct timeval tv = {0};     // 时间结构体,用于限制发送频率
    a.set_id(ABNORMAL_CAR);
    for(int i=0;i<1;i++){
        p = a.add_array();
        p->set_object_id(i);
        p->set_camera(1);         // 哪个相机 :1,2,3,4
        p->set_lng(11);           // 经度
        p->set_lat(22);           // 纬度
    }
    s.send_data(a,&tv);
}	

// 道路危险状况提醒（抛洒物）
void send_road_danger(Vserver &s)	
{	
    Obstacles a;
    Obstacle *p;
    static struct timeval tv = {0};    // 时间结构体,用于限制发送频率
    a.set_id(ROAD_DANGER);
    for(int i=0;i<1;i++){
        p = a.add_array();
        p->set_object_id(i);
        p->set_camera(1);       // 哪个相机 :1,2,3,4
        p->set_lng(111);        // 经度
        p->set_lat(222);        // 纬度
    }
    s.send_data(a,&tv);
}	

// 违章车辆预警1（违停）
void send_illegal_car1(Vserver &s)	
{	
    IllegalCarWarn a;
    AbnormalCar   *p;
    static struct timeval tv = {0};   // 时间结构体,用于限制发送频率
    a.set_id(ILLEGAL_V1);
    for(int i=0;i<1;i++){
        p = a.add_array();
        p->set_object_id(i);
        p->set_camera(i);    	// 哪个相机 :1,2,3,4
        p->set_lng(1111);       // 经度
        p->set_lat(2222);       // 纬度
        p->set_lane_id(1);   	// 车道id
    }
    s.send_data(a,&tv);
}	

// 发送违章车辆2（占用应急车道）
void send_illegal_car2(Vserver &s)	
{	
    IllegalCarWarn a;
    AbnormalCar   *p;
    static struct timeval tv = {0};   // 时间结构体,用于限制发送频率
    a.set_id(ILLEGAL_V2);
    for(int i=0;i<1;i++){
        p = a.add_array();
        p->set_object_id(i);
        p->set_camera(i);      // 哪个相机 :1,2,3,4
        p->set_lng(3);         // 经度
        p->set_lat(4);         // 纬度
    }
    s.send_data(a,&tv);
}	

// 白天能见度检测与预警
void send_visibility(Vserver &s)	
{	
    Visibility a;
    static struct timeval tv = {0};          // 时间结构体,用于限制发送频率
    a.set_id(VISIBILITY);
    a.set_distance(123.456789);
    a.set_level(3);
    s.send_data(a,&tv);
}	

// 行人与动物闯入检测
void send_crowd(Vserver &s)	
{	
    Crowd a;
    Pedestrian *p;
    static struct timeval tv = {0};     // 时间结构体,用于限制发送频率
    a.set_id(PEDESTRIAN_D);
    for(int i=0;i<2;i++){
        p = a.add_pedestrian();
        p->set_object_id(i);
        p->set_object_type(HUMAN);      // 类型:人,车,摩托车
        p->set_camera(1);               // 哪个相机 :1,2,3,4
        p->set_lng(33);                 // 经度
        p->set_lat(44);                 // 纬度
    }
    s.send_data(a,&tv,1000);            // 两次发送间隔为小于 1000 ms的话，不会发送
}			


// 动态可行驶区域检测
void send_area(Vserver &s)	
{	
    AvailableAreas a;
    AvailableArea *pa;
    static struct timeval tv = {0};      // 时间结构体,用于限制发送频率
    a.set_id(AVAILABLE_AREA);
    pa=a.add_area();
    pa->set_object_id(1);
    pa->set_camera(3);             // 哪个相机 :1,2,3,4
    pa->set_lng1(1000000);         // 第一个点经度
    pa->set_lat1(1111111);         // 第二个点纬度
    pa->set_lng2(2000000);         // 第二个点经度
    pa->set_lat2(2222222);         // 第二个点纬度
    pa->set_lng3(3000000);         // 第3个点经度
    pa->set_lat3(3333333);         // 第3个点纬度
    pa->set_lng4(4000000);         // 第4个点经度
    pa->set_lat4(4444444);         // 第4个点纬度
    s.send_data(a,&tv);
}

// 隧道内火焰与烟雾预警
void send_smoke(Vserver &s)	
{	
    SmokeWarn a;
    static struct timeval tv = {0};       // 时间结构体,用于限制发送频率
    a.set_id(FIRE_SMOKE);
    a.set_warn(true);
    s.send_data(a,&tv);
}	







int main(int argc ,char **argv)
{	
    Vserver s(12347);
    s.start();

    while(1)
    {
        send_backward_car(s);   // 逆向行驶告警
        send_status(s);         // 交通态势感知
        send_abnormal_car(s);   // 异常车辆（静止）
        send_road_danger(s);    // 道路危险状况提醒（抛洒物）
        send_illegal_car1(s);	// 违章车辆预警1（违停）
        send_illegal_car2(s);	// 发送违章车辆2（占用应急车道）
        send_visibility(s);     // 白天能见度检测与预警
        send_crowd(s);          // 行人与动物闯入检测
        send_area(s);           // 动态可行驶区域检测
        send_smoke(s);          // 隧道内火焰与烟雾预警
	
	usleep(5000);

    }
    return 0;
}







