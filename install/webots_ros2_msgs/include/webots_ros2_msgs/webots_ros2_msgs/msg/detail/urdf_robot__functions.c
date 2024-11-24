// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from webots_ros2_msgs:msg/UrdfRobot.idl
// generated code does not contain a copyright notice
#include "webots_ros2_msgs/msg/detail/urdf_robot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `urdf_path`
// Member `robot_description`
// Member `relative_path_prefix`
// Member `translation`
// Member `rotation`
// Member `init_pos`
#include "rosidl_runtime_c/string_functions.h"

bool
webots_ros2_msgs__msg__UrdfRobot__init(webots_ros2_msgs__msg__UrdfRobot * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    webots_ros2_msgs__msg__UrdfRobot__fini(msg);
    return false;
  }
  // urdf_path
  if (!rosidl_runtime_c__String__init(&msg->urdf_path)) {
    webots_ros2_msgs__msg__UrdfRobot__fini(msg);
    return false;
  }
  // robot_description
  if (!rosidl_runtime_c__String__init(&msg->robot_description)) {
    webots_ros2_msgs__msg__UrdfRobot__fini(msg);
    return false;
  }
  // relative_path_prefix
  if (!rosidl_runtime_c__String__init(&msg->relative_path_prefix)) {
    webots_ros2_msgs__msg__UrdfRobot__fini(msg);
    return false;
  }
  // translation
  if (!rosidl_runtime_c__String__init(&msg->translation)) {
    webots_ros2_msgs__msg__UrdfRobot__fini(msg);
    return false;
  }
  // rotation
  if (!rosidl_runtime_c__String__init(&msg->rotation)) {
    webots_ros2_msgs__msg__UrdfRobot__fini(msg);
    return false;
  }
  // normal
  // box_collision
  // init_pos
  if (!rosidl_runtime_c__String__init(&msg->init_pos)) {
    webots_ros2_msgs__msg__UrdfRobot__fini(msg);
    return false;
  }
  return true;
}

void
webots_ros2_msgs__msg__UrdfRobot__fini(webots_ros2_msgs__msg__UrdfRobot * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // urdf_path
  rosidl_runtime_c__String__fini(&msg->urdf_path);
  // robot_description
  rosidl_runtime_c__String__fini(&msg->robot_description);
  // relative_path_prefix
  rosidl_runtime_c__String__fini(&msg->relative_path_prefix);
  // translation
  rosidl_runtime_c__String__fini(&msg->translation);
  // rotation
  rosidl_runtime_c__String__fini(&msg->rotation);
  // normal
  // box_collision
  // init_pos
  rosidl_runtime_c__String__fini(&msg->init_pos);
}

bool
webots_ros2_msgs__msg__UrdfRobot__are_equal(const webots_ros2_msgs__msg__UrdfRobot * lhs, const webots_ros2_msgs__msg__UrdfRobot * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // urdf_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->urdf_path), &(rhs->urdf_path)))
  {
    return false;
  }
  // robot_description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_description), &(rhs->robot_description)))
  {
    return false;
  }
  // relative_path_prefix
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->relative_path_prefix), &(rhs->relative_path_prefix)))
  {
    return false;
  }
  // translation
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->translation), &(rhs->translation)))
  {
    return false;
  }
  // rotation
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->rotation), &(rhs->rotation)))
  {
    return false;
  }
  // normal
  if (lhs->normal != rhs->normal) {
    return false;
  }
  // box_collision
  if (lhs->box_collision != rhs->box_collision) {
    return false;
  }
  // init_pos
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->init_pos), &(rhs->init_pos)))
  {
    return false;
  }
  return true;
}

bool
webots_ros2_msgs__msg__UrdfRobot__copy(
  const webots_ros2_msgs__msg__UrdfRobot * input,
  webots_ros2_msgs__msg__UrdfRobot * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // urdf_path
  if (!rosidl_runtime_c__String__copy(
      &(input->urdf_path), &(output->urdf_path)))
  {
    return false;
  }
  // robot_description
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_description), &(output->robot_description)))
  {
    return false;
  }
  // relative_path_prefix
  if (!rosidl_runtime_c__String__copy(
      &(input->relative_path_prefix), &(output->relative_path_prefix)))
  {
    return false;
  }
  // translation
  if (!rosidl_runtime_c__String__copy(
      &(input->translation), &(output->translation)))
  {
    return false;
  }
  // rotation
  if (!rosidl_runtime_c__String__copy(
      &(input->rotation), &(output->rotation)))
  {
    return false;
  }
  // normal
  output->normal = input->normal;
  // box_collision
  output->box_collision = input->box_collision;
  // init_pos
  if (!rosidl_runtime_c__String__copy(
      &(input->init_pos), &(output->init_pos)))
  {
    return false;
  }
  return true;
}

webots_ros2_msgs__msg__UrdfRobot *
webots_ros2_msgs__msg__UrdfRobot__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_ros2_msgs__msg__UrdfRobot * msg = (webots_ros2_msgs__msg__UrdfRobot *)allocator.allocate(sizeof(webots_ros2_msgs__msg__UrdfRobot), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(webots_ros2_msgs__msg__UrdfRobot));
  bool success = webots_ros2_msgs__msg__UrdfRobot__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
webots_ros2_msgs__msg__UrdfRobot__destroy(webots_ros2_msgs__msg__UrdfRobot * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    webots_ros2_msgs__msg__UrdfRobot__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
webots_ros2_msgs__msg__UrdfRobot__Sequence__init(webots_ros2_msgs__msg__UrdfRobot__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_ros2_msgs__msg__UrdfRobot * data = NULL;

  if (size) {
    data = (webots_ros2_msgs__msg__UrdfRobot *)allocator.zero_allocate(size, sizeof(webots_ros2_msgs__msg__UrdfRobot), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = webots_ros2_msgs__msg__UrdfRobot__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        webots_ros2_msgs__msg__UrdfRobot__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
webots_ros2_msgs__msg__UrdfRobot__Sequence__fini(webots_ros2_msgs__msg__UrdfRobot__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      webots_ros2_msgs__msg__UrdfRobot__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

webots_ros2_msgs__msg__UrdfRobot__Sequence *
webots_ros2_msgs__msg__UrdfRobot__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_ros2_msgs__msg__UrdfRobot__Sequence * array = (webots_ros2_msgs__msg__UrdfRobot__Sequence *)allocator.allocate(sizeof(webots_ros2_msgs__msg__UrdfRobot__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = webots_ros2_msgs__msg__UrdfRobot__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
webots_ros2_msgs__msg__UrdfRobot__Sequence__destroy(webots_ros2_msgs__msg__UrdfRobot__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    webots_ros2_msgs__msg__UrdfRobot__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
webots_ros2_msgs__msg__UrdfRobot__Sequence__are_equal(const webots_ros2_msgs__msg__UrdfRobot__Sequence * lhs, const webots_ros2_msgs__msg__UrdfRobot__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!webots_ros2_msgs__msg__UrdfRobot__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
webots_ros2_msgs__msg__UrdfRobot__Sequence__copy(
  const webots_ros2_msgs__msg__UrdfRobot__Sequence * input,
  webots_ros2_msgs__msg__UrdfRobot__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(webots_ros2_msgs__msg__UrdfRobot);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    webots_ros2_msgs__msg__UrdfRobot * data =
      (webots_ros2_msgs__msg__UrdfRobot *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!webots_ros2_msgs__msg__UrdfRobot__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          webots_ros2_msgs__msg__UrdfRobot__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!webots_ros2_msgs__msg__UrdfRobot__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
