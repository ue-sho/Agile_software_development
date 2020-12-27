#ifndef ADDEMPLOYEETRANSACTION_H
#define ADDEMPLOYEETRANSACTION_H

#include <string>

#include "Transaction.h"

class PaymentClassification;
class PaymentSchedule;

class AddEmployeeTransaction : public Transaction {
public:
    virtual ~AddEmployeeTransaction();
    AddEmployeeTransaction(int empId, std::string name, std::string address);
    virtual PaymentClassification* GetClassification() const = 0;
    virtual PaymentSchedule* GetSchedule() const = 0;
    virtual void Execute();

private:
    int itsEmpId;
    std::string itsName;
    std::string itsAddress;
};

#endif