#include "AddCommissionedEmployee.h"
#include "CommissionedClassification.h"
#include "Employee.h"
#include "PaymentClassification.h"
#include "PayrollDatabase.h"
#include "SalesReceipt.h"
#include "SalesReceiptTransaction.h"
#include "gtest/gtest.h"

using namespace std;

extern PayrollDatabase GpayrollDatabase;

TEST(SalesReceiptTransaction, Basic)
{
    int empId = 6;
    AddCommissionedEmployee t(empId, "Gaku", "Home", 10000.00, 1.5);
    t.Execute();

    SalesReceiptTransaction srt(20210131, 8.0, empId);
    srt.Execute();

    Employee* e = GpayrollDatabase.GetEmployee(empId);
    ASSERT_NE(nullptr, e);

    PaymentClassification* pc = e->GetClassification();
    CommissionedClassification* cc = dynamic_cast<CommissionedClassification*>(pc);
    ASSERT_NE(nullptr, cc);

    SalesReceipt* sr = cc->GetSalesReceipt(20210131);
    ASSERT_NE(nullptr, sr);
    EXPECT_DOUBLE_EQ(8.0, sr->GetAmount());
}
