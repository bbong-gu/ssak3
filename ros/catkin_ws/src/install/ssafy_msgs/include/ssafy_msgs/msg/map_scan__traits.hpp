// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ssafy_msgs:msg\MapScan.idl
// generated code does not contain a copyright notice

#ifndef SSAFY_MSGS__MSG__MAP_SCAN__TRAITS_HPP_
#define SSAFY_MSGS__MSG__MAP_SCAN__TRAITS_HPP_

#include "ssafy_msgs/msg/map_scan__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ssafy_msgs::msg::MapScan>()
{
  return "ssafy_msgs::msg::MapScan";
}

template<>
struct has_fixed_size<ssafy_msgs::msg::MapScan>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ssafy_msgs::msg::MapScan>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ssafy_msgs::msg::MapScan>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SSAFY_MSGS__MSG__MAP_SCAN__TRAITS_HPP_
