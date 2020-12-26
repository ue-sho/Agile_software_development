cmake_minimum_required(VERSION 3.18)

find_package(GTest REQUIRED)
include(GoogleTest)
include_directories(${GTEST_INCLUDE_DIRS})

include_directories(${PROJECT_SOURCE_DIR}/src)

add_executable(TestAdd add_test.cpp)
target_link_libraries(TestAdd PRIVATE GTest::GTest GTest::Main)

add_test(NAME Add_test COMMAND TestAdd)
