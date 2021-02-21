#include "SalesReceipt.h"

SalesReceipt::~SalesReceipt()
{
}

SalesReceipt::SalesReceipt(long date, double amount)
    : itsDate(date),
      itsAmount(amount) {}

long SalesReceipt::GetDate()
{
    return itsDate;
}

double SalesReceipt::GetAmount()
{
    return itsAmount;
}