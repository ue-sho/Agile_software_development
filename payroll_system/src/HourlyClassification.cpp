
#include "HourlyClassification.h"

HourlyClassification::HourlyClassification(double hourlyRate)
    : itsHourlyRate(hourlyRate) {}

HourlyClassification::~HourlyClassification() {}

double HourlyClassification::GetHourlyRate()
{
    return itsHourlyRate;
}
