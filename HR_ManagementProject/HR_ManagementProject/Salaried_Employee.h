#pragma once
#include "Employee.h"
class Salaried_Employee : public Employee
{
protected: 

	double salary;

public:
	double calculatePay();
	void getSalary();
	void displayDetailes();
	void setDitails();
	void EditEmplyee();

};
