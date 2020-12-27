#include "AddHourlyEmployee.h"
#include "Employee.h"
#include "HoldMethod.h"
#include "HourlyClassification.h"
#include "PaymentClassification.h"
#include "PaymentMethod.h"
#include "PaymentSchedule.h"
#include "PayrollDatabase.h"
#include "WeeklySchedule.h"
#include "gtest/gtest.h"

using namespace std;

extern PayrollDatabase GpayrollDatabase;

TEST(TestAddHourlyEmployee, Basic)
{
    int empId = 2;
    AddHourlyEmployee t(empId, "Tom", "Home", 1500.00);
    t.Execute();

    Employee* e = GpayrollDatabase.GetEmployee(empId);
    EXPECT_EQ("Tom", e->GetName());

    PaymentClassification* pc = e->GetClassification();
    HourlyClassification* hc = dynamic_cast<HourlyClassification*>(pc);
    ASSERT_NE(nullptr, hc);
    EXPECT_DOUBLE_EQ(1500.00, hc->GetHourlyRate());

    PaymentSchedule* ps = e->GetSchedule();
    WeeklySchedule* ws = dynamic_cast<WeeklySchedule*>(ps);
    ASSERT_NE(nullptr, ws);

    PaymentMethod* pm = e->GetMethod();
    HoldMethod* hm = dynamic_cast<HoldMethod*>(pm);
    ASSERT_NE(nullptr, hm);
}
