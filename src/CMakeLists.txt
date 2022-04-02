#cmake_minimum_required(VERSION 3.11)
project(struct)

aux_source_directory(. SRCS)
add_library(${PROJECT_NAME} SHARED ${SRCS})
