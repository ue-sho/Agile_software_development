
#ifndef SERVICECHARGETRANSACTION_H
#define SERVICECHARGETRANSACTION_H

#include "Transaction.h"

class ServiceChargeTransaction : public Transaction {
public:
    virtual ~ServiceChargeTransaction();
    ServiceChargeTransaction(int memberId, long date, double charge);
    void Execute();

private:
    int itsMemberId;
    long itsDate;
    double itsCharge;
};

#endif