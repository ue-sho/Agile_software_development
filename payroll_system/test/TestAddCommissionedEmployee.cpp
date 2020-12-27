#include "AddCommissionedEmployee.h"
#include "BiweeklySchedule.h"
#include "CommissionedClassification.h"
#include "Employee.h"
#include "HoldMethod.h"
#include "PaymentClassification.h"
#include "PaymentMethod.h"
#include "PaymentSchedule.h"
#include "PayrollDatabase.h"
#include "gtest/gtest.h"

using namespace std;

extern PayrollDatabase GpayrollDatabase;

TEST(TestAddCommissionedEmployee, Basic)
{
    int empId = 3;
    AddCommissionedEmployee t(empId, "Anna", "Home", 10000.00, 1.5);
    t.Execute();

    Employee* e = GpayrollDatabase.GetEmployee(empId);
    EXPECT_EQ("Anna", e->GetName());

    PaymentClassification* pc = e->GetClassification();
    CommissionedClassification* cc = dynamic_cast<CommissionedClassification*>(pc);
    ASSERT_NE(nullptr, cc);
    EXPECT_DOUBLE_EQ(10000.00, cc->GetSalary());
    EXPECT_DOUBLE_EQ(1.5, cc->GetCommissionRate());

    PaymentSchedule* ps = e->GetSchedule();
    BiweeklySchedule* bs = dynamic_cast<BiweeklySchedule*>(ps);
    ASSERT_NE(nullptr, bs);

    PaymentMethod* pm = e->GetMethod();
    HoldMethod* hm = dynamic_cast<HoldMethod*>(pm);
    ASSERT_NE(nullptr, hm);
}
