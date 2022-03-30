cmake_minimum_required(VERSION 3.11)
project(TestLinkList)
include_directories(${PROJECT_SOURCE_DIR}/../src)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} Algorithm)