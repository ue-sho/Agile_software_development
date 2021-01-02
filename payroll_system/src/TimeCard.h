#ifndef TIMECARD_H
#define TIMECARD_H

class TimeCard {
public:
    virtual ~TimeCard();
    TimeCard(long date, double hours);
    long GetDate();
    double GetHours();

private:
    long itsDate;
    double itsHours;
};

#endif