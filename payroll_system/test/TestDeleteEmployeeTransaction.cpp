#include "AddCommissionedEmployee.h"
#include "DeleteEmployeeTransaction.h"
#include "Employee.h"
#include "PayrollDatabase.h"
#include "gtest/gtest.h"

using namespace std;

extern PayrollDatabase GpayrollDatabase;

TEST(TestAddCommissionedEmployee, Basic)
{
    int empId = 4;
    AddCommissionedEmployee t(empId, "Lance", "Home", 2500, 3.2);
    t.Execute();

    {
        // データベースに追加されているか確認
        Employee* e = GpayrollDatabase.GetEmployee(empId);
        ASSERT_NE(nullptr, e);
    }

    // 削除をする
    DeleteEmployeeTransaction dt(empId);
    dt.Execute();

    {
        // データベースから削除されているか確認
        Employee* e = GpayrollDatabase.GetEmployee(empId);
        ASSERT_EQ(nullptr, e);
    }
}
