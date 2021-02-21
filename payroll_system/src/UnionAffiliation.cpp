#include "UnionAffiliation.h"

#include "ServiceCharge.h"

UnionAffiliation::~UnionAffiliation() {}

UnionAffiliation::UnionAffiliation(double dues) : itsDues(dues) {}

void UnionAffiliation::AddServiceCharge(ServiceCharge *sc)
{
    itsCharge[sc->GetDate()] = sc;
}

ServiceCharge *UnionAffiliation::GetServiceCharge(long date)
{
    return itsCharge[date];
}
