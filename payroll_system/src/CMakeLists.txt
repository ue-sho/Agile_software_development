cmake_minimum_required(VERSION 3.18)

add_subdirectory(AbstractTransactions)
add_subdirectory(PayrollDatabase)
add_subdirectory(PayrollDomain)
add_subdirectory(PayrollImplementation)
add_subdirectory(TransactionApplication)
add_subdirectory(TransactionImplementation)

target_link_libraries(LIB_TRANSACTION_IMPLEMENTATION
        LIB_ABSTRACT_TRANSACTIONS
        LIB_PAYROLL_DATABASE
        LIB_PAYROLL_DOMAIN
        LIB_PAYROLL_IMPLEMENTATION
)
