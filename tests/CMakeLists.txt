cmake_minimum_required(VERSION 3.10.2)
project(tests)
add_executable(${PROJECT_NAME} test_calculations.cpp test_string_operations.cpp)
set(CMAKE_CXX_STANDARD 11)
target_link_libraries(${PROJECT_NAME} PUBLIC
        operations
        gtest
        gtest_main)