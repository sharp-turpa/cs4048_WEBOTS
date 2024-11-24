// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from webots_ros2_msgs:msg/UrdfRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "webots_ros2_msgs/msg/urdf_robot.hpp"


#ifndef WEBOTS_ROS2_MSGS__MSG__DETAIL__URDF_ROBOT__STRUCT_HPP_
#define WEBOTS_ROS2_MSGS__MSG__DETAIL__URDF_ROBOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__webots_ros2_msgs__msg__UrdfRobot __attribute__((deprecated))
#else
# define DEPRECATED__webots_ros2_msgs__msg__UrdfRobot __declspec(deprecated)
#endif

namespace webots_ros2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UrdfRobot_
{
  using Type = UrdfRobot_<ContainerAllocator>;

  explicit UrdfRobot_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->urdf_path = "";
      this->robot_description = "";
      this->relative_path_prefix = "";
      this->translation = "";
      this->rotation = "";
      this->normal = false;
      this->box_collision = false;
      this->init_pos = "";
    }
  }

  explicit UrdfRobot_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    urdf_path(_alloc),
    robot_description(_alloc),
    relative_path_prefix(_alloc),
    translation(_alloc),
    rotation(_alloc),
    init_pos(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->urdf_path = "";
      this->robot_description = "";
      this->relative_path_prefix = "";
      this->translation = "";
      this->rotation = "";
      this->normal = false;
      this->box_collision = false;
      this->init_pos = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _urdf_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _urdf_path_type urdf_path;
  using _robot_description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_description_type robot_description;
  using _relative_path_prefix_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _relative_path_prefix_type relative_path_prefix;
  using _translation_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _translation_type translation;
  using _rotation_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _rotation_type rotation;
  using _normal_type =
    bool;
  _normal_type normal;
  using _box_collision_type =
    bool;
  _box_collision_type box_collision;
  using _init_pos_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _init_pos_type init_pos;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__urdf_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->urdf_path = _arg;
    return *this;
  }
  Type & set__robot_description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_description = _arg;
    return *this;
  }
  Type & set__relative_path_prefix(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->relative_path_prefix = _arg;
    return *this;
  }
  Type & set__translation(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->translation = _arg;
    return *this;
  }
  Type & set__rotation(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->rotation = _arg;
    return *this;
  }
  Type & set__normal(
    const bool & _arg)
  {
    this->normal = _arg;
    return *this;
  }
  Type & set__box_collision(
    const bool & _arg)
  {
    this->box_collision = _arg;
    return *this;
  }
  Type & set__init_pos(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->init_pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    webots_ros2_msgs::msg::UrdfRobot_<ContainerAllocator> *;
  using ConstRawPtr =
    const webots_ros2_msgs::msg::UrdfRobot_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<webots_ros2_msgs::msg::UrdfRobot_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<webots_ros2_msgs::msg::UrdfRobot_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      webots_ros2_msgs::msg::UrdfRobot_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<webots_ros2_msgs::msg::UrdfRobot_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      webots_ros2_msgs::msg::UrdfRobot_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<webots_ros2_msgs::msg::UrdfRobot_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<webots_ros2_msgs::msg::UrdfRobot_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<webots_ros2_msgs::msg::UrdfRobot_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__webots_ros2_msgs__msg__UrdfRobot
    std::shared_ptr<webots_ros2_msgs::msg::UrdfRobot_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__webots_ros2_msgs__msg__UrdfRobot
    std::shared_ptr<webots_ros2_msgs::msg::UrdfRobot_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UrdfRobot_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->urdf_path != other.urdf_path) {
      return false;
    }
    if (this->robot_description != other.robot_description) {
      return false;
    }
    if (this->relative_path_prefix != other.relative_path_prefix) {
      return false;
    }
    if (this->translation != other.translation) {
      return false;
    }
    if (this->rotation != other.rotation) {
      return false;
    }
    if (this->normal != other.normal) {
      return false;
    }
    if (this->box_collision != other.box_collision) {
      return false;
    }
    if (this->init_pos != other.init_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const UrdfRobot_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UrdfRobot_

// alias to use template instance with default allocator
using UrdfRobot =
  webots_ros2_msgs::msg::UrdfRobot_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace webots_ros2_msgs

#endif  // WEBOTS_ROS2_MSGS__MSG__DETAIL__URDF_ROBOT__STRUCT_HPP_
