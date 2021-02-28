cmake_minimum_required(VERSION 3.18)

project(payroll_system)

set(CMAKE_CXX_STANDARD 17)
enable_testing()

include_directories(${PROJECT_SOURCE_DIR}/src/AbstractTransactions)
include_directories(${PROJECT_SOURCE_DIR}/src/PayrollDatabase)
include_directories(${PROJECT_SOURCE_DIR}/src/PayrollDomain)
include_directories(${PROJECT_SOURCE_DIR}/src/PayrollImplementation)
include_directories(${PROJECT_SOURCE_DIR}/src/TransactionApplication)
include_directories(${PROJECT_SOURCE_DIR}/src/TransactionImplementation)

add_subdirectory(src)
add_subdirectory(test)
