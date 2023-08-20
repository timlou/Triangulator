cmake_minimum_required(VERSION 3.12)
project(my_library_project)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_subdirectory(src)
add_subdirectory(python)
