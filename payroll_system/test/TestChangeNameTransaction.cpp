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

TEST(TestChangeNameTransaction, Basic)
{
    ceer << "TestChangeNameTransaction" << endl;

    int empId = 2;
    AddHourlyEmployee t(empId, "Bill", "Home", 15.25);
    t.Execute();

    ChangeNameTransaction cnt(empId, "Bob");
    cnt.Execute()

    Employee* e = GpayrollDatabase.GetEmployee(empId);
    EXPECT_EQ("Bob", e->GetName());
}
