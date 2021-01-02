#include "TimeCardTransaction.h"

#include "Employee.h"
#include "HourlyClassification.h"
#include "PayrollDatabase.h"
#include "TimeCard.h"

extern PayrollDatabase GpayrollDatabase;

TimeCardTransaction::~TimeCardTransaction()
{
}

TimeCardTransaction::TimeCardTransaction(long date, double hours, int empId)
    : itsDate(date),
      itsHours(hours),
      itsEmpId(empId) {}

void TimeCardTransaction::Execute()
{
    Employee* e = GpayrollDatabase.GetEmployee(itsEmpId);
    if (e) {
        PaymentClassification* pc = e->GetClassification();
        if (HourlyClassification* hc = dynamic_cast<HourlyClassification*>(pc)) {
            hc->AddTimeCard(new TimeCard(itsDate, itsHours));
        }
        else {
            throw("Tried to add timecard to non-hourly employee");
        }
    }
    else {
        throw("No such employee.");
    }
}