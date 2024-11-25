// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from webots_ros2_msgs:msg/FloatStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "webots_ros2_msgs/msg/float_stamped.h"


#ifndef WEBOTS_ROS2_MSGS__MSG__DETAIL__FLOAT_STAMPED__STRUCT_H_
#define WEBOTS_ROS2_MSGS__MSG__DETAIL__FLOAT_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/FloatStamped in the package webots_ros2_msgs.
typedef struct webots_ros2_msgs__msg__FloatStamped
{
  std_msgs__msg__Header header;
  double data;
} webots_ros2_msgs__msg__FloatStamped;

// Struct for a sequence of webots_ros2_msgs__msg__FloatStamped.
typedef struct webots_ros2_msgs__msg__FloatStamped__Sequence
{
  webots_ros2_msgs__msg__FloatStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_ros2_msgs__msg__FloatStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEBOTS_ROS2_MSGS__MSG__DETAIL__FLOAT_STAMPED__STRUCT_H_
