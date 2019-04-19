/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: vision.proto */

#ifndef PROTOBUF_C_vision_2eproto__INCLUDED
#define PROTOBUF_C_vision_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Vision__Pedestrian Vision__Pedestrian;
typedef struct _Vision__Obstacle Vision__Obstacle;
typedef struct _Vision__AbnormalCar Vision__AbnormalCar;
typedef struct _Vision__AvailableArea Vision__AvailableArea;
typedef struct _Vision__Base Vision__Base;
typedef struct _Vision__Crowd Vision__Crowd;
typedef struct _Vision__Obstacles Vision__Obstacles;
typedef struct _Vision__AvailableAreas Vision__AvailableAreas;
typedef struct _Vision__IllegalCarWarn Vision__IllegalCarWarn;
typedef struct _Vision__Visibility Vision__Visibility;
typedef struct _Vision__SmokeWarn Vision__SmokeWarn;


/* --- enums --- */

/*
 *场景ID
 */
typedef enum _Vision__ID {
  /*
   * 无用
   */
  VISION__ID__DEFAULT = 0,
  /*
   * 行人与动物闯入检测
   */
  VISION__ID__PEDESTRIAN_D = 1,
  /*
   * 违章车辆1(违停)
   */
  VISION__ID__ILLEGAL_V1 = 2,
  /*
   * 白天能见度检测
   */
  VISION__ID__VISIBILITY = 3,
  /*
   * 可行驶区域检测	
   */
  VISION__ID__AVAILABLE_AREA = 4,
  /*
   * 异常车辆检测(静止)
   */
  VISION__ID__ABNORMAL_CAR = 5,
  /*
   * 违章车辆2(应急车道)
   */
  VISION__ID__ILLEGAL_V2 = 6,
  /*
   * 交通态势感知
   */
  VISION__ID__TRAFFIC_STATUS = 7,
  /*
   * 逆向行驶告警
   */
  VISION__ID__BACKWARD_DRIVING = 8,
  /*
   * 道路危险状况提醒(抛洒物)
   */
  VISION__ID__ROAD_DANGER = 9,
  /*
   * 隧道内火焰与烟雾预警
   */
  VISION__ID__FIRE_SMOKE = 10
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(VISION__ID)
} Vision__ID;
/*
 * 视觉捕捉到的物体类型
 */
typedef enum _Vision__TYPE {
  /*
   * 其他
   */
  VISION__TYPE__OTHERS = 0,
  /*
   * 人
   */
  VISION__TYPE__HUMAN = 1,
  /*
   * 车
   */
  VISION__TYPE__VEHICLE = 2,
  /*
   * 摩托车
   */
  VISION__TYPE__MOTORCYCLE = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(VISION__TYPE)
} Vision__TYPE;

/* --- messages --- */

/*
 * 单个行人
 */
struct  _Vision__Pedestrian
{
  ProtobufCMessage base;
  int32_t object_id;
  Vision__TYPE object_type;
  /*
   * 经度
   */
  int32_t lng;
  /*
   * 纬度
   */
  int32_t lat;
  /*
   * 哪个相机（1,2,3,4）
   */
  int32_t camera;
  /*
   * 是否在车道
   */
  protobuf_c_boolean has_if_at_lane;
  int32_t if_at_lane;
  /*
   * 车道id
   */
  protobuf_c_boolean has_lane_id;
  int32_t lane_id;
  protobuf_c_boolean has_heading;
  int32_t heading;
};
#define VISION__PEDESTRIAN__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&vision__pedestrian__descriptor) \
    , 0, VISION__TYPE__OTHERS, 0, 0, 0, 0, 0, 0, 0, 0, 0 }


/*
 * 单个障碍物
 */
struct  _Vision__Obstacle
{
  ProtobufCMessage base;
  int32_t object_id;
  /*
   * 经度
   */
  int32_t lng;
  /*
   * 纬度
   */
  int32_t lat;
  /*
   * 哪个相机（1,2,3,4）
   */
  int32_t camera;
  /*
   * 是否在车道
   */
  protobuf_c_boolean has_if_at_lane;
  int32_t if_at_lane;
  /*
   * 车道id
   */
  protobuf_c_boolean has_lane_id;
  int32_t lane_id;
  protobuf_c_boolean has_heading;
  int32_t heading;
};
#define VISION__OBSTACLE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&vision__obstacle__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }


/*
 * 单个车辆(异常车辆)
 */
struct  _Vision__AbnormalCar
{
  ProtobufCMessage base;
  int32_t object_id;
  /*
   * 经度
   */
  int32_t lng;
  /*
   * 纬度
   */
  int32_t lat;
  /*
   * 车道id
   */
  protobuf_c_boolean has_lane_id;
  int32_t lane_id;
  /*
   * 哪个相机（1,2,3,4）
   */
  protobuf_c_boolean has_camera;
  int32_t camera;
};
#define VISION__ABNORMAL_CAR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&vision__abnormal_car__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0 }


/*
 * 单个可行驶区域
 */
struct  _Vision__AvailableArea
{
  ProtobufCMessage base;
  int32_t object_id;
  /*
   * 第一个点经度
   */
  int32_t lng1;
  /*
   * 第一个点纬度
   */
  int32_t lat1;
  /*
   * 第二个点经度
   */
  int32_t lng2;
  /*
   * 第二个点纬度
   */
  int32_t lat2;
  /*
   * 第三个点经度
   */
  int32_t lng3;
  /*
   * 第三个点纬度
   */
  int32_t lat3;
  /*
   * 第四个点经度
   */
  int32_t lng4;
  /*
   * 第四个点纬度
   */
  int32_t lat4;
  /*
   * 哪个相机（1,2,3,4）
   */
  int32_t camera;
  /*
   * 车道id
   */
  protobuf_c_boolean has_lane_id;
  int32_t lane_id;
  protobuf_c_boolean has_heading;
  int32_t heading;
};
#define VISION__AVAILABLE_AREA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&vision__available_area__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }


/*
 * 下面是要发送给rsu的消息结构
 */
struct  _Vision__Base
{
  ProtobufCMessage base;
  Vision__ID id;
};
#define VISION__BASE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&vision__base__descriptor) \
    , VISION__ID__DEFAULT }


/*
 * 行人
 */
struct  _Vision__Crowd
{
  ProtobufCMessage base;
  Vision__ID id;
  size_t n_pedestrian;
  Vision__Pedestrian **pedestrian;
};
#define VISION__CROWD__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&vision__crowd__descriptor) \
    , VISION__ID__DEFAULT, 0,NULL }


/*
 * 障碍物
 */
struct  _Vision__Obstacles
{
  ProtobufCMessage base;
  Vision__ID id;
  size_t n_array;
  Vision__Obstacle **array;
};
#define VISION__OBSTACLES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&vision__obstacles__descriptor) \
    , VISION__ID__DEFAULT, 0,NULL }


/*
 * 可行驶区域
 */
struct  _Vision__AvailableAreas
{
  ProtobufCMessage base;
  Vision__ID id;
  size_t n_area;
  Vision__AvailableArea **area;
};
#define VISION__AVAILABLE_AREAS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&vision__available_areas__descriptor) \
    , VISION__ID__DEFAULT, 0,NULL }


/*
 * 违章车辆
 */
struct  _Vision__IllegalCarWarn
{
  ProtobufCMessage base;
  Vision__ID id;
  /*
   *车辆数组
   */
  size_t n_array;
  Vision__AbnormalCar **array;
};
#define VISION__ILLEGAL_CAR_WARN__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&vision__illegal_car_warn__descriptor) \
    , VISION__ID__DEFAULT, 0,NULL }


/*
 * 能见度检测
 *能见度距离 能见度等级
 *> 500       0(较好)
 *200~500      1(好)
 *100~200      2(一般)
 *50~100       3(差)
 *0-50         4(较差)	   
 */
struct  _Vision__Visibility
{
  ProtobufCMessage base;
  Vision__ID id;
  /*
   * 能见度距离 m
   */
  double distance;
  /*
   * 能见度等级
   */
  int32_t level;
};
#define VISION__VISIBILITY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&vision__visibility__descriptor) \
    , VISION__ID__DEFAULT, 0, 0 }


/*
 * 火焰烟雾报警
 */
struct  _Vision__SmokeWarn
{
  ProtobufCMessage base;
  Vision__ID id;
  /*
   * 是否有报警
   */
  protobuf_c_boolean warn;
};
#define VISION__SMOKE_WARN__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&vision__smoke_warn__descriptor) \
    , VISION__ID__DEFAULT, 0 }


/* Vision__Pedestrian methods */
void   vision__pedestrian__init
                     (Vision__Pedestrian         *message);
size_t vision__pedestrian__get_packed_size
                     (const Vision__Pedestrian   *message);
size_t vision__pedestrian__pack
                     (const Vision__Pedestrian   *message,
                      uint8_t             *out);
