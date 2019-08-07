/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: vision.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "vision.pb-c.h"
void   pedestrian__init
                     (Pedestrian         *message)
{
  static const Pedestrian init_value = PEDESTRIAN__INIT;
  *message = init_value;
}
size_t pedestrian__get_packed_size
                     (const Pedestrian *message)
{
  assert(message->base.descriptor == &pedestrian__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t pedestrian__pack
                     (const Pedestrian *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &pedestrian__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t pedestrian__pack_to_buffer
                     (const Pedestrian *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &pedestrian__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Pedestrian *
       pedestrian__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Pedestrian *)
     protobuf_c_message_unpack (&pedestrian__descriptor,
                                allocator, len, data);
}
void   pedestrian__free_unpacked
                     (Pedestrian *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &pedestrian__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   obstacle__init
                     (Obstacle         *message)
{
  static const Obstacle init_value = OBSTACLE__INIT;
  *message = init_value;
}
size_t obstacle__get_packed_size
                     (const Obstacle *message)
{
  assert(message->base.descriptor == &obstacle__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t obstacle__pack
                     (const Obstacle *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &obstacle__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t obstacle__pack_to_buffer
                     (const Obstacle *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &obstacle__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Obstacle *
       obstacle__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Obstacle *)
     protobuf_c_message_unpack (&obstacle__descriptor,
                                allocator, len, data);
}
void   obstacle__free_unpacked
                     (Obstacle *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &obstacle__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   available_area__init
                     (AvailableArea         *message)
{
  static const AvailableArea init_value = AVAILABLE_AREA__INIT;
  *message = init_value;
}
size_t available_area__get_packed_size
                     (const AvailableArea *message)
{
  assert(message->base.descriptor == &available_area__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t available_area__pack
                     (const AvailableArea *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &available_area__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t available_area__pack_to_buffer
                     (const AvailableArea *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &available_area__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
AvailableArea *
       available_area__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (AvailableArea *)
     protobuf_c_message_unpack (&available_area__descriptor,
                                allocator, len, data);
}
void   available_area__free_unpacked
                     (AvailableArea *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &available_area__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   base__init
                     (Base         *message)
{
  static const Base init_value = BASE__INIT;
  *message = init_value;
}
size_t base__get_packed_size
                     (const Base *message)
{
  assert(message->base.descriptor == &base__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t base__pack
                     (const Base *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &base__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t base__pack_to_buffer
                     (const Base *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &base__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Base *
       base__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Base *)
     protobuf_c_message_unpack (&base__descriptor,
                                allocator, len, data);
}
void   base__free_unpacked
                     (Base *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &base__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   crowd__init
                     (Crowd         *message)
{
  static const Crowd init_value = CROWD__INIT;
  *message = init_value;
}
size_t crowd__get_packed_size
                     (const Crowd *message)
{
  assert(message->base.descriptor == &crowd__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t crowd__pack
                     (const Crowd *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &crowd__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t crowd__pack_to_buffer
                     (const Crowd *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &crowd__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Crowd *
       crowd__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Crowd *)
     protobuf_c_message_unpack (&crowd__descriptor,
                                allocator, len, data);
}
void   crowd__free_unpacked
                     (Crowd *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &crowd__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   obstacles__init
                     (Obstacles         *message)
{
  static const Obstacles init_value = OBSTACLES__INIT;
  *message = init_value;
}
size_t obstacles__get_packed_size
                     (const Obstacles *message)
{
  assert(message->base.descriptor == &obstacles__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t obstacles__pack
                     (const Obstacles *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &obstacles__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t obstacles__pack_to_buffer
                     (const Obstacles *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &obstacles__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Obstacles *
       obstacles__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Obstacles *)
     protobuf_c_message_unpack (&obstacles__descriptor,
                                allocator, len, data);
}
void   obstacles__free_unpacked
                     (Obstacles *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &obstacles__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   available_areas__init
                     (AvailableAreas         *message)
{
  static const AvailableAreas init_value = AVAILABLE_AREAS__INIT;
  *message = init_value;
}
size_t available_areas__get_packed_size
                     (const AvailableAreas *message)
{
  assert(message->base.descriptor == &available_areas__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t available_areas__pack
                     (const AvailableAreas *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &available_areas__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t available_areas__pack_to_buffer
                     (const AvailableAreas *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &available_areas__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
AvailableAreas *
       available_areas__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (AvailableAreas *)
     protobuf_c_message_unpack (&available_areas__descriptor,
                                allocator, len, data);
}
void   available_areas__free_unpacked
                     (AvailableAreas *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &available_areas__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor pedestrian__field_descriptors[8] =
{
  {
    "object_id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Pedestrian, object_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "object_type",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Pedestrian, object_type),
    &type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "x",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Pedestrian, x),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "y",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Pedestrian, y),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "camera",
    5,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Pedestrian, camera),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "if_at_lane",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Pedestrian, has_if_at_lane),
    offsetof(Pedestrian, if_at_lane),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "lane_id",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Pedestrian, has_lane_id),
    offsetof(Pedestrian, lane_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "heading",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Pedestrian, has_heading),
    offsetof(Pedestrian, heading),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned pedestrian__field_indices_by_name[] = {
  4,   /* field[4] = camera */
  7,   /* field[7] = heading */
  5,   /* field[5] = if_at_lane */
  6,   /* field[6] = lane_id */
  0,   /* field[0] = object_id */
  1,   /* field[1] = object_type */
  2,   /* field[2] = x */
  3,   /* field[3] = y */
};
static const ProtobufCIntRange pedestrian__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 8 }
};
const ProtobufCMessageDescriptor pedestrian__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Pedestrian",
  "Pedestrian",
  "Pedestrian",
  "",
  sizeof(Pedestrian),
  8,
  pedestrian__field_descriptors,
  pedestrian__field_indices_by_name,
  1,  pedestrian__number_ranges,
  (ProtobufCMessageInit) pedestrian__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor obstacle__field_descriptors[7] =
{
  {
    "object_id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Obstacle, object_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "x",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Obstacle, x),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "y",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Obstacle, y),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "camera",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Obstacle, camera),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "if_at_lane",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Obstacle, has_if_at_lane),
    offsetof(Obstacle, if_at_lane),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "lane_id",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Obstacle, has_lane_id),
    offsetof(Obstacle, lane_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "heading",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Obstacle, has_heading),
    offsetof(Obstacle, heading),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned obstacle__field_indices_by_name[] = {
  3,   /* field[3] = camera */
  6,   /* field[6] = heading */
  4,   /* field[4] = if_at_lane */
  5,   /* field[5] = lane_id */
  0,   /* field[0] = object_id */
  1,   /* field[1] = x */
  2,   /* field[2] = y */
};
static const ProtobufCIntRange obstacle__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 7 }
};
const ProtobufCMessageDescriptor obstacle__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Obstacle",
  "Obstacle",
  "Obstacle",
  "",
  sizeof(Obstacle),
  7,
  obstacle__field_descriptors,
  obstacle__field_indices_by_name,
  1,  obstacle__number_ranges,
  (ProtobufCMessageInit) obstacle__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor available_area__field_descriptors[8] =
{
  {
    "object_id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(AvailableArea, object_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "x1",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(AvailableArea, x1),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "y1",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(AvailableArea, y1),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "x2",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(AvailableArea, x2),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "y2",
    5,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(AvailableArea, y2),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "camera",
    6,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(AvailableArea, camera),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "lane_id",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(AvailableArea, has_lane_id),
    offsetof(AvailableArea, lane_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "heading",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(AvailableArea, has_heading),
    offsetof(AvailableArea, heading),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned available_area__field_indices_by_name[] = {
  5,   /* field[5] = camera */
  7,   /* field[7] = heading */
  6,   /* field[6] = lane_id */
  0,   /* field[0] = object_id */
  1,   /* field[1] = x1 */
  3,   /* field[3] = x2 */
  2,   /* field[2] = y1 */
  4,   /* field[4] = y2 */
};
static const ProtobufCIntRange available_area__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 8 }
};
const ProtobufCMessageDescriptor available_area__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "AvailableArea",
  "AvailableArea",
  "AvailableArea",
  "",
  sizeof(AvailableArea),
  8,
  available_area__field_descriptors,
  available_area__field_indices_by_name,
  1,  available_area__number_ranges,
  (ProtobufCMessageInit) available_area__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor base__field_descriptors[1] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Base, id),
    &id__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned base__field_indices_by_name[] = {
  0,   /* field[0] = id */
};
static const ProtobufCIntRange base__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor base__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Base",
  "Base",
  "Base",
  "",
  sizeof(Base),
  1,
  base__field_descriptors,
  base__field_indices_by_name,
  1,  base__number_ranges,
  (ProtobufCMessageInit) base__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor crowd__field_descriptors[2] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Crowd, id),
    &id__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pedestrian",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Crowd, n_pedestrian),
    offsetof(Crowd, pedestrian),
    &pedestrian__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned crowd__field_indices_by_name[] = {
  0,   /* field[0] = id */
  1,   /* field[1] = pedestrian */
};
static const ProtobufCIntRange crowd__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor crowd__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Crowd",
  "Crowd",
  "Crowd",
  "",
  sizeof(Crowd),
  2,
  crowd__field_descriptors,
  crowd__field_indices_by_name,
  1,  crowd__number_ranges,
  (ProtobufCMessageInit) crowd__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor obstacles__field_descriptors[2] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Obstacles, id),
    &id__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "obstacle",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Obstacles, n_obstacle),
    offsetof(Obstacles, obstacle),
    &obstacle__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned obstacles__field_indices_by_name[] = {
  0,   /* field[0] = id */
  1,   /* field[1] = obstacle */
};
static const ProtobufCIntRange obstacles__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor obstacles__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Obstacles",
  "Obstacles",
  "Obstacles",
  "",
  sizeof(Obstacles),
  2,
  obstacles__field_descriptors,
  obstacles__field_indices_by_name,
  1,  obstacles__number_ranges,
  (ProtobufCMessageInit) obstacles__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor available_areas__field_descriptors[2] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(AvailableAreas, id),
    &id__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "area",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(AvailableAreas, n_area),
    offsetof(AvailableAreas, area),
    &available_area__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned available_areas__field_indices_by_name[] = {
  1,   /* field[1] = area */
  0,   /* field[0] = id */
};
static const ProtobufCIntRange available_areas__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor available_areas__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "AvailableAreas",
  "AvailableAreas",
  "AvailableAreas",
  "",
  sizeof(AvailableAreas),
  2,
  available_areas__field_descriptors,
  available_areas__field_indices_by_name,
  1,  available_areas__number_ranges,
  (ProtobufCMessageInit) available_areas__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue id__enum_values_by_number[7] =
{
  { "PEDESTRIAN_D", "ID__PEDESTRIAN_D", 1 },
  { "ILLEGAL_V1", "ID__ILLEGAL_V1", 2 },
  { "CAMERA_CAL", "ID__CAMERA_CAL", 3 },
  { "ROCKFALL_D", "ID__ROCKFALL_D", 4 },
  { "SEEING_D", "ID__SEEING_D", 5 },
  { "AVAILABLE_AREA", "ID__AVAILABLE_AREA", 6 },
  { "OBSTACLE_D", "ID__OBSTACLE_D", 7 },
};
static const ProtobufCIntRange id__value_ranges[] = {
{1, 0},{0, 7}
};
static const ProtobufCEnumValueIndex id__enum_values_by_name[7] =
{
  { "AVAILABLE_AREA", 5 },
  { "CAMERA_CAL", 2 },
  { "ILLEGAL_V1", 1 },
  { "OBSTACLE_D", 6 },
  { "PEDESTRIAN_D", 0 },
  { "ROCKFALL_D", 3 },
  { "SEEING_D", 4 },
};
const ProtobufCEnumDescriptor id__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "ID",
  "ID",
  "ID",
  "",
  7,
  id__enum_values_by_number,
  7,
  id__enum_values_by_name,
  1,
  id__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue type__enum_values_by_number[3] =
{
  { "HUMAN", "TYPE__HUMAN", 1 },
  { "VEHICLE", "TYPE__VEHICLE", 2 },
  { "MOTORCYCLE", "TYPE__MOTORCYCLE", 3 },
};
static const ProtobufCIntRange type__value_ranges[] = {
{1, 0},{0, 3}
};
static const ProtobufCEnumValueIndex type__enum_values_by_name[3] =
{
  { "HUMAN", 0 },
  { "MOTORCYCLE", 2 },
  { "VEHICLE", 1 },
};
const ProtobufCEnumDescriptor type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "TYPE",
  "TYPE",
  "TYPE",
  "",
  3,
  type__enum_values_by_number,
  3,
  type__enum_values_by_name,
  1,
  type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
