#include "Employee.h"

Employee::Employee(int empId, std::string name, std::string address)
    : itsEmpId(empId),
      itsName(name),
      itsAddress(address) {}

Employee::~Employee() {}

void Employee::SetClassification(PaymentClassification *pc)
{
    itsClassification = pc;
}

void Employee::SetSchedule(PaymentSchedule *ps)
{
    itsSchedule = ps;
}

void Employee::SetMethod(PaymentMethod *pm)
{
    itsMethod = pm;
}

std::string Employee::GetName()
{
    return itsName;
}

PaymentClassification *Employee::GetClassification() const
{
    return itsClassification;
}

PaymentSchedule *Employee::GetSchedule() const
{
    return itsSchedule;
}

PaymentMethod *Employee::GetMethod() const
{
    return itsMethod;
}

void Employee::SetAffiliation(Affiliation *affiliation)
{
    itsAffiliation = affiliation;
}

Affiliation *Employee::GetAffiliation()
{
    return itsAffiliation;
}