#include "PayrollDatabase.h"

#include "Employee.h"

PayrollDatabase GpayrollDatabase;

// TODO : データベースに置き換える
// データベースの実装は「詳細」なので、できるだけ決めるのは先延ばしにする
// 今の時点ではAPIを設計することにだけ関心がある

PayrollDatabase::~PayrollDatabase() {}

Employee *PayrollDatabase::GetEmployee(int empId)
{
    return itsEmployees[empId];
}

void PayrollDatabase::AddEmployee(int empId, Employee *e)
{
    itsEmployees[empId] = e;
}

void PayrollDatabase::DeleteEmployee(int empId)
{
    itsEmployees[empId] = nullptr;
}

void PayrollDatabase::clear()
{
    itsEmployees.clear();
}

void PayrollDatabase::AddUnionMember(int memberId, Employee *e)
{
    itsUnionMember[memberId] = e;
}

Employee *PayrollDatabase::GetUnionMember(int memberId)
{
    return itsUnionMember[memberId];
}