
#ifndef SERVICECHARGE_H
#define SERVICECHARGE_H

class ServiceCharge {
public:
    virtual ~ServiceCharge();
    ServiceCharge(long date, double amount);
    long GetDate();
    double GetAmount();

private:
    long itsDate;
    double itsAmount;
};

#endif