cmake_minimum_required(VERSION 3.19)
project(calculator)

include_directories(lib)
include_directories(src)
include_directories(test)

add_subdirectory(lib/googleTest)
add_subdirectory(src)
add_subdirectory(test)

set(CMAKE_CXX_STANDARD 14)
#add_executable(unit_testing_1 main.cpp)