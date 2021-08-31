#ifndef CHANGEEMPLOYEETRANSACTION_H
#define CHANGEEMPLOYEETRANSACTION_H

#include "Transaction.h"

class ChangeEmployeeTransaction : public Transaction {
public:
    virtual ~ChangeEmployeeTransaction();
    ChangeEmployeeTransaction(int empId);
    virtual void Execute();
    virtual void Change(Employee&) = 0;

private:
    int itsEmpId;
};

#endif