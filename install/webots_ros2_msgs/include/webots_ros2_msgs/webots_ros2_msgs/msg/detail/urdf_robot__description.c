// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from webots_ros2_msgs:msg/UrdfRobot.idl
// generated code does not contain a copyright notice

#include "webots_ros2_msgs/msg/detail/urdf_robot__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
const rosidl_type_hash_t *
webots_ros2_msgs__msg__UrdfRobot__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xea, 0xf7, 0xa0, 0xf8, 0x1f, 0xf1, 0xf1, 0xf3,
      0x62, 0x6d, 0x4e, 0x7d, 0xc4, 0x58, 0xf3, 0x7d,
      0xeb, 0x11, 0xbc, 0xbf, 0xd0, 0x6d, 0x71, 0xe4,
      0x77, 0xff, 0x3f, 0x51, 0x6a, 0x8b, 0x5c, 0x77,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char webots_ros2_msgs__msg__UrdfRobot__TYPE_NAME[] = "webots_ros2_msgs/msg/UrdfRobot";

// Define type names, field names, and default values
static char webots_ros2_msgs__msg__UrdfRobot__FIELD_NAME__name[] = "name";
static char webots_ros2_msgs__msg__UrdfRobot__FIELD_NAME__urdf_path[] = "urdf_path";
static char webots_ros2_msgs__msg__UrdfRobot__FIELD_NAME__robot_description[] = "robot_description";
static char webots_ros2_msgs__msg__UrdfRobot__FIELD_NAME__relative_path_prefix[] = "relative_path_prefix";
static char webots_ros2_msgs__msg__UrdfRobot__FIELD_NAME__translation[] = "translation";
static char webots_ros2_msgs__msg__UrdfRobot__FIELD_NAME__rotation[] = "rotation";
static char webots_ros2_msgs__msg__UrdfRobot__FIELD_NAME__normal[] = "normal";
static char webots_ros2_msgs__msg__UrdfRobot__FIELD_NAME__box_collision[] = "box_collision";
static char webots_ros2_msgs__msg__UrdfRobot__FIELD_NAME__init_pos[] = "init_pos";

static rosidl_runtime_c__type_description__Field webots_ros2_msgs__msg__UrdfRobot__FIELDS[] = {
  {
    {webots_ros2_msgs__msg__UrdfRobot__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__msg__UrdfRobot__FIELD_NAME__urdf_path, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__msg__UrdfRobot__FIELD_NAME__robot_description, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__msg__UrdfRobot__FIELD_NAME__relative_path_prefix, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__msg__UrdfRobot__FIELD_NAME__translation, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__msg__UrdfRobot__FIELD_NAME__rotation, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__msg__UrdfRobot__FIELD_NAME__normal, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__msg__UrdfRobot__FIELD_NAME__box_collision, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__msg__UrdfRobot__FIELD_NAME__init_pos, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
webots_ros2_msgs__msg__UrdfRobot__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {webots_ros2_msgs__msg__UrdfRobot__TYPE_NAME, 30, 30},
      {webots_ros2_msgs__msg__UrdfRobot__FIELDS, 9, 9},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "string urdf_path\n"
  "string robot_description\n"
  "string relative_path_prefix\n"
  "string translation\n"
  "string rotation\n"
  "bool normal\n"
  "bool box_collision\n"
  "string init_pos";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
webots_ros2_msgs__msg__UrdfRobot__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {webots_ros2_msgs__msg__UrdfRobot__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 164, 164},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
webots_ros2_msgs__msg__UrdfRobot__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *webots_ros2_msgs__msg__UrdfRobot__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
