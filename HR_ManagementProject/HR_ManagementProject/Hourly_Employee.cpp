#include "Hourly_Employee.h"

void Hourly_Employee::addHours()
{
	double h;
	cout << "Enter more hourse: ";
	cin >> h;
	Hours_work += h;
}

double Hourly_Employee::calculatePay()
{
	payroll = rate * Hours_work;
	return payroll;
}

Hourly_Employee::Hourly_Employee():rate(0),Hours_work(0)
{

}

void Hourly_Employee::setDitails()
{
	Employee::setDitails();
	cout << "Enter hourse of working ";
	cin >> Hours_work;
	cout << "Enter Rate : ";
	cin >> rate;
}

void Hourly_Employee::displayDetailes()
{
	Employee::displayDetailes();
	cout << "Hours work : "<<Hours_work<<endl;
	cout << "Rate : " << rate<<endl;
}

void Hourly_Employee::EditEmplyee()
{
	system("cls");
	int x;
	cout << "\"Edit By\"\n";
	cout << "1-Name\n2-Phone\n3-Jop Tiltle\n4-Email\n5-Number Of Benefits\n6-Hours\n7-Rate\n";
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
		cout << "Enter The New Hours Work: ";
		cin >> Hours_work;
		cout << "Edit Succefuly\n";
		break;
	case 7:
		cout << "Enter The New Rate: ";
		cin >> rate;
		cout << "EditSuccefuly\n";

	}
}
