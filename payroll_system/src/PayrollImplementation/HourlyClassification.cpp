#include "HourlyClassification.h"

#include "TimeCard.h"

HourlyClassification::HourlyClassification(double hourlyRate)
    : itsHourlyRate(hourlyRate) {}

HourlyClassification::~HourlyClassification() {}

double HourlyClassification::GetHourlyRate()
{
    return itsHourlyRate;
}

void HourlyClassification::AddTimeCard(TimeCard* timeCard)
{
    itsTimeCards[timeCard->GetDate()] = timeCard;
}

TimeCard* HourlyClassification::GetTimeCard(long date)
{
    return itsTimeCards[date];
}
