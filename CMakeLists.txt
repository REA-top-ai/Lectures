cmake_minimum_required(VERSION 4.3)
project(HalloWorld)

set(CMAKE_CXX_STANDARD 23)

add_executable(hello_modern src/modern_hello_world.cpp)
add_executable(hello src/hello_world.cpp)
add_executable(variables_sizes src/variables_sizes.cpp)
add_executable(variables src/variables.cpp)
add_executable(pointers src/pointers.cpp)
add_executable(logic src/logic.cpp)
add_executable(loops src/loops.cpp)
add_executable(c_outs src/c_outs.cpp)
add_executable(operations src/operations.cpp)
add_executable(bits src/bits_operations.cpp)
add_executable(macros src/macros.cpp)

