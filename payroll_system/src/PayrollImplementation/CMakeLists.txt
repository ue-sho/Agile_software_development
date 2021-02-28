cmake_minimum_required(VERSION 3.18)

add_library(LIB_PAYROLL_IMPLEMENTATION
            SalariedClassification.cpp
            MonthlySchedule.cpp

            HourlyClassification.cpp
            WeeklySchedule.cpp

            CommissionedClassification.cpp
            BiweeklySchedule.cpp

            TimeCard.cpp
            SalesReceipt.cpp
            ServiceCharge.cpp

            NoAffiliation.cpp
            UnionAffiliation.cpp
)

# target_link_libraries(LIB_PAYROLLSYSTEM PRIVATE LIB_PAYROLL_IMPLEMENTATION)
