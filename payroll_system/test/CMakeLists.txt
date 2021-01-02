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
add_executable(TestAddCommissionedEmployee TestAddCommissionedEmployee.cpp)
target_link_libraries(TestAddCommissionedEmployee PRIVATE GTest::GTest GTest::Main )
target_link_libraries(TestAddCommissionedEmployee PRIVATE -lpthread LIB_PAYROLLSYSTEM)
add_test(NAME TestAddCommissionedEmployee COMMAND TestAddCommissionedEmployee)

# トランザクション削除
add_executable(DeleteEmployeeTransaction TestDeleteEmployeeTransaction.cpp)
target_link_libraries(DeleteEmployeeTransaction PRIVATE GTest::GTest GTest::Main )
target_link_libraries(DeleteEmployeeTransaction PRIVATE -lpthread LIB_PAYROLLSYSTEM)
add_test(NAME DeleteEmployeeTransaction COMMAND DeleteEmployeeTransaction)