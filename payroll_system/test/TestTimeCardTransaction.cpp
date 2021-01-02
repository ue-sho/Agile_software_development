#include "AddHourlyEmployee.h"
#include "Employee.h"
#include "HourlyClassification.h"
#include "PaymentClassification.h"
#include "PayrollDatabase.h"
#include "TimeCard.h"
#include "TimeCardTransaction.h"
#include "gtest/gtest.h"

using namespace std;

extern PayrollDatabase GpayrollDatabase;

TEST(TimeCardTransaction, Basic)
{
    int empId = 5;
    AddHourlyEmployee t(empId, "Bill", "Home", 15.25);
    t.Execute();

    TimeCardTransaction tct(20111031, 8.0, empId);
    tct.Execute();

    Employee* e = GpayrollDatabase.GetEmployee(empId);
    ASSERT_NE(nullptr, e);

    PaymentClassification* pc = e->GetClassification();
    HourlyClassification* hc = dynamic_cast<HourlyClassification*>(pc);
    ASSERT_NE(nullptr, hc);

    TimeCard* tc = hc->GetTimeCard(20111031);
    ASSERT_NE(nullptr, tc);
    EXPECT_DOUBLE_EQ(8.0, tc->GetHours());
}
