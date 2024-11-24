// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from webots_ros2_msgs:srv/SpawnUrdfRobot.idl
// generated code does not contain a copyright notice

#include "webots_ros2_msgs/srv/detail/spawn_urdf_robot__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
const rosidl_type_hash_t *
webots_ros2_msgs__srv__SpawnUrdfRobot__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x30, 0x70, 0xee, 0xcb, 0x1c, 0x1c, 0xe0, 0x9a,
      0xb8, 0x67, 0x63, 0xa3, 0xdd, 0x69, 0x35, 0x85,
      0xe6, 0xd7, 0xe7, 0x8e, 0xe0, 0x25, 0x89, 0xc4,
      0xde, 0x20, 0xd0, 0x85, 0xc1, 0xdb, 0x86, 0xec,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
const rosidl_type_hash_t *
webots_ros2_msgs__srv__SpawnUrdfRobot_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5a, 0xe2, 0x7a, 0xca, 0xbf, 0x7b, 0x58, 0x1f,
      0xd3, 0x2d, 0xbd, 0x11, 0xd4, 0x17, 0xf0, 0x32,
      0x4e, 0x71, 0x87, 0x7c, 0xf4, 0xf6, 0xa2, 0x6b,
      0x5d, 0x1e, 0x4e, 0xbb, 0x8c, 0xe4, 0x05, 0xa3,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
const rosidl_type_hash_t *
webots_ros2_msgs__srv__SpawnUrdfRobot_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd4, 0x33, 0x08, 0x7a, 0x86, 0x48, 0xde, 0xda,
      0xa3, 0x54, 0x3c, 0x25, 0xda, 0x29, 0xa9, 0x6b,
      0x53, 0x42, 0x62, 0x28, 0xec, 0x01, 0x75, 0x3e,
      0x07, 0x47, 0x49, 0x64, 0x7a, 0x8e, 0x59, 0x0f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
const rosidl_type_hash_t *
webots_ros2_msgs__srv__SpawnUrdfRobot_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xce, 0x03, 0xc5, 0xf6, 0xfd, 0x6a, 0x2b, 0x54,
      0xf9, 0xc8, 0xf1, 0x3f, 0xaa, 0xc2, 0x35, 0x56,
      0x74, 0xb4, 0x6c, 0xd2, 0x52, 0x01, 0x3b, 0xc5,
      0x11, 0x08, 0x5a, 0x68, 0x80, 0x66, 0x77, 0x45,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "webots_ros2_msgs/msg/detail/urdf_robot__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t webots_ros2_msgs__msg__UrdfRobot__EXPECTED_HASH = {1, {
    0xea, 0xf7, 0xa0, 0xf8, 0x1f, 0xf1, 0xf1, 0xf3,
    0x62, 0x6d, 0x4e, 0x7d, 0xc4, 0x58, 0xf3, 0x7d,
    0xeb, 0x11, 0xbc, 0xbf, 0xd0, 0x6d, 0x71, 0xe4,
    0x77, 0xff, 0x3f, 0x51, 0x6a, 0x8b, 0x5c, 0x77,
  }};
#endif

static char webots_ros2_msgs__srv__SpawnUrdfRobot__TYPE_NAME[] = "webots_ros2_msgs/srv/SpawnUrdfRobot";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char webots_ros2_msgs__msg__UrdfRobot__TYPE_NAME[] = "webots_ros2_msgs/msg/UrdfRobot";
static char webots_ros2_msgs__srv__SpawnUrdfRobot_Event__TYPE_NAME[] = "webots_ros2_msgs/srv/SpawnUrdfRobot_Event";
static char webots_ros2_msgs__srv__SpawnUrdfRobot_Request__TYPE_NAME[] = "webots_ros2_msgs/srv/SpawnUrdfRobot_Request";
static char webots_ros2_msgs__srv__SpawnUrdfRobot_Response__TYPE_NAME[] = "webots_ros2_msgs/srv/SpawnUrdfRobot_Response";

// Define type names, field names, and default values
static char webots_ros2_msgs__srv__SpawnUrdfRobot__FIELD_NAME__request_message[] = "request_message";
static char webots_ros2_msgs__srv__SpawnUrdfRobot__FIELD_NAME__response_message[] = "response_message";
static char webots_ros2_msgs__srv__SpawnUrdfRobot__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field webots_ros2_msgs__srv__SpawnUrdfRobot__FIELDS[] = {
  {
    {webots_ros2_msgs__srv__SpawnUrdfRobot__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {webots_ros2_msgs__srv__SpawnUrdfRobot_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__SpawnUrdfRobot__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {webots_ros2_msgs__srv__SpawnUrdfRobot_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__SpawnUrdfRobot__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {webots_ros2_msgs__srv__SpawnUrdfRobot_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription webots_ros2_msgs__srv__SpawnUrdfRobot__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__msg__UrdfRobot__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__SpawnUrdfRobot_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__SpawnUrdfRobot_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__SpawnUrdfRobot_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
webots_ros2_msgs__srv__SpawnUrdfRobot__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {webots_ros2_msgs__srv__SpawnUrdfRobot__TYPE_NAME, 35, 35},
      {webots_ros2_msgs__srv__SpawnUrdfRobot__FIELDS, 3, 3},
    },
    {webots_ros2_msgs__srv__SpawnUrdfRobot__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&webots_ros2_msgs__msg__UrdfRobot__EXPECTED_HASH, webots_ros2_msgs__msg__UrdfRobot__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = webots_ros2_msgs__msg__UrdfRobot__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = webots_ros2_msgs__srv__SpawnUrdfRobot_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = webots_ros2_msgs__srv__SpawnUrdfRobot_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = webots_ros2_msgs__srv__SpawnUrdfRobot_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char webots_ros2_msgs__srv__SpawnUrdfRobot_Request__FIELD_NAME__robot[] = "robot";

static rosidl_runtime_c__type_description__Field webots_ros2_msgs__srv__SpawnUrdfRobot_Request__FIELDS[] = {
  {
    {webots_ros2_msgs__srv__SpawnUrdfRobot_Request__FIELD_NAME__robot, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {webots_ros2_msgs__msg__UrdfRobot__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription webots_ros2_msgs__srv__SpawnUrdfRobot_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {webots_ros2_msgs__msg__UrdfRobot__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
webots_ros2_msgs__srv__SpawnUrdfRobot_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {webots_ros2_msgs__srv__SpawnUrdfRobot_Request__TYPE_NAME, 43, 43},
      {webots_ros2_msgs__srv__SpawnUrdfRobot_Request__FIELDS, 1, 1},
    },
    {webots_ros2_msgs__srv__SpawnUrdfRobot_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&webots_ros2_msgs__msg__UrdfRobot__EXPECTED_HASH, webots_ros2_msgs__msg__UrdfRobot__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = webots_ros2_msgs__msg__UrdfRobot__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char webots_ros2_msgs__srv__SpawnUrdfRobot_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field webots_ros2_msgs__srv__SpawnUrdfRobot_Response__FIELDS[] = {
  {
    {webots_ros2_msgs__srv__SpawnUrdfRobot_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
webots_ros2_msgs__srv__SpawnUrdfRobot_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {webots_ros2_msgs__srv__SpawnUrdfRobot_Response__TYPE_NAME, 44, 44},
      {webots_ros2_msgs__srv__SpawnUrdfRobot_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char webots_ros2_msgs__srv__SpawnUrdfRobot_Event__FIELD_NAME__info[] = "info";
static char webots_ros2_msgs__srv__SpawnUrdfRobot_Event__FIELD_NAME__request[] = "request";
static char webots_ros2_msgs__srv__SpawnUrdfRobot_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field webots_ros2_msgs__srv__SpawnUrdfRobot_Event__FIELDS[] = {
  {
    {webots_ros2_msgs__srv__SpawnUrdfRobot_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__SpawnUrdfRobot_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {webots_ros2_msgs__srv__SpawnUrdfRobot_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__SpawnUrdfRobot_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {webots_ros2_msgs__srv__SpawnUrdfRobot_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription webots_ros2_msgs__srv__SpawnUrdfRobot_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__msg__UrdfRobot__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__SpawnUrdfRobot_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__SpawnUrdfRobot_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
webots_ros2_msgs__srv__SpawnUrdfRobot_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {webots_ros2_msgs__srv__SpawnUrdfRobot_Event__TYPE_NAME, 41, 41},
      {webots_ros2_msgs__srv__SpawnUrdfRobot_Event__FIELDS, 3, 3},
    },
    {webots_ros2_msgs__srv__SpawnUrdfRobot_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&webots_ros2_msgs__msg__UrdfRobot__EXPECTED_HASH, webots_ros2_msgs__msg__UrdfRobot__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = webots_ros2_msgs__msg__UrdfRobot__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = webots_ros2_msgs__srv__SpawnUrdfRobot_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = webots_ros2_msgs__srv__SpawnUrdfRobot_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "UrdfRobot robot\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
webots_ros2_msgs__srv__SpawnUrdfRobot__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {webots_ros2_msgs__srv__SpawnUrdfRobot__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 33, 33},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
webots_ros2_msgs__srv__SpawnUrdfRobot_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {webots_ros2_msgs__srv__SpawnUrdfRobot_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
webots_ros2_msgs__srv__SpawnUrdfRobot_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {webots_ros2_msgs__srv__SpawnUrdfRobot_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
webots_ros2_msgs__srv__SpawnUrdfRobot_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {webots_ros2_msgs__srv__SpawnUrdfRobot_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
webots_ros2_msgs__srv__SpawnUrdfRobot__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *webots_ros2_msgs__srv__SpawnUrdfRobot__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *webots_ros2_msgs__msg__UrdfRobot__get_individual_type_description_source(NULL);
    sources[4] = *webots_ros2_msgs__srv__SpawnUrdfRobot_Event__get_individual_type_description_source(NULL);
    sources[5] = *webots_ros2_msgs__srv__SpawnUrdfRobot_Request__get_individual_type_description_source(NULL);
    sources[6] = *webots_ros2_msgs__srv__SpawnUrdfRobot_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
webots_ros2_msgs__srv__SpawnUrdfRobot_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *webots_ros2_msgs__srv__SpawnUrdfRobot_Request__get_individual_type_description_source(NULL),
    sources[1] = *webots_ros2_msgs__msg__UrdfRobot__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
webots_ros2_msgs__srv__SpawnUrdfRobot_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *webots_ros2_msgs__srv__SpawnUrdfRobot_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
webots_ros2_msgs__srv__SpawnUrdfRobot_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *webots_ros2_msgs__srv__SpawnUrdfRobot_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *webots_ros2_msgs__msg__UrdfRobot__get_individual_type_description_source(NULL);
    sources[4] = *webots_ros2_msgs__srv__SpawnUrdfRobot_Request__get_individual_type_description_source(NULL);
    sources[5] = *webots_ros2_msgs__srv__SpawnUrdfRobot_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
