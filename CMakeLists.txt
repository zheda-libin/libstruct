cmake_minimum_required(VERSION 3.11)
project(libstruct)
set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_SOURCE_DIR}/src/)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

add_subdirectory(src)
add_subdirectory(test/test_link_list)
add_subdirectory(test/test_link_stack)
add_subdirectory(test/test_binary_tree)
