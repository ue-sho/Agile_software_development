#ifndef SALESRECEIPTTRANSACTION_H
#define SALESRECEIPTTRANSACTION_H

#include "Transaction.h"

class SalesReceiptTransaction : public Transaction {
public:
    virtual ~SalesReceiptTransaction();
    SalesReceiptTransaction(long date, double amount, int empId);
    void Execute();

private:
    long itsDate;
    double itsAmount;
    int itsEmpId;
};

#endif