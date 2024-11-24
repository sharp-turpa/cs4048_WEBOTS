// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from webots_ros2_msgs:msg/CameraRecognitionObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "webots_ros2_msgs/msg/camera_recognition_object.h"


#ifndef WEBOTS_ROS2_MSGS__MSG__DETAIL__CAMERA_RECOGNITION_OBJECT__STRUCT_H_
#define WEBOTS_ROS2_MSGS__MSG__DETAIL__CAMERA_RECOGNITION_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'bbox'
#include "vision_msgs/msg/detail/bounding_box2_d__struct.h"
// Member 'colors'
#include "std_msgs/msg/detail/color_rgba__struct.h"
// Member 'model'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CameraRecognitionObject in the package webots_ros2_msgs.
typedef struct webots_ros2_msgs__msg__CameraRecognitionObject
{
  int32_t id;
  geometry_msgs__msg__PoseStamped pose;
  vision_msgs__msg__BoundingBox2D bbox;
  std_msgs__msg__ColorRGBA__Sequence colors;
  rosidl_runtime_c__String model;
} webots_ros2_msgs__msg__CameraRecognitionObject;

// Struct for a sequence of webots_ros2_msgs__msg__CameraRecognitionObject.
typedef struct webots_ros2_msgs__msg__CameraRecognitionObject__Sequence
{
  webots_ros2_msgs__msg__CameraRecognitionObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_ros2_msgs__msg__CameraRecognitionObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEBOTS_ROS2_MSGS__MSG__DETAIL__CAMERA_RECOGNITION_OBJECT__STRUCT_H_
