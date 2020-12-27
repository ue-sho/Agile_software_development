cmake_minimum_required(VERSION 3.10)

add_library(LIB_PAYROLLSYSTEM
            Employee.cpp
            PayrollDatabase.cpp
            AddEmployeeTransaction.cpp
            AddSalariedEmployee.cpp
            SalariedClassification.cpp
            MonthlySchedule.cpp
            AddHourlyEmployee.cpp
            HourlyClassification.cpp
            WeeklySchedule.cpp
#  　         AddHourlyEmployee.cpp
# 　          AddCommissionedEmployee.cpp
)

# add_executable(payroll_system main.cpp)
# target_link_libraries(payroll_system PRIVATE LIB_PAYROLLSYSTEM)
