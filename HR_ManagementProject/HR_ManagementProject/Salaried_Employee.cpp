#include "Salaried_Employee.h"

double Salaried_Employee::calculatePay()
{
	payroll = salary;
	return payroll;
}

void Salaried_Employee::getSalary()
{
	cout << "Enter Salary: ";
	cin >> salary;
}

void Salaried_Employee::displayDetailes()
{
	Employee::displayDetailes();
	
	cout << "The Salary : " << salary<<endl;

}

void Salaried_Employee::setDitails()
{
	Employee::setDitails();
	cout << "Enter Salary :";
	cin >> salary;

}

void Salaried_Employee::EditEmplyee()
{
	system("cls");
	int x;
	cout << "\"Edit By\"\n";
	cout << "1-Name\n2-Phone\n3-Jop Tiltle\n4-Email\n5-Number Of Benefits\n6-Salary\n";
	cout << "Enter Your Choice: ";
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "Enter The New Name: ";
		cin >> name;
		cout << "Edit Succefuly\n";
		break;
	case 2:
		cout << "Enter The New Phone: ";
		cin >> phone;
		cout << "Edit Succefuly\n";
		break;
	case 3:
		cout << "Enter The New Jop Title: ";
		cin >> jop_Title;
		cout << "Edit Succefuly\n";
		break;
	case 4:
		cout << "Enter The New Email: ";
		cin >> email;
		cout << "Edit Succefuly\n";
		break;
	case 5:
		cout << "Enter Number of Benefits: ";
		cin >> Number_of_Benefits;
		cout << "Edit Succefuly\n";
		break;
	case 6:
		cout << "Enter The New Salary: ";
		cin >> salary;
		cout << "Edit Succefuly\n";
		break;


	}
}
