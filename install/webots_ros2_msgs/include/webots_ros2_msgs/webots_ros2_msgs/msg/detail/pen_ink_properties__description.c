// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from webots_ros2_msgs:msg/PenInkProperties.idl
// generated code does not contain a copyright notice

#include "webots_ros2_msgs/msg/detail/pen_ink_properties__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
const rosidl_type_hash_t *
webots_ros2_msgs__msg__PenInkProperties__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7e, 0x38, 0xfd, 0xd6, 0x97, 0x13, 0x04, 0xc3,
      0xe2, 0x5d, 0x46, 0x1d, 0x13, 0x5a, 0x7d, 0x17,
      0x56, 0x38, 0x0d, 0x59, 0xdb, 0xd4, 0xc8, 0x61,
      0xd0, 0xa7, 0xea, 0x23, 0xc6, 0xc7, 0x5f, 0xe2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char webots_ros2_msgs__msg__PenInkProperties__TYPE_NAME[] = "webots_ros2_msgs/msg/PenInkProperties";

// Define type names, field names, and default values
static char webots_ros2_msgs__msg__PenInkProperties__FIELD_NAME__color[] = "color";
static char webots_ros2_msgs__msg__PenInkProperties__FIELD_NAME__density[] = "density";

static rosidl_runtime_c__type_description__Field webots_ros2_msgs__msg__PenInkProperties__FIELDS[] = {
  {
    {webots_ros2_msgs__msg__PenInkProperties__FIELD_NAME__color, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__msg__PenInkProperties__FIELD_NAME__density, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
webots_ros2_msgs__msg__PenInkProperties__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {webots_ros2_msgs__msg__PenInkProperties__TYPE_NAME, 37, 37},
      {webots_ros2_msgs__msg__PenInkProperties__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Set the ink properties of a pen device.\n"
  "# See https://www.cyberbotics.com/doc/reference/pen#wb_pen_set_ink_color for more details\n"
  "\n"
  "# Ink color in hexadecimal format\n"
  "int32 color\n"
  "\n"
  "# Ink density (similar in context to alpha of rgba)\n"
  "float32 density";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
webots_ros2_msgs__msg__PenInkProperties__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {webots_ros2_msgs__msg__PenInkProperties__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 248, 248},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
webots_ros2_msgs__msg__PenInkProperties__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *webots_ros2_msgs__msg__PenInkProperties__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
