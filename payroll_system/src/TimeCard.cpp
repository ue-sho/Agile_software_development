#include "TimeCard.h"

TimeCard::~TimeCard()
{
}

TimeCard::TimeCard(long date, double hours)
    : itsDate(date),
      itsHours(hours) {}

long TimeCard::GetDate()
{
    return itsDate;
}

double TimeCard::GetHours()
{
    return itsHours;
}