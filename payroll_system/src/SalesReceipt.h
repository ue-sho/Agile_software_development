#ifndef SALESRECEIPT_H
#define SALESRECEIPT_H

class SalesReceipt {
public:
    virtual ~SalesReceipt();
    SalesReceipt(long date, double amount);
    long GetDate();
    double GetAmount();

private:
    long itsDate;  // TODO: 後々Dateクラスを使う
    double itsAmount;
};

#endif