
#include "CommissionedClassification.h"

#include "SalesReceipt.h"

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

void CommissionedClassification::AddSalesReceipt(SalesReceipt* salesReceipt)
{
    itsSalesReceipts[salesReceipt->GetDate()] = salesReceipt;
}

SalesReceipt* CommissionedClassification::GetSalesReceipt(long date)
{
    return itsSalesReceipts[date];
}