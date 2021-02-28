#ifndef HOURLYCLASSIFICATION_H
#define HOURLYCLASSIFICATION_H

#include <map>

#include "PaymentClassification.h"

class TimeCard;

class HourlyClassification : public PaymentClassification {
public:
    virtual ~HourlyClassification();
    HourlyClassification(double hourlyRate);
    double GetHourlyRate();
    TimeCard* GetTimeCard(long date);
    void AddTimeCard(TimeCard* timeCard);

private:
    double itsHourlyRate;
    std::map<long, TimeCard*> itsTimeCards;
};

#endif