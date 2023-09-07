// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from ssafy_msgs:msg\ObjectInfo.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "ssafy_msgs/msg/object_info__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "ssafy_msgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "ssafy_msgs/msg/object_info__struct.h"
#include "ssafy_msgs/msg/object_info__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "ssafy_msgs/msg/dds_connext/ObjectInfo_Support.h"
#include "ssafy_msgs/msg/dds_connext/ObjectInfo_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// Include directives for member types
// Member 'idx_obj'
// Member 'x'
// Member 'y'
#include "rosidl_generator_c/primitives_sequence.h"
// Member 'idx_obj'
// Member 'x'
// Member 'y'
#include "rosidl_generator_c/primitives_sequence_functions.h"

// forward declare type support functions

static DDS_TypeCode *
_ObjectInfo__get_type_code()
{
  return ssafy_msgs::msg::dds_::ObjectInfo_TypeSupport::get_typecode();
}

static bool
_ObjectInfo__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const ssafy_msgs__msg__ObjectInfo * ros_message =
    static_cast<const ssafy_msgs__msg__ObjectInfo *>(untyped_ros_message);
  ssafy_msgs::msg::dds_::ObjectInfo_ * dds_message =
    static_cast<ssafy_msgs::msg::dds_::ObjectInfo_ *>(untyped_dds_message);
  // Member name: num_obj
  {
    dds_message->num_obj_ = ros_message->num_obj;
  }
  // Member name: idx_obj
  {
    size_t size = ros_message->idx_obj.size;
    if (size > (std::numeric_limits<DDS_Long>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->idx_obj_.maximum()) {
      if (!dds_message->idx_obj_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->idx_obj_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->idx_obj.data[i];
      dds_message->idx_obj_[i] = ros_i;
    }
  }
  // Member name: x
  {
    size_t size = ros_message->x.size;
    if (size > (std::numeric_limits<DDS_Long>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->x_.maximum()) {
      if (!dds_message->x_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->x_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->x.data[i];
      dds_message->x_[i] = ros_i;
    }
  }
  // Member name: y
  {
    size_t size = ros_message->y.size;
    if (size > (std::numeric_limits<DDS_Long>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->y_.maximum()) {
      if (!dds_message->y_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->y_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->y.data[i];
      dds_message->y_[i] = ros_i;
    }
  }
  return true;
}

static bool
_ObjectInfo__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const ssafy_msgs::msg::dds_::ObjectInfo_ * dds_message =
    static_cast<const ssafy_msgs::msg::dds_::ObjectInfo_ *>(untyped_dds_message);
  ssafy_msgs__msg__ObjectInfo * ros_message =
    static_cast<ssafy_msgs__msg__ObjectInfo *>(untyped_ros_message);
  // Member name: num_obj
  {
    ros_message->num_obj = dds_message->num_obj_;
  }
  // Member name: idx_obj
  {
    DDS_Long size = dds_message->idx_obj_.length();
    if (ros_message->idx_obj.data) {
      rosidl_generator_c__int16__Sequence__fini(&ros_message->idx_obj);
    }
    if (!rosidl_generator_c__int16__Sequence__init(&ros_message->idx_obj, size)) {
      return "failed to create array for field 'idx_obj'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->idx_obj.data[i];
      ros_i = dds_message->idx_obj_[i];
    }
  }
  // Member name: x
  {
    DDS_Long size = dds_message->x_.length();
    if (ros_message->x.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->x);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->x, size)) {
      return "failed to create array for field 'x'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->x.data[i];
      ros_i = dds_message->x_[i];
    }
  }
  // Member name: y
  {
    DDS_Long size = dds_message->y_.length();
    if (ros_message->y.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->y);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->y, size)) {
      return "failed to create array for field 'y'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->y.data[i];
      ros_i = dds_message->y_[i];
    }
  }
  return true;
}


static bool
_ObjectInfo__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const ssafy_msgs__msg__ObjectInfo * ros_message =
    static_cast<const ssafy_msgs__msg__ObjectInfo *>(untyped_ros_message);
  ssafy_msgs::msg::dds_::ObjectInfo_ dds_message;
  if (!_ObjectInfo__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (ssafy_msgs::msg::dds_::ObjectInfo_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call ssafy_msgs::msg::dds_::ObjectInfo_Plugin_serialize_to_cdr_buffer()\n");
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (cdr_stream->buffer_capacity < cdr_stream->buffer_length) {
    cdr_stream->allocator.deallocate(cdr_stream->buffer, cdr_stream->allocator.state);
    cdr_stream->buffer = static_cast<uint8_t *>(cdr_stream->allocator.allocate(cdr_stream->buffer_length, cdr_stream->allocator.state));
  }
  // call the function again and fill the buffer this time
  unsigned int buffer_length_uint = static_cast<unsigned int>(cdr_stream->buffer_length);
  if (ssafy_msgs::msg::dds_::ObjectInfo_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      &dds_message) != RTI_TRUE)
  {
    return false;
  }

  return true;
}

static bool
_ObjectInfo__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  ssafy_msgs::msg::dds_::ObjectInfo_ * dds_message =
    ssafy_msgs::msg::dds_::ObjectInfo_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (ssafy_msgs::msg::dds_::ObjectInfo_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _ObjectInfo__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (ssafy_msgs::msg::dds_::ObjectInfo_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _ObjectInfo__callbacks = {
  "ssafy_msgs::msg",  // message_namespace
  "ObjectInfo",  // message_name
  _ObjectInfo__get_type_code,  // get_type_code
  _ObjectInfo__convert_ros_to_dds,  // convert_ros_to_dds
  _ObjectInfo__convert_dds_to_ros,  // convert_dds_to_ros
  _ObjectInfo__to_cdr_stream,  // to_cdr_stream
  _ObjectInfo__to_message  // to_message
};

static rosidl_message_type_support_t _ObjectInfo__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_ObjectInfo__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  ssafy_msgs, msg,
  ObjectInfo)()
{
  return &_ObjectInfo__type_support;
}

#if defined(__cplusplus)
}
#endif