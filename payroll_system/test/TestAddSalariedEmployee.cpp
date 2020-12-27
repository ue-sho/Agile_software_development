#include "AddSalariedEmployee.h"
#include "Employee.h"
#include "HoldMethod.h"
#include "MonthlySchedule.h"
#include "PaymentClassification.h"
#include "PaymentMethod.h"
#include "PaymentSchedule.h"
#include "PayrollDatabase.h"
#include "SalariedClassification.h"
#include "gtest/gtest.h"

using namespace std;

extern PayrollDatabase GpayrollDatabase;

TEST(TestAddSalariedEmployee, Basic)
{
    int empId = 1;
    AddSalariedEmployee t(empId, "Bob", "Home", 10000.00);
    t.Execute();

    Employee* e = GpayrollDatabase.GetEmployee(empId);
    EXPECT_EQ("Bob", e->GetName());

    PaymentClassification* pc = e->GetClassification();
    SalariedClassification* sc = dynamic_cast<SalariedClassification*>(pc);
    ASSERT_NE(nullptr, sc);
    EXPECT_DOUBLE_EQ(10000.00, sc->GetSalary());

    PaymentSchedule* ps = e->GetSchedule();
    MonthlySchedule* ms = dynamic_cast<MonthlySchedule*>(ps);
    ASSERT_NE(nullptr, ms);

    PaymentMethod* pm = e->GetMethod();
    HoldMethod* hm = dynamic_cast<HoldMethod*>(pm);
    ASSERT_NE(nullptr, hm);
}
