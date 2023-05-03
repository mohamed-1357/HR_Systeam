#include "Comission_Employee.h"

double Comission_Employee::calculatePay()
{
	payroll = rate * target;
	return payroll;
}

void Comission_Employee::setDitails()
{
	Employee::setDitails();
	cout << "Enter Target : ";
	cin >> target;
	cout << "Enter Rate : ";
	cin >> rate;
}

void Comission_Employee::displayDetailes()
{
	Employee::displayDetailes();
	cout << "The Target Is : "<<target<<endl;
	cout << "Rate Is : " << rate<<endl;
}

void Comission_Employee::EditEmplyee()
{
	system("cls");
	int x;
	cout << "\"Edit\"\n";
	cout << "-----------\n";
	cout << "1-Name\n2-Phone\n3-Jop Tiltle\n4-Email\n5-Number Of Benefits\n6-Targer\n7-Rate\n";
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
		cout << "Enter The New Target: ";
		cin >> target;
		cout << "Edit Succefuly\n";
		break;
	case 7:
		cout << "Enter The New Rate: ";
		cin >> rate;
		cout << "EditSuccefuly\n";

	}
}
