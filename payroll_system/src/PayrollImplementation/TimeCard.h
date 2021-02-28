#ifndef TIMECARD_H
#define TIMECARD_H

class TimeCard {
public:
    virtual ~TimeCard();
    TimeCard(long date, double hours);
    long GetDate();
    double GetHours();

private:
    long itsDate;  // TODO: 後々Dateクラスを使う
    double itsHours;
};

#endif