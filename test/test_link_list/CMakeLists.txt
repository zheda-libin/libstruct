project(test_link_list)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} struct)
