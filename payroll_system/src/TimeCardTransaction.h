#ifndef TIMECARDTRANSACTION_H
#define TIMECARDTRANSACTION_H

#include "Transaction.h"

class TimeCardTransaction : public Transaction {
public:
    virtual ~TimeCardTransaction();
    TimeCardTransaction(long date, double hours, int empId);
    void Execute();

private:
    long itsDate;  // TODO : Data型にする
    double itsHours;
    int itsEmpId;
};

#endif