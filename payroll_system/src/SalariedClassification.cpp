
#include "SalariedClassification.h"

SalariedClassification::SalariedClassification(double salary)
    : itsSalary(salary) {}

SalariedClassification::~SalariedClassification() {}

double SalariedClassification::GetSalary()
{
    return itsSalary;
}
