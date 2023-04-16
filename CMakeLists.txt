cmake_minimum_required(VERSION 3.0)

project(MyProject)

add_library(BigInteger BigInteger.cpp)

add_executable(MyProgram main.cpp)

target_link_libraries(MyProgram BigInteger)

add_executable(TestBigInteger test_biginteger.cpp)

target_link_libraries(TestBigInteger BigInteger)