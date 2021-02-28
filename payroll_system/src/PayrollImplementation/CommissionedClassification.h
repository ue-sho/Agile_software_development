#ifndef COMMISSIONEDCLASSIFICATION_H
#define COMMISSIONEDCLASSIFICATION_H

#include <map>

#include "PaymentClassification.h"

class SalesReceipt;

class CommissionedClassification : public PaymentClassification {
public:
    virtual ~CommissionedClassification();
    CommissionedClassification(double salary, double commissionRate);
    double GetSalary();
    double GetCommissionRate();
    void AddSalesReceipt(SalesReceipt* salesReceipt);
    SalesReceipt* GetSalesReceipt(long date);

private:
    double itsSalary;
    double itsCommissionRate;
    std::map<long, SalesReceipt*> itsSalesReceipts;
};

#endif