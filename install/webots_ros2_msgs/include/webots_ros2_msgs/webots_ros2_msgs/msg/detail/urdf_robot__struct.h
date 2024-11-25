// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from webots_ros2_msgs:msg/UrdfRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "webots_ros2_msgs/msg/urdf_robot.h"


#ifndef WEBOTS_ROS2_MSGS__MSG__DETAIL__URDF_ROBOT__STRUCT_H_
#define WEBOTS_ROS2_MSGS__MSG__DETAIL__URDF_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'urdf_path'
// Member 'robot_description'
// Member 'relative_path_prefix'
// Member 'translation'
// Member 'rotation'
// Member 'init_pos'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/UrdfRobot in the package webots_ros2_msgs.
typedef struct webots_ros2_msgs__msg__UrdfRobot
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String urdf_path;
  rosidl_runtime_c__String robot_description;
  rosidl_runtime_c__String relative_path_prefix;
  rosidl_runtime_c__String translation;
  rosidl_runtime_c__String rotation;
  bool normal;
  bool box_collision;
  rosidl_runtime_c__String init_pos;
} webots_ros2_msgs__msg__UrdfRobot;

// Struct for a sequence of webots_ros2_msgs__msg__UrdfRobot.
typedef struct webots_ros2_msgs__msg__UrdfRobot__Sequence
{
  webots_ros2_msgs__msg__UrdfRobot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_ros2_msgs__msg__UrdfRobot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEBOTS_ROS2_MSGS__MSG__DETAIL__URDF_ROBOT__STRUCT_H_
