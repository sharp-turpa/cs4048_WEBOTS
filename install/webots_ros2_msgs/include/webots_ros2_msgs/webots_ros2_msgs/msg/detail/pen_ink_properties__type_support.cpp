// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from webots_ros2_msgs:msg/PenInkProperties.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "webots_ros2_msgs/msg/detail/pen_ink_properties__functions.h"
#include "webots_ros2_msgs/msg/detail/pen_ink_properties__struct.hpp"
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

void PenInkProperties_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) webots_ros2_msgs::msg::PenInkProperties(_init);
}

void PenInkProperties_fini_function(void * message_memory)
{
  auto typed_message = static_cast<webots_ros2_msgs::msg::PenInkProperties *>(message_memory);
  typed_message->~PenInkProperties();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PenInkProperties_message_member_array[2] = {
  {
    "color",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(webots_ros2_msgs::msg::PenInkProperties, color),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "density",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(webots_ros2_msgs::msg::PenInkProperties, density),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PenInkProperties_message_members = {
  "webots_ros2_msgs::msg",  // message namespace
  "PenInkProperties",  // message name
  2,  // number of fields
  sizeof(webots_ros2_msgs::msg::PenInkProperties),
  false,  // has_any_key_member_
  PenInkProperties_message_member_array,  // message members
  PenInkProperties_init_function,  // function to initialize message memory (memory has to be allocated)
  PenInkProperties_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PenInkProperties_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PenInkProperties_message_members,
  get_message_typesupport_handle_function,
  &webots_ros2_msgs__msg__PenInkProperties__get_type_hash,
  &webots_ros2_msgs__msg__PenInkProperties__get_type_description,
  &webots_ros2_msgs__msg__PenInkProperties__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace webots_ros2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<webots_ros2_msgs::msg::PenInkProperties>()
{
  return &::webots_ros2_msgs::msg::rosidl_typesupport_introspection_cpp::PenInkProperties_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, webots_ros2_msgs, msg, PenInkProperties)() {
  return &::webots_ros2_msgs::msg::rosidl_typesupport_introspection_cpp::PenInkProperties_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
