#ifndef UNIONAFFILIATION_H
#define UNIONAFFILIATION_H

#include <map>

#include "Affiliation.h"

class ServiceCharge;

class UnionAffiliation : public Affiliation {
public:
    virtual ~UnionAffiliation();
    UnionAffiliation(double dues);
    void AddServiceCharge(ServiceCharge *sc);
    ServiceCharge *GetServiceCharge(long date);

private:
    int itsMemberId;
    double itsDues;
    std::map<long, ServiceCharge *> itsCharge;
};

#endif