// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from webots_ros2_msgs:srv/SetString.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "webots_ros2_msgs/srv/set_string.h"


#ifndef WEBOTS_ROS2_MSGS__SRV__DETAIL__SET_STRING__TYPE_SUPPORT_H_
#define WEBOTS_ROS2_MSGS__SRV__DETAIL__SET_STRING__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "webots_ros2_msgs/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  webots_ros2_msgs,
  srv,
  SetString_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  webots_ros2_msgs,
  srv,
  SetString_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  webots_ros2_msgs,
  srv,
  SetString_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  webots_ros2_msgs,
  srv,
  SetString
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  webots_ros2_msgs,
  srv,
  SetString
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  webots_ros2_msgs,
  srv,
  SetString
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // WEBOTS_ROS2_MSGS__SRV__DETAIL__SET_STRING__TYPE_SUPPORT_H_
