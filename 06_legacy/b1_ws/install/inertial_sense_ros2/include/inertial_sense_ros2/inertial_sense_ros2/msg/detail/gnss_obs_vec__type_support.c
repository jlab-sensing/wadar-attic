// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from inertial_sense_ros2:msg/GNSSObsVec.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "inertial_sense_ros2/msg/detail/gnss_obs_vec__rosidl_typesupport_introspection_c.h"
#include "inertial_sense_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "inertial_sense_ros2/msg/detail/gnss_obs_vec__functions.h"
#include "inertial_sense_ros2/msg/detail/gnss_obs_vec__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `time`
#include "inertial_sense_ros2/msg/g_time.h"
// Member `time`
#include "inertial_sense_ros2/msg/detail/g_time__rosidl_typesupport_introspection_c.h"
// Member `obs`
#include "inertial_sense_ros2/msg/gnss_observation.h"
// Member `obs`
#include "inertial_sense_ros2/msg/detail/gnss_observation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__GNSSObsVec_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  inertial_sense_ros2__msg__GNSSObsVec__init(message_memory);
}

void inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__GNSSObsVec_fini_function(void * message_memory)
{
  inertial_sense_ros2__msg__GNSSObsVec__fini(message_memory);
}

size_t inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__size_function__GNSSObsVec__obs(
  const void * untyped_member)
{
  const inertial_sense_ros2__msg__GNSSObservation__Sequence * member =
    (const inertial_sense_ros2__msg__GNSSObservation__Sequence *)(untyped_member);
  return member->size;
}

const void * inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__get_const_function__GNSSObsVec__obs(
  const void * untyped_member, size_t index)
{
  const inertial_sense_ros2__msg__GNSSObservation__Sequence * member =
    (const inertial_sense_ros2__msg__GNSSObservation__Sequence *)(untyped_member);
  return &member->data[index];
}

void * inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__get_function__GNSSObsVec__obs(
  void * untyped_member, size_t index)
{
  inertial_sense_ros2__msg__GNSSObservation__Sequence * member =
    (inertial_sense_ros2__msg__GNSSObservation__Sequence *)(untyped_member);
  return &member->data[index];
}

void inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__fetch_function__GNSSObsVec__obs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const inertial_sense_ros2__msg__GNSSObservation * item =
    ((const inertial_sense_ros2__msg__GNSSObservation *)
    inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__get_const_function__GNSSObsVec__obs(untyped_member, index));
  inertial_sense_ros2__msg__GNSSObservation * value =
    (inertial_sense_ros2__msg__GNSSObservation *)(untyped_value);
  *value = *item;
}

void inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__assign_function__GNSSObsVec__obs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  inertial_sense_ros2__msg__GNSSObservation * item =
    ((inertial_sense_ros2__msg__GNSSObservation *)
    inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__get_function__GNSSObsVec__obs(untyped_member, index));
  const inertial_sense_ros2__msg__GNSSObservation * value =
    (const inertial_sense_ros2__msg__GNSSObservation *)(untyped_value);
  *item = *value;
}

bool inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__resize_function__GNSSObsVec__obs(
  void * untyped_member, size_t size)
{
  inertial_sense_ros2__msg__GNSSObservation__Sequence * member =
    (inertial_sense_ros2__msg__GNSSObservation__Sequence *)(untyped_member);
  inertial_sense_ros2__msg__GNSSObservation__Sequence__fini(member);
  return inertial_sense_ros2__msg__GNSSObservation__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__GNSSObsVec_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inertial_sense_ros2__msg__GNSSObsVec, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inertial_sense_ros2__msg__GNSSObsVec, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inertial_sense_ros2__msg__GNSSObsVec, obs),  // bytes offset in struct
    NULL,  // default value
    inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__size_function__GNSSObsVec__obs,  // size() function pointer
    inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__get_const_function__GNSSObsVec__obs,  // get_const(index) function pointer
    inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__get_function__GNSSObsVec__obs,  // get(index) function pointer
    inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__fetch_function__GNSSObsVec__obs,  // fetch(index, &value) function pointer
    inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__assign_function__GNSSObsVec__obs,  // assign(index, value) function pointer
    inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__resize_function__GNSSObsVec__obs  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__GNSSObsVec_message_members = {
  "inertial_sense_ros2__msg",  // message namespace
  "GNSSObsVec",  // message name
  3,  // number of fields
  sizeof(inertial_sense_ros2__msg__GNSSObsVec),
  inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__GNSSObsVec_message_member_array,  // message members
  inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__GNSSObsVec_init_function,  // function to initialize message memory (memory has to be allocated)
  inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__GNSSObsVec_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__GNSSObsVec_message_type_support_handle = {
  0,
  &inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__GNSSObsVec_message_members,
  get_message_typesupport_handle_function,
  &inertial_sense_ros2__msg__GNSSObsVec__get_type_hash,
  &inertial_sense_ros2__msg__GNSSObsVec__get_type_description,
  &inertial_sense_ros2__msg__GNSSObsVec__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_inertial_sense_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, inertial_sense_ros2, msg, GNSSObsVec)() {
  inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__GNSSObsVec_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__GNSSObsVec_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, inertial_sense_ros2, msg, GTime)();
  inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__GNSSObsVec_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, inertial_sense_ros2, msg, GNSSObservation)();
  if (!inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__GNSSObsVec_message_type_support_handle.typesupport_identifier) {
    inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__GNSSObsVec_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &inertial_sense_ros2__msg__GNSSObsVec__rosidl_typesupport_introspection_c__GNSSObsVec_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
