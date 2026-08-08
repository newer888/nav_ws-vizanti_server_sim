// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from vizanti_server:msg/PatrolOutput.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "vizanti_server/msg/detail/patrol_output__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace vizanti_server
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PatrolOutput_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) vizanti_server::msg::PatrolOutput(_init);
}

void PatrolOutput_fini_function(void * message_memory)
{
  auto typed_message = static_cast<vizanti_server::msg::PatrolOutput *>(message_memory);
  typed_message->~PatrolOutput();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PatrolOutput_message_member_array[2] = {
  {
    "patrol_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vizanti_server::msg::PatrolOutput, patrol_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "route_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vizanti_server::msg::PatrolOutput, route_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PatrolOutput_message_members = {
  "vizanti_server::msg",  // message namespace
  "PatrolOutput",  // message name
  2,  // number of fields
  sizeof(vizanti_server::msg::PatrolOutput),
  PatrolOutput_message_member_array,  // message members
  PatrolOutput_init_function,  // function to initialize message memory (memory has to be allocated)
  PatrolOutput_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PatrolOutput_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PatrolOutput_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace vizanti_server


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vizanti_server::msg::PatrolOutput>()
{
  return &::vizanti_server::msg::rosidl_typesupport_introspection_cpp::PatrolOutput_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vizanti_server, msg, PatrolOutput)() {
  return &::vizanti_server::msg::rosidl_typesupport_introspection_cpp::PatrolOutput_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
