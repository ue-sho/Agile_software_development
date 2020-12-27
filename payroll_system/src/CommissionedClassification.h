#ifndef COMMISSIONEDCLASSIFICATION_H
#define COMMISSIONEDCLASSIFICATION_H

#include "PaymentClassification.h"

class CommissionedClassification : public PaymentClassification {
public:
    virtual ~CommissionedClassification();
    CommissionedClassification(double salary, double commissionRate);
    double GetSalary();
    double GetCommissionRate();

private:
    double itsSalary;
    double itsCommissionRate;
};

#endif