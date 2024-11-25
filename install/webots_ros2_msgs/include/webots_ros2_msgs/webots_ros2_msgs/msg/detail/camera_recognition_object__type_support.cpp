// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from webots_ros2_msgs:msg/CameraRecognitionObject.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "webots_ros2_msgs/msg/detail/camera_recognition_object__functions.h"
#include "webots_ros2_msgs/msg/detail/camera_recognition_object__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace webots_ros2_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CameraRecognitionObject_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) webots_ros2_msgs::msg::CameraRecognitionObject(_init);
}

void CameraRecognitionObject_fini_function(void * message_memory)
{
  auto typed_message = static_cast<webots_ros2_msgs::msg::CameraRecognitionObject *>(message_memory);
  typed_message->~CameraRecognitionObject();
}

size_t size_function__CameraRecognitionObject__colors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std_msgs::msg::ColorRGBA> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CameraRecognitionObject__colors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std_msgs::msg::ColorRGBA> *>(untyped_member);
  return &member[index];
}

void * get_function__CameraRecognitionObject__colors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std_msgs::msg::ColorRGBA> *>(untyped_member);
  return &member[index];
}

void fetch_function__CameraRecognitionObject__colors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std_msgs::msg::ColorRGBA *>(
    get_const_function__CameraRecognitionObject__colors(untyped_member, index));
  auto & value = *reinterpret_cast<std_msgs::msg::ColorRGBA *>(untyped_value);
  value = item;
}

void assign_function__CameraRecognitionObject__colors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std_msgs::msg::ColorRGBA *>(
    get_function__CameraRecognitionObject__colors(untyped_member, index));
  const auto & value = *reinterpret_cast<const std_msgs::msg::ColorRGBA *>(untyped_value);
  item = value;
}

void resize_function__CameraRecognitionObject__colors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std_msgs::msg::ColorRGBA> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CameraRecognitionObject_message_member_array[5] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(webots_ros2_msgs::msg::CameraRecognitionObject, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseStamped>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(webots_ros2_msgs::msg::CameraRecognitionObject, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bbox",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vision_msgs::msg::BoundingBox2D>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(webots_ros2_msgs::msg::CameraRecognitionObject, bbox),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "colors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::ColorRGBA>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(webots_ros2_msgs::msg::CameraRecognitionObject, colors),  // bytes offset in struct
    nullptr,  // default value
    size_function__CameraRecognitionObject__colors,  // size() function pointer
    get_const_function__CameraRecognitionObject__colors,  // get_const(index) function pointer
    get_function__CameraRecognitionObject__colors,  // get(index) function pointer
    fetch_function__CameraRecognitionObject__colors,  // fetch(index, &value) function pointer
    assign_function__CameraRecognitionObject__colors,  // assign(index, value) function pointer
    resize_function__CameraRecognitionObject__colors  // resize(index) function pointer
  },
  {
    "model",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(webots_ros2_msgs::msg::CameraRecognitionObject, model),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CameraRecognitionObject_message_members = {
  "webots_ros2_msgs::msg",  // message namespace
  "CameraRecognitionObject",  // message name
  5,  // number of fields
  sizeof(webots_ros2_msgs::msg::CameraRecognitionObject),
  false,  // has_any_key_member_
  CameraRecognitionObject_message_member_array,  // message members
  CameraRecognitionObject_init_function,  // function to initialize message memory (memory has to be allocated)
  CameraRecognitionObject_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CameraRecognitionObject_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CameraRecognitionObject_message_members,
  get_message_typesupport_handle_function,
  &webots_ros2_msgs__msg__CameraRecognitionObject__get_type_hash,
  &webots_ros2_msgs__msg__CameraRecognitionObject__get_type_description,
  &webots_ros2_msgs__msg__CameraRecognitionObject__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace webots_ros2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<webots_ros2_msgs::msg::CameraRecognitionObject>()
{
  return &::webots_ros2_msgs::msg::rosidl_typesupport_introspection_cpp::CameraRecognitionObject_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, webots_ros2_msgs, msg, CameraRecognitionObject)() {
  return &::webots_ros2_msgs::msg::rosidl_typesupport_introspection_cpp::CameraRecognitionObject_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
