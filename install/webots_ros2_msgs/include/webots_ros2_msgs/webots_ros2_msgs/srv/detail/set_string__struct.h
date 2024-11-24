// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from webots_ros2_msgs:srv/SetString.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "webots_ros2_msgs/srv/set_string.h"


#ifndef WEBOTS_ROS2_MSGS__SRV__DETAIL__SET_STRING__STRUCT_H_
#define WEBOTS_ROS2_MSGS__SRV__DETAIL__SET_STRING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetString in the package webots_ros2_msgs.
typedef struct webots_ros2_msgs__srv__SetString_Request
{
  rosidl_runtime_c__String value;
} webots_ros2_msgs__srv__SetString_Request;

// Struct for a sequence of webots_ros2_msgs__srv__SetString_Request.
typedef struct webots_ros2_msgs__srv__SetString_Request__Sequence
{
  webots_ros2_msgs__srv__SetString_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_ros2_msgs__srv__SetString_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetString in the package webots_ros2_msgs.
typedef struct webots_ros2_msgs__srv__SetString_Response
{
  bool success;
} webots_ros2_msgs__srv__SetString_Response;

// Struct for a sequence of webots_ros2_msgs__srv__SetString_Response.
typedef struct webots_ros2_msgs__srv__SetString_Response__Sequence
{
  webots_ros2_msgs__srv__SetString_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_ros2_msgs__srv__SetString_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  webots_ros2_msgs__srv__SetString_Event__request__MAX_SIZE = 1
};
// response
enum
{
  webots_ros2_msgs__srv__SetString_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetString in the package webots_ros2_msgs.
typedef struct webots_ros2_msgs__srv__SetString_Event
{
  service_msgs__msg__ServiceEventInfo info;
  webots_ros2_msgs__srv__SetString_Request__Sequence request;
  webots_ros2_msgs__srv__SetString_Response__Sequence response;
} webots_ros2_msgs__srv__SetString_Event;

// Struct for a sequence of webots_ros2_msgs__srv__SetString_Event.
typedef struct webots_ros2_msgs__srv__SetString_Event__Sequence
{
  webots_ros2_msgs__srv__SetString_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_ros2_msgs__srv__SetString_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEBOTS_ROS2_MSGS__SRV__DETAIL__SET_STRING__STRUCT_H_
