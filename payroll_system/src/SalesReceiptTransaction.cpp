#include "SalesReceiptTransaction.h"

#include "CommissionedClassification.h"
#include "Employee.h"
#include "PayrollDatabase.h"
#include "SalesReceipt.h"

extern PayrollDatabase GpayrollDatabase;

SalesReceiptTransaction::~SalesReceiptTransaction()
{
}

SalesReceiptTransaction::SalesReceiptTransaction(long date, double amount, int empId)
    : itsDate(date),
      itsAmount(amount),
      itsEmpId(empId) {}

void SalesReceiptTransaction::Execute()
{
    Employee* e = GpayrollDatabase.GetEmployee(itsEmpId);
    if (!e) {
        throw("No such employee.");
        return;
    }

    PaymentClassification* pc = e->GetClassification();
    CommissionedClassification* cc = dynamic_cast<CommissionedClassification*>(pc);
    if (!cc) {
        throw("Tried to add sales receipt to non-hourly employee");
        return;
    }

    cc->AddSalesReceipt(new SalesReceipt(itsDate, itsAmount));
}