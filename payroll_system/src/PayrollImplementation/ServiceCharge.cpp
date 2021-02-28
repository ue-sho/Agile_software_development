#include "ServiceCharge.h"

ServiceCharge::~ServiceCharge() {}

ServiceCharge::ServiceCharge(long date, double amount)
    : itsDate(date), itsAmount(amount) {}

long ServiceCharge::GetDate()
{
    return itsDate;
}

double ServiceCharge::GetAmount()
{
    return itsAmount;
}