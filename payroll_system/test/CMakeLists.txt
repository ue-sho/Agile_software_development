cmake_minimum_required(VERSION 3.18)
find_package(GTest REQUIRED)
include(GoogleTest)
include_directories(${GTEST_INCLUDE_DIRS})

# 月給社員のトランザクション追加
add_executable(TestAddSalariedEmployee TestAddSalariedEmployee.cpp)
target_link_libraries(TestAddSalariedEmployee PRIVATE GTest::GTest GTest::Main )
target_link_libraries(TestAddSalariedEmployee PRIVATE -lpthread LIB_PAYROLLSYSTEM)
add_test(NAME TestAddSalariedEmployee COMMAND TestAddSalariedEmployee)

# 時給社員のトランザクション追加
add_executable(TestAddHourlyEmployee TestAddHourlyEmployee.cpp)
target_link_libraries(TestAddHourlyEmployee PRIVATE GTest::GTest GTest::Main )
target_link_libraries(TestAddHourlyEmployee PRIVATE -lpthread LIB_PAYROLLSYSTEM)
add_test(NAME TestAddHourlyEmployee COMMAND TestAddHourlyEmployee)

# 成果報酬型社員のトランザクション追加
#add_executable(TestAddHourlyEmployee TestAddHourlyEmployee.cpp)
#target_link_libraries(TestAddHourlyEmployee PRIVATE GTest::GTest GTest::Main )
#target_link_libraries(TestAddHourlyEmployee PRIVATE -lpthread LIB_PAYROLLSYSTEM)
#add_test(NAME TestAddHourlyEmployee COMMAND TestAddHourlyEmployee)