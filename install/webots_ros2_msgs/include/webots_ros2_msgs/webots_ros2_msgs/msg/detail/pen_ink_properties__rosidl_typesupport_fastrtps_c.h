// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from webots_ros2_msgs:msg/PenInkProperties.idl
// generated code does not contain a copyright notice
#ifndef WEBOTS_ROS2_MSGS__MSG__DETAIL__PEN_INK_PROPERTIES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define WEBOTS_ROS2_MSGS__MSG__DETAIL__PEN_INK_PROPERTIES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "webots_ros2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "webots_ros2_msgs/msg/detail/pen_ink_properties__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_webots_ros2_msgs
bool cdr_serialize_webots_ros2_msgs__msg__PenInkProperties(
  const webots_ros2_msgs__msg__PenInkProperties * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_webots_ros2_msgs
bool cdr_deserialize_webots_ros2_msgs__msg__PenInkProperties(
  eprosima::fastcdr::Cdr &,
  webots_ros2_msgs__msg__PenInkProperties * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_webots_ros2_msgs
size_t get_serialized_size_webots_ros2_msgs__msg__PenInkProperties(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_webots_ros2_msgs
size_t max_serialized_size_webots_ros2_msgs__msg__PenInkProperties(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_webots_ros2_msgs
bool cdr_serialize_key_webots_ros2_msgs__msg__PenInkProperties(
  const webots_ros2_msgs__msg__PenInkProperties * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_webots_ros2_msgs
size_t get_serialized_size_key_webots_ros2_msgs__msg__PenInkProperties(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_webots_ros2_msgs
size_t max_serialized_size_key_webots_ros2_msgs__msg__PenInkProperties(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_webots_ros2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, webots_ros2_msgs, msg, PenInkProperties)();

#ifdef __cplusplus
}
#endif

#endif  // WEBOTS_ROS2_MSGS__MSG__DETAIL__PEN_INK_PROPERTIES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
