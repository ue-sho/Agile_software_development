#include "AddHourlyEmployee.h"
#include "Employee.h"
#include "PayrollDatabase.h"
#include "ServiceCharge.h"
#include "ServiceChargeTransaction.h"
#include "UnionAffiliation.h"
#include "gtest/gtest.h"

using namespace std;

extern PayrollDatabase GpayrollDatabase;

TEST(AddServiceCharge, Basic)
{
    int empId = 7;
    AddHourlyEmployee t(empId, "Bill", "Home", 15.25);
    t.Execute();

    Employee* e = GpayrollDatabase.GetEmployee(empId);
    ASSERT_NE(nullptr, e);

    UnionAffiliation* af = new UnionAffiliation(12.5);
    e->SetAffiliation(af);

    int memberId = 86;  // Maxwell Smart
    GpayrollDatabase.AddUnionMember(memberId, e);

    ServiceChargeTransaction sct(memberId, 20011101, 12.95);
    sct.Execute();

    ServiceCharge* sc = af->GetServiceCharge(20011101);
    ASSERT_NE(nullptr, sc);
    EXPECT_FLOAT_EQ(12.95, sc->GetAmount());
}
