
#include "CommissionedClassification.h"

CommissionedClassification::CommissionedClassification(double salary, double commissionRate)
    : itsSalary(salary),
      itsCommissionRate(commissionRate) {}

CommissionedClassification::~CommissionedClassification() {}

double CommissionedClassification::GetSalary()
{
    return itsSalary;
}

double CommissionedClassification::GetCommissionRate()
{
    return itsCommissionRate;
}