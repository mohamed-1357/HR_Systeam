#pragma once
#include "Employee.h"
class Comission_Employee: public Employee
{
protected:
	double target;
	double rate;
public:
	double calculatePay();
	void setDitails();
	void displayDetailes();
	void EditEmplyee();

};

