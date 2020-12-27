#ifndef SALARIEDCLASSIFICATION_H
#define SALARIEDCLASSIFICATION_H

#include "PaymentClassification.h"

class SalariedClassification : public PaymentClassification {
public:
    virtual ~SalariedClassification();
    SalariedClassification(double salary);
    double GetSalary();

private:
    double itsSalary;
};

#endif