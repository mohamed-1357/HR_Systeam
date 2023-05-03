#include "ManagerdEmployee.h"

void ManagerdEmployee::setDitails()
{
	Employee::setDitails();
	cout << "Enter Bouns: ";
	cin >> Bouns;
}

void ManagerdEmployee::displayDetailes()
{
	Employee::displayDetailes();
	cout << "Bouns: " << Bouns;
}

void ManagerdEmployee::addBouns()
{
	int b;
	cout << "Enter More Bouns ";
	cin >> b;
	Bouns += b;
}

double ManagerdEmployee::calculatePay()
{
	payroll = salary + Bouns;
	return payroll;
}

void ManagerdEmployee::EditEmployee()
{
	Employee::EditEmplyee();
}
