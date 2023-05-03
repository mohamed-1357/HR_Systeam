#pragma once
#include "Employee.h"
class Hourly_Employee : public Employee
{
protected:
	double Hours_work;
	double rate;
public:
	void addHours();
	double calculatePay();
	Hourly_Employee();
	void setDitails();
	void displayDetailes();
	void EditEmplyee();
	};

