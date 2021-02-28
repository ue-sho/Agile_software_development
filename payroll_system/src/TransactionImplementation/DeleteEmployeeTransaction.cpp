#include "DeleteEmployeeTransaction.h"

#include "PayrollDatabase.h"

extern PayrollDatabase GpayrollDatabase;

DeleteEmployeeTransaction::~DeleteEmployeeTransaction()
{
}

DeleteEmployeeTransaction::DeleteEmployeeTransaction(int empId)
    : itsEmpId(empId) {}

void DeleteEmployeeTransaction::Execute()
{
    GpayrollDatabase.DeleteEmployee(itsEmpId);
}
