cmake_minimum_required(VERSION 3.0)

project(MyProject)

add_library(bigint bigint.cpp)

add_executable(MyProgram main.cpp)

target_link_libraries(MyProgram bigint)

add_executable(cpp_test test.cpp)

target_link_libraries(cpp_test bigint)

enable_testing()

add_test(
  NAME cpp_test
  COMMAND $<TARGET_FILE:cpp_test>
  )