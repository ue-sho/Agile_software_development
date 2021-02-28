#include "ServiceChargeTransaction.h"

#include "Affiliation.h"
#include "Employee.h"
#include "PayrollDatabase.h"
#include "ServiceCharge.h"
#include "UnionAffiliation.h"

extern PayrollDatabase GpayrollDatabase;

ServiceChargeTransaction::~ServiceChargeTransaction()
{
}

ServiceChargeTransaction::ServiceChargeTransaction(int memberId, long date, double charge)
    : itsMemberId(memberId),
      itsDate(date),
      itsCharge(charge) {}

void ServiceChargeTransaction::Execute()
{
    Employee* e = GpayrollDatabase.GetUnionMember(itsMemberId);

    Affiliation* af = e->GetAffiliation();
    UnionAffiliation* uaf = dynamic_cast<UnionAffiliation*>(af);
    if (uaf) {
        uaf->AddServiceCharge(new ServiceCharge(itsDate, itsCharge));
    }
}