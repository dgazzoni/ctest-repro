# NÃO ALTERE NADA NESSE ARQUIVO!!!

cmake_minimum_required(VERSION 3.5)

project(lab1-ordenacao-1 C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)

enable_testing()

include(GoogleTest)

add_subdirectory(googletest)

add_executable(ex1 src/ex1.c test/test-ex1.cpp)
target_include_directories(ex1 PRIVATE include)
target_link_libraries(ex1 PRIVATE GTest::gtest_main)
gtest_discover_tests(ex1)
