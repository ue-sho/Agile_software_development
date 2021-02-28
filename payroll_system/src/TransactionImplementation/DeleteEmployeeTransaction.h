#ifndef DELETEEMPLOYEETRANSACTION_H
#define DELETEEMPLOYEETRANSACTION_H

#include "Transaction.h"

class DeleteEmployeeTransaction : public Transaction {
public:
    virtual ~DeleteEmployeeTransaction();
    DeleteEmployeeTransaction(int empId);
    void Execute();

private:
    int itsEmpId;
};

#endif