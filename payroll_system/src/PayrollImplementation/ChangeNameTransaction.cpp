#include "ChangeNameTransaction.h"

ChangeNameTransaction::~ChangeNameTransaction()
{
}

ChangeNameTransaction::ChangeNameTransaction(int empId, string name)
    : ChangeEmployeeTransaction(empId), itsName(name) {}

void ChangeNameTransaction::Change(Employee& e)
{
    e.SetName(itsName);
}
