cmake_minimum_required(VERSION 3.18)

find_package(GTest REQUIRED)
include(GoogleTest)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(TestAddSalariedEmployee TestAddSalariedEmployee.cpp)
target_link_libraries(TestAddSalariedEmployee PRIVATE GTest::GTest GTest::Main )
target_link_libraries(TestAddSalariedEmployee PRIVATE -lpthread LIB_PAYROLLSYSTEM)

add_test(NAME TestAddSalariedEmployee COMMAND TestAddSalariedEmployee)