size_t vision__pedestrian__pack_to_buffer
                     (const Vision__Pedestrian   *message,
                      ProtobufCBuffer     *buffer);
Vision__Pedestrian *
       vision__pedestrian__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   vision__pedestrian__free_unpacked
                     (Vision__Pedestrian *message,
                      ProtobufCAllocator *allocator);
/* Vision__Obstacle methods */
void   vision__obstacle__init
                     (Vision__Obstacle         *message);
size_t vision__obstacle__get_packed_size
                     (const Vision__Obstacle   *message);
size_t vision__obstacle__pack
                     (const Vision__Obstacle   *message,
                      uint8_t             *out);
size_t vision__obstacle__pack_to_buffer
                     (const Vision__Obstacle   *message,
                      ProtobufCBuffer     *buffer);
Vision__Obstacle *
       vision__obstacle__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   vision__obstacle__free_unpacked
                     (Vision__Obstacle *message,
                      ProtobufCAllocator *allocator);
/* Vision__AbnormalCar methods */
void   vision__abnormal_car__init
                     (Vision__AbnormalCar         *message);
size_t vision__abnormal_car__get_packed_size
                     (const Vision__AbnormalCar   *message);
size_t vision__abnormal_car__pack
                     (const Vision__AbnormalCar   *message,
                      uint8_t             *out);
size_t vision__abnormal_car__pack_to_buffer
                     (const Vision__AbnormalCar   *message,
                      ProtobufCBuffer     *buffer);
Vision__AbnormalCar *
       vision__abnormal_car__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   vision__abnormal_car__free_unpacked
                     (Vision__AbnormalCar *message,
                      ProtobufCAllocator *allocator);
/* Vision__AvailableArea methods */
void   vision__available_area__init
                     (Vision__AvailableArea         *message);
size_t vision__available_area__get_packed_size
                     (const Vision__AvailableArea   *message);
size_t vision__available_area__pack
                     (const Vision__AvailableArea   *message,
                      uint8_t             *out);
size_t vision__available_area__pack_to_buffer
                     (const Vision__AvailableArea   *message,
                      ProtobufCBuffer     *buffer);
Vision__AvailableArea *
       vision__available_area__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   vision__available_area__free_unpacked
                     (Vision__AvailableArea *message,
                      ProtobufCAllocator *allocator);
/* Vision__Base methods */
void   vision__base__init
                     (Vision__Base         *message);
size_t vision__base__get_packed_size
                     (const Vision__Base   *message);
size_t vision__base__pack
                     (const Vision__Base   *message,
                      uint8_t             *out);
size_t vision__base__pack_to_buffer
                     (const Vision__Base   *message,
                      ProtobufCBuffer     *buffer);
Vision__Base *
       vision__base__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   vision__base__free_unpacked
                     (Vision__Base *message,
                      ProtobufCAllocator *allocator);
/* Vision__Crowd methods */
void   vision__crowd__init
                     (Vision__Crowd         *message);
size_t vision__crowd__get_packed_size
                     (const Vision__Crowd   *message);
size_t vision__crowd__pack
                     (const Vision__Crowd   *message,
                      uint8_t             *out);
size_t vision__crowd__pack_to_buffer
                     (const Vision__Crowd   *message,
                      ProtobufCBuffer     *buffer);
Vision__Crowd *
       vision__crowd__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   vision__crowd__free_unpacked
                     (Vision__Crowd *message,
                      ProtobufCAllocator *allocator);
/* Vision__Obstacles methods */
void   vision__obstacles__init
                     (Vision__Obstacles         *message);
size_t vision__obstacles__get_packed_size
                     (const Vision__Obstacles   *message);
size_t vision__obstacles__pack
                     (const Vision__Obstacles   *message,
                      uint8_t             *out);
size_t vision__obstacles__pack_to_buffer
                     (const Vision__Obstacles   *message,
                      ProtobufCBuffer     *buffer);
Vision__Obstacles *
       vision__obstacles__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   vision__obstacles__free_unpacked
                     (Vision__Obstacles *message,
                      ProtobufCAllocator *allocator);
/* Vision__AvailableAreas methods */
void   vision__available_areas__init
                     (Vision__AvailableAreas         *message);
size_t vision__available_areas__get_packed_size
                     (const Vision__AvailableAreas   *message);
size_t vision__available_areas__pack
                     (const Vision__AvailableAreas   *message,
                      uint8_t             *out);
size_t vision__available_areas__pack_to_buffer
                     (const Vision__AvailableAreas   *message,
                      ProtobufCBuffer     *buffer);
Vision__AvailableAreas *
       vision__available_areas__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   vision__available_areas__free_unpacked
                     (Vision__AvailableAreas *message,
                      ProtobufCAllocator *allocator);
/* Vision__IllegalCarWarn methods */
void   vision__illegal_car_warn__init
                     (Vision__IllegalCarWarn         *message);
size_t vision__illegal_car_warn__get_packed_size
                     (const Vision__IllegalCarWarn   *message);
size_t vision__illegal_car_warn__pack
                     (const Vision__IllegalCarWarn   *message,
                      uint8_t             *out);
size_t vision__illegal_car_warn__pack_to_buffer
                     (const Vision__IllegalCarWarn   *message,
                      ProtobufCBuffer     *buffer);
Vision__IllegalCarWarn *
       vision__illegal_car_warn__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   vision__illegal_car_warn__free_unpacked
                     (Vision__IllegalCarWarn *message,
                      ProtobufCAllocator *allocator);
/* Vision__Visibility methods */
void   vision__visibility__init
                     (Vision__Visibility         *message);
size_t vision__visibility__get_packed_size
                     (const Vision__Visibility   *message);
size_t vision__visibility__pack
                     (const Vision__Visibility   *message,
                      uint8_t             *out);
size_t vision__visibility__pack_to_buffer
                     (const Vision__Visibility   *message,
                      ProtobufCBuffer     *buffer);
Vision__Visibility *
       vision__visibility__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   vision__visibility__free_unpacked
                     (Vision__Visibility *message,
                      ProtobufCAllocator *allocator);
/* Vision__SmokeWarn methods */
void   vision__smoke_warn__init
                     (Vision__SmokeWarn         *message);
size_t vision__smoke_warn__get_packed_size
                     (const Vision__SmokeWarn   *message);
size_t vision__smoke_warn__pack
                     (const Vision__SmokeWarn   *message,
                      uint8_t             *out);
size_t vision__smoke_warn__pack_to_buffer
                     (const Vision__SmokeWarn   *message,
                      ProtobufCBuffer     *buffer);
Vision__SmokeWarn *
       vision__smoke_warn__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   vision__smoke_warn__free_unpacked
                     (Vision__SmokeWarn *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Vision__Pedestrian_Closure)
                 (const Vision__Pedestrian *message,
                  void *closure_data);
typedef void (*Vision__Obstacle_Closure)
                 (const Vision__Obstacle *message,
                  void *closure_data);
typedef void (*Vision__AbnormalCar_Closure)
                 (const Vision__AbnormalCar *message,
                  void *closure_data);
typedef void (*Vision__AvailableArea_Closure)
                 (const Vision__AvailableArea *message,
                  void *closure_data);
typedef void (*Vision__Base_Closure)
                 (const Vision__Base *message,
                  void *closure_data);
typedef void (*Vision__Crowd_Closure)
                 (const Vision__Crowd *message,
                  void *closure_data);
typedef void (*Vision__Obstacles_Closure)
                 (const Vision__Obstacles *message,
                  void *closure_data);
typedef void (*Vision__AvailableAreas_Closure)
                 (const Vision__AvailableAreas *message,
                  void *closure_data);
typedef void (*Vision__IllegalCarWarn_Closure)
                 (const Vision__IllegalCarWarn *message,
                  void *closure_data);
typedef void (*Vision__Visibility_Closure)
                 (const Vision__Visibility *message,
                  void *closure_data);
typedef void (*Vision__SmokeWarn_Closure)
                 (const Vision__SmokeWarn *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    vision__id__descriptor;
extern const ProtobufCEnumDescriptor    vision__type__descriptor;
extern const ProtobufCMessageDescriptor vision__pedestrian__descriptor;
extern const ProtobufCMessageDescriptor vision__obstacle__descriptor;
extern const ProtobufCMessageDescriptor vision__abnormal_car__descriptor;
extern const ProtobufCMessageDescriptor vision__available_area__descriptor;
extern const ProtobufCMessageDescriptor vision__base__descriptor;
extern const ProtobufCMessageDescriptor vision__crowd__descriptor;
extern const ProtobufCMessageDescriptor vision__obstacles__descriptor;
extern const ProtobufCMessageDescriptor vision__available_areas__descriptor;
extern const ProtobufCMessageDescriptor vision__illegal_car_warn__descriptor;
extern const ProtobufCMessageDescriptor vision__visibility__descriptor;
extern const ProtobufCMessageDescriptor vision__smoke_warn__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_vision_2eproto__INCLUDED */
