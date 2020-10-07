cmake_minimum_required(VERSION 3.18)

set(this LeetCode)

project(${this})

add_subdirectory(tests)
add_subdirectory(googletest)

enable_testing()

# Use tis command to force google test to link dynamically
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
