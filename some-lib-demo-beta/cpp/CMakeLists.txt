cmake_minimum_required(VERSION 2.8)
project(syh_math_beta)
add_library(syh_math_beta adder.cpp)
set_target_properties(syh_math_beta PROPERTIES PUBLIC_HEADER adder.hpp)
install(
    TARGETS syh_math_beta DESTINATION lib
    PUBLIC_HEADER DESTINATION include
)
