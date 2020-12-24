

void PayrollTest::TestAddSalariedEmployee()
{
    int empId = 1;
    AddSalariedEmployee t(empId, "Bob", "Home", 10000.00);
    t.Execute();
    Employee* e = GpayrollDatabase.GetEmployee(empId);
    assert("Bob" == e->GetName);

    PaymentClassification* pc = e->GetClassification();
    SalariedCkassificatinon* sc = dynamic_cast<PaymentClassification*>(pc);
    assert(sr);
    aseertEquals(10000.00, sc->GetSalary(), .001);

    PaymentSchedule* ps = e->GetSchedule();
    MonthlySchedule* ms = dynamic_cast<PaymentSchedule*>(pc);
    assert(ms);

    PaymentMethod* pm = e->GetMethod();
    HoldMethod* hm = dynamic_cast<PaymentMethod*>(pc);
    assert(hm);
}