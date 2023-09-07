// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ssafy_msgs:msg\MapScan.idl
// generated code does not contain a copyright notice
#include "ssafy_msgs/msg/map_scan__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ssafy_msgs/msg/map_scan__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ssafy_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ssafy_msgs
cdr_serialize(
  const ssafy_msgs::msg::MapScan & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: run
  cdr << ros_message.run;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ssafy_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ssafy_msgs::msg::MapScan & ros_message)
{
  // Member: run
  cdr >> ros_message.run;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ssafy_msgs
get_serialized_size(
  const ssafy_msgs::msg::MapScan & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: run
  {
    size_t item_size = sizeof(ros_message.run);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ssafy_msgs
max_serialized_size_MapScan(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: run
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _MapScan__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ssafy_msgs::msg::MapScan *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MapScan__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ssafy_msgs::msg::MapScan *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MapScan__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ssafy_msgs::msg::MapScan *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MapScan__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MapScan(full_bounded, 0);
}

static message_type_support_callbacks_t _MapScan__callbacks = {
  "ssafy_msgs::msg",
  "MapScan",
  _MapScan__cdr_serialize,
  _MapScan__cdr_deserialize,
  _MapScan__get_serialized_size,
  _MapScan__max_serialized_size
};

static rosidl_message_type_support_t _MapScan__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MapScan__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ssafy_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ssafy_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ssafy_msgs::msg::MapScan>()
{
  return &ssafy_msgs::msg::typesupport_fastrtps_cpp::_MapScan__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ssafy_msgs, msg, MapScan)() {
  return &ssafy_msgs::msg::typesupport_fastrtps_cpp::_MapScan__handle;
}

#ifdef __cplusplus
}
#endif