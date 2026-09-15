cmake_minimum_required(VERSION 4.3)
project(HalloWorld)

set(CMAKE_CXX_STANDARD 23)

add_executable(hello_modern src/modern_hello_world.cpp)
add_executable(hello src/hello_world.cpp)
add_executable(variables src/variables.cpp)
