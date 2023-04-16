cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 11)

add_executable(MyProject main.cpp)

set_target_properties(MyProject PROPERTIES LINK_FLAGS "/SUBSYSTEM:CONSOLE")