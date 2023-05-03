#include "Employee.h"
int Employee::counter = 0;

void Employee::setBenefit()
{
	int p;

	do {
		cout << "Enter [1- To Health Benefit / 2- To Dental Benefit ]: ";
		cin >> p;
		if (p == 1)
		{
			system("Color 01");
			ptr[c] = new HealthBenifit;
			ptr[c]->setDetails_Benefit();
			TotalBenefit += ptr[c]->calculateBenefit();
			system("cls");
			c++;
		}
		else if (p == 2)
		{
			system("Color 03");
			ptr[c] = new DentalBenefit;
			ptr[c]->setDetails_Benefit();
			TotalBenefit += ptr[c]->calculateBenefit();
			c++;
			system("cls");
		}
		else
			cout << "Enter a valid number ";
	} while (p != 1 && p != 2);
}

void Employee::EditEmplyee()
{
int x;
cout << "Edit By" << endl;
cout << "1-Name\n2-Phone\n3-Jop Tiltle\n4-Email\n5-Number Of Benefits\n";
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
	 }
}

void Employee::editBenefit()
{
	cout << "\"Benefits\"\n";
	DisplayBenefits();
	int h = 0, ch;
	cin >> ch;
	cout << "1-Edit Rank" << endl;
	cout << "2-Edit Plan Type" << endl;
	cout << "3-Edit Information" << endl;
	cout << "4-Edit Amount" << endl;
	if ("Benefit Health" == ptr[h - 1]->getPlanType())
		cout << "5-Edit Coverage" << endl;
	cin >> h;
	string s;
	switch (h)
	{
	case 1:

		ptr[ch]->setRank();
		break;
	case 2:

		int option;
		cout << "Choose\n";
		cout << "1-Dental\n2-Health\nYour Answer: ";
		cin >> option;
		ptr[ch]->set_PlanType(option);
		break;
	case 3:
		cout << "Enter The New Info: ";
		cin >> s;
		ptr[ch]->setInfo(s);
		break;
	case 4:
		cout << "Enter The New Amount: ";
		double a;
		cin >> a;
		ptr[ch]->setAmount(a);

		break;
	case 5:
		cout << "Enter The New Coverage: ";
		cin >> s;
		ptr[ch]->setCoverge(s);
		break;
	default:
		break;
	}
}

double Employee::getTotalBenefit()
{
	return TotalBenefit;
}

void Employee::DisplayBenefits()
{
	cout << "-----------------------\n";
	for (int i = 0; i < c; i++)
	{
		cout << i + 1 << " - ";
		ptr[i]->displayBenefit();
		cout << "-----------------------\n";

	}
}

Employee::Employee():name("Unkown"),jop_Title("Unkown"),phone("Unkown"),email("Unkown"),payroll(0),TotalBenefit(0)
{
	
	counter++;
	id = counter;
}

void Employee::setDitails()
{

	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your phone: ";
	cin >> phone;
	cout << "Enter your jop title: ";
	cin >> jop_Title;
	cout << "Enter your email: ";
	cin >>email;
	cout << "Enter number of benefits : ";
	cin >> Number_of_Benefits;
	//if (D_ptr->getId())
	//	D_ptr[id]->setDepartment();//Error
	//else
	//	cout << "There's NO Departments\n";
}

string Employee::nameOfEmployee()
{
	return name;
	
}

string Employee::getName()
{
	return name;
}

string Employee::getJopTitle()
{
	return jop_Title;
}

string Employee::getEmail()
{
	return email;
}

string Employee::getPhone()
{
	return phone;
}

void Employee::setDepartment(Department&d)
{
	D_ptr = &d;
}

void Employee::displayDetailes()
{
	system("Color 01");
	cout << "---------------------\n";
	cout << "Name : " << name<<endl;
	cout << "Phone : " << phone << endl
		<< "Email : " << email << endl
		<< "Id : " << id << endl
		<< "Jop Titile : " << jop_Title<<"\n";
	DisplayBenefits();

}
void Employee::del_Benefit()
{
	cout << "-----------------------\n";

	for (int i = 0; i < c; i++)
	{
		cout << i + 1 << " - ";
		ptr[i]->displayBenefit();
		cout << "-----------------------\n";

	}
	int x;
	cout << "Enter Number Of Benefit You Want To Delete: ";
	cin >> x;
	swap(ptr[x - 1], ptr[c]);
	c--;
}