// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from webots_ros2_msgs:msg/PenInkProperties.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "webots_ros2_msgs/msg/pen_ink_properties.h"


#ifndef WEBOTS_ROS2_MSGS__MSG__DETAIL__PEN_INK_PROPERTIES__STRUCT_H_
#define WEBOTS_ROS2_MSGS__MSG__DETAIL__PEN_INK_PROPERTIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/PenInkProperties in the package webots_ros2_msgs.
/**
  * Set the ink properties of a pen device.
  * See https://www.cyberbotics.com/doc/reference/pen#wb_pen_set_ink_color for more details
 */
typedef struct webots_ros2_msgs__msg__PenInkProperties
{
  /// Ink color in hexadecimal format
  int32_t color;
  /// Ink density (similar in context to alpha of rgba)
  float density;
} webots_ros2_msgs__msg__PenInkProperties;

// Struct for a sequence of webots_ros2_msgs__msg__PenInkProperties.
typedef struct webots_ros2_msgs__msg__PenInkProperties__Sequence
{
  webots_ros2_msgs__msg__PenInkProperties * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_ros2_msgs__msg__PenInkProperties__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEBOTS_ROS2_MSGS__MSG__DETAIL__PEN_INK_PROPERTIES__STRUCT_H_
