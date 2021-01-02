#ifndef TIMECARDTRANSACTION_H
#define TIMECARDTRANSACTION_H

#include "Transaction.h"

class TimeCardTransaction : public Transaction {
public:
    virtual ~TimeCardTransaction();
    TimeCardTransaction(long date, double hours, int empId);
    void Execute();

private:
    int itsEmpId;
    long itsDate;
    double itsHours;
};

#endif