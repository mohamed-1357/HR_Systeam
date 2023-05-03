#pragma once
#include "Salaried_Employee.h"
class ManagerdEmployee : public Salaried_Employee
{
public:
	void setDitails();
	void displayDetailes();
	void addBouns();
	double calculatePay();
	void EditEmployee();
protected:
	double Bouns;
};
