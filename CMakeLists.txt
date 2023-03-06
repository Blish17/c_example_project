cmake_minimum_required(VERSION 3.10.2)
project(MyProject)

add_subdirectory(modules)
add_subdirectory(tests)

add_executable(${PROJECT_NAME} main.c)
target_link_libraries(${PROJECT_NAME} operations)