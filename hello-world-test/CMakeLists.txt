cmake_minimum_required(VERSION 2.8.12)

project(hello-world-test)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(sum_integers sum_integers.cpp)
add_executable(sum_integers_test sum_integers_test.cpp)
target_link_libraries(sum_integers_test sum_integers)

add_library(mul_integers mul_integers.cpp)
add_executable(mul_integers_test mul_integers_test.cpp)
target_link_libraries(mul_integers_test mul_integers)
 
enable_testing()
 
add_test(
    NAME sum_integers_test
    COMMAND $<TARGET_FILE:sum_integers_test>
)

add_test(
    NAME mul_integers_test
    COMMAND $<TARGET_FILE:mul_integers_test>
)
