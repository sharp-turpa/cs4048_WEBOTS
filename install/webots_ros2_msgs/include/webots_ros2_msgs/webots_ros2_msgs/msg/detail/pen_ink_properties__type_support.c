// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from webots_ros2_msgs:msg/PenInkProperties.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "webots_ros2_msgs/msg/detail/pen_ink_properties__rosidl_typesupport_introspection_c.h"
#include "webots_ros2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "webots_ros2_msgs/msg/detail/pen_ink_properties__functions.h"
#include "webots_ros2_msgs/msg/detail/pen_ink_properties__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void webots_ros2_msgs__msg__PenInkProperties__rosidl_typesupport_introspection_c__PenInkProperties_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  webots_ros2_msgs__msg__PenInkProperties__init(message_memory);
}

void webots_ros2_msgs__msg__PenInkProperties__rosidl_typesupport_introspection_c__PenInkProperties_fini_function(void * message_memory)
{
  webots_ros2_msgs__msg__PenInkProperties__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember webots_ros2_msgs__msg__PenInkProperties__rosidl_typesupport_introspection_c__PenInkProperties_message_member_array[2] = {
  {
    "color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(webots_ros2_msgs__msg__PenInkProperties, color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "density",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(webots_ros2_msgs__msg__PenInkProperties, density),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers webots_ros2_msgs__msg__PenInkProperties__rosidl_typesupport_introspection_c__PenInkProperties_message_members = {
  "webots_ros2_msgs__msg",  // message namespace
  "PenInkProperties",  // message name
  2,  // number of fields
  sizeof(webots_ros2_msgs__msg__PenInkProperties),
  false,  // has_any_key_member_
  webots_ros2_msgs__msg__PenInkProperties__rosidl_typesupport_introspection_c__PenInkProperties_message_member_array,  // message members
  webots_ros2_msgs__msg__PenInkProperties__rosidl_typesupport_introspection_c__PenInkProperties_init_function,  // function to initialize message memory (memory has to be allocated)
  webots_ros2_msgs__msg__PenInkProperties__rosidl_typesupport_introspection_c__PenInkProperties_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t webots_ros2_msgs__msg__PenInkProperties__rosidl_typesupport_introspection_c__PenInkProperties_message_type_support_handle = {
  0,
  &webots_ros2_msgs__msg__PenInkProperties__rosidl_typesupport_introspection_c__PenInkProperties_message_members,
  get_message_typesupport_handle_function,
  &webots_ros2_msgs__msg__PenInkProperties__get_type_hash,
  &webots_ros2_msgs__msg__PenInkProperties__get_type_description,
  &webots_ros2_msgs__msg__PenInkProperties__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_webots_ros2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, webots_ros2_msgs, msg, PenInkProperties)() {
  if (!webots_ros2_msgs__msg__PenInkProperties__rosidl_typesupport_introspection_c__PenInkProperties_message_type_support_handle.typesupport_identifier) {
    webots_ros2_msgs__msg__PenInkProperties__rosidl_typesupport_introspection_c__PenInkProperties_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &webots_ros2_msgs__msg__PenInkProperties__rosidl_typesupport_introspection_c__PenInkProperties_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
