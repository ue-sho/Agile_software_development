cmake_minimum_required(VERSION 3.18)

add_library(LIB_TRANSACTION_IMPLEMENTATION
            AddSalariedEmployee.cpp
            AddHourlyEmployee.cpp
            AddCommissionedEmployee.cpp
            DeleteEmployeeTransaction.cpp

            TimeCardTransaction.cpp
            SalesReceiptTransaction.cpp
            ServiceChargeTransaction.cpp
)

# target_link_libraries(LIB_PAYROLLSYSTEM PRIVATE LIB_TRANSACTION_IMPLEMENTATION)
