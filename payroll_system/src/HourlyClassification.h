#ifndef HOURLYCLASSIFICATION_H
#define HOURLYCLASSIFICATION_H

#include "PaymentClassification.h"

class HourlyClassification : public PaymentClassification {
public:
    virtual ~HourlyClassification();
    HourlyClassification(double hourlyRate);
    double GetHourlyRate();

private:
    double itsHourlyRate;
};

#endif