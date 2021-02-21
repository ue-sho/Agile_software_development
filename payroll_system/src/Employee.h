#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class PaymentMethod;
class PaymentSchedule;
class PaymentClassification;
class Affiliation;

class Employee {
public:
    virtual ~Employee();
    Employee(int empId, std::string name, std::string address);
    void SetClassification(PaymentClassification *pc);
    void SetSchedule(PaymentSchedule *ps);
    void SetMethod(PaymentMethod *pm);
    std::string GetName();
    PaymentClassification *GetClassification() const;
    PaymentSchedule *GetSchedule() const;
    PaymentMethod *GetMethod() const;
    void SetAffiliation(Affiliation *affiliation);
    Affiliation *GetAffiliation();

private:
    int itsEmpId;
    std::string itsName;
    std::string itsAddress;
    PaymentClassification *itsClassification;
    PaymentSchedule *itsSchedule;
    PaymentMethod *itsMethod;
    Affiliation *itsAffiliation;
};

#endif