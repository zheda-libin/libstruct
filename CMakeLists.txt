cmake_minimum_required(VERSION 3.11)
project(AlgorithmC)
include_directories(${CMAKE_SOURCE_DIR}/src/)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_subdirectory(src)
add_subdirectory(test/test_link_list)
