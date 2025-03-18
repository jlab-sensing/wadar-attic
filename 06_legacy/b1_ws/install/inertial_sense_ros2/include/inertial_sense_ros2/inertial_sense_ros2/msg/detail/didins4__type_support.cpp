// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from inertial_sense_ros2:msg/DIDINS4.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "inertial_sense_ros2/msg/detail/didins4__functions.h"
#include "inertial_sense_ros2/msg/detail/didins4__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace inertial_sense_ros2
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DIDINS4_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) inertial_sense_ros2::msg::DIDINS4(_init);
}

void DIDINS4_fini_function(void * message_memory)
{
  auto typed_message = static_cast<inertial_sense_ros2::msg::DIDINS4 *>(message_memory);
  typed_message->~DIDINS4();
}

size_t size_function__DIDINS4__qe2b(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__DIDINS4__qe2b(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__DIDINS4__qe2b(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__DIDINS4__qe2b(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__DIDINS4__qe2b(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__DIDINS4__qe2b(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__DIDINS4__qe2b(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__DIDINS4__ve(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__DIDINS4__ve(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__DIDINS4__ve(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__DIDINS4__ve(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__DIDINS4__ve(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__DIDINS4__ve(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__DIDINS4__ve(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__DIDINS4__ecef(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__DIDINS4__ecef(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__DIDINS4__ecef(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__DIDINS4__ecef(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__DIDINS4__ecef(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__DIDINS4__ecef(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__DIDINS4__ecef(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DIDINS4_message_member_array[8] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inertial_sense_ros2::msg::DIDINS4, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "week",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inertial_sense_ros2::msg::DIDINS4, week),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "time_of_week",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inertial_sense_ros2::msg::DIDINS4, time_of_week),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ins_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inertial_sense_ros2::msg::DIDINS4, ins_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "hdw_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inertial_sense_ros2::msg::DIDINS4, hdw_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "qe2b",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(inertial_sense_ros2::msg::DIDINS4, qe2b),  // bytes offset in struct
    nullptr,  // default value
    size_function__DIDINS4__qe2b,  // size() function pointer
    get_const_function__DIDINS4__qe2b,  // get_const(index) function pointer
    get_function__DIDINS4__qe2b,  // get(index) function pointer
    fetch_function__DIDINS4__qe2b,  // fetch(index, &value) function pointer
    assign_function__DIDINS4__qe2b,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ve",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(inertial_sense_ros2::msg::DIDINS4, ve),  // bytes offset in struct
    nullptr,  // default value
    size_function__DIDINS4__ve,  // size() function pointer
    get_const_function__DIDINS4__ve,  // get_const(index) function pointer
    get_function__DIDINS4__ve,  // get(index) function pointer
    fetch_function__DIDINS4__ve,  // fetch(index, &value) function pointer
    assign_function__DIDINS4__ve,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ecef",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(inertial_sense_ros2::msg::DIDINS4, ecef),  // bytes offset in struct
    nullptr,  // default value
    size_function__DIDINS4__ecef,  // size() function pointer
    get_const_function__DIDINS4__ecef,  // get_const(index) function pointer
    get_function__DIDINS4__ecef,  // get(index) function pointer
    fetch_function__DIDINS4__ecef,  // fetch(index, &value) function pointer
    assign_function__DIDINS4__ecef,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DIDINS4_message_members = {
  "inertial_sense_ros2::msg",  // message namespace
  "DIDINS4",  // message name
  8,  // number of fields
  sizeof(inertial_sense_ros2::msg::DIDINS4),
  DIDINS4_message_member_array,  // message members
  DIDINS4_init_function,  // function to initialize message memory (memory has to be allocated)
  DIDINS4_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DIDINS4_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DIDINS4_message_members,
  get_message_typesupport_handle_function,
  &inertial_sense_ros2__msg__DIDINS4__get_type_hash,
  &inertial_sense_ros2__msg__DIDINS4__get_type_description,
  &inertial_sense_ros2__msg__DIDINS4__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace inertial_sense_ros2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<inertial_sense_ros2::msg::DIDINS4>()
{
  return &::inertial_sense_ros2::msg::rosidl_typesupport_introspection_cpp::DIDINS4_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, inertial_sense_ros2, msg, DIDINS4)() {
  return &::inertial_sense_ros2::msg::rosidl_typesupport_introspection_cpp::DIDINS4_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
