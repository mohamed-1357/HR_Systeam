#include "HrSysteam.h"
#include<Windows.h>
void HrSysteam::setNumberEmplyees()
{
	cout << "Enter Number Of Employee: ";
	cin >> size;
	cout << "Enter Number of Departments ";
	cin >> sizeOfDepartment;

}

HrSysteam::HrSysteam(int s,int s_D):counter_OfDeparment(1),counter_OfEmployee(0)
{
	size = s;
	sizeOfDepartment = s_D;
	ptrEmployee = new Employee* [size];
	ptrDepartment = new Department [sizeOfDepartment];
	ptrDepartment[0].set_default_Department("Defualt Department");

}

void HrSysteam::AddEmployee()
{
	system("cls");
	system("Color 03");

	cout << "+-----------------------------------+" << endl;
	cout << "| 1-Hourly Employee                 |" << endl;
	cout << "| 2-Salaried Employee               |" << endl;
	cout << "| 3-Commission Employee             |" << endl;
	cout << "| 4-Mangerd Employee                |" << endl;
	cout << "+---------------------------------- +" << endl;
	cout << "Enter Your Choice: ";
	int x;
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "----------- Set User Info [" << counter_OfEmployee + 1 << "]-------------\n";
		ptrEmployee [counter_OfEmployee] = new Hourly_Employee;
		ptrEmployee[counter_OfEmployee]->setDitails();
		cout << "Added Successfuly\n";
		counter_OfEmployee++;
		break;

	case 2:
		cout << "----------- Set User Info [" << counter_OfEmployee +1<< "]-------------\n";
		ptrEmployee[counter_OfEmployee] = new Salaried_Employee;
		ptrEmployee[counter_OfEmployee]->setDitails();
		cout << "Added Successfuly\n";
		counter_OfEmployee++;
		break;
	case 3:
		cout << "----------- Set User Info [" << counter_OfEmployee+1 << "]-------------\n";
		ptrEmployee[counter_OfEmployee] = new Comission_Employee;
		ptrEmployee[counter_OfEmployee]->setDitails();
		cout << "Added Successfuly\n";
		counter_OfEmployee++;
		break;
	case 4:
		cout << "----------- Set User Info [" << counter_OfEmployee +1<< "]-------------\n";
		ptrEmployee[counter_OfEmployee] = new ManagerdEmployee;
		ptrEmployee[counter_OfEmployee]->setDitails();
		cout << "Added Successfuly\n";
		counter_OfEmployee++;
		break;
	
	}
	cout << "----------------------------------------\n";
	cout << "\"Choose Department\"\n";
	//if (counter_OfDeparment != 0)
	//{
	cout << "---------------------------\n";
	ShowNamesOfDepartment();
		int t;
		cout << "Enter Number: ";
		cin >> t;
		ptrEmployee[counter_OfEmployee - 1]->setDepartment(ptrDepartment[x - 1]);// this is fogr foucs in it 
		cout << "---------------------------\n";
		system("pause");
	//}

	/*else
	{
		cout << "Ther is No Department \n";
	}
	*/
}

void HrSysteam::ShowNames()
{
	cout << "\"List Of Employees\"\n";
	cout << "--------------------------\n";
	for (int i = 0; i < counter_OfEmployee; i++)
	{
		system("Color 02");
		cout << i + 1 <<" - " << ptrEmployee[i]->nameOfEmployee() << endl;
	}
	cout << "--------------------------\n";
	
}

void HrSysteam::DelEmployee()
{
	system("cls");
	cout << "\"Delete\"\n";

	cout << "1-By Name\t2-By Phone\t3-Email\n";
	cout << "Enter Your choice... : ";
	int choice;
	cin >> choice;
	string DeleteName;
	string DeletePhone;
	string DeleteEmail;
	string DeleteJopTitle;
	bool flag = 0;

	switch (choice) {
	case 1:
		cout << "Enter The Name You Want TO Delete: ";
		cin >> DeleteName;
		for (int i = 0; i < counter_OfEmployee; i++)
		{
			if (DeleteName == ptrEmployee[i]->getName())
			{
				swap(ptrEmployee[i],ptrEmployee[counter_OfEmployee]);
				flag = 1;
		//		char ch;
		//		cout << "Are You Sure To Delete (y/n)";
				
		//		ptrEmployee[i]->displayDetailes();
		//		cout << "Your Answer: ";
		//		cin >> ch;
		//		if (ch == 'y'||ch=='Y')
		//		{
					system("Color 0A");
					cout << "Has Deleted Successfuly\n";
					counter_OfEmployee--;
		//		}
		//		else if (ch == 'n'||ch=='N')
		//			break;
			}
		}
		if (!flag)
		{
		 system("Color 04");
			cout << "This Name Not Found " << endl;
		}
		system("pause");
		break;
	case 2:
		cout << "Enter The Phone You Want TO Delete: ";
		cin >> DeletePhone;
		for (int i = 0; i < counter_OfEmployee; i++)
		{
			if (DeletePhone == ptrEmployee[i]->getPhone())
			{

				swap(ptrEmployee[i], ptrEmployee[counter_OfDeparment]);
				flag = 1;
				cout << "Has Deleted Successfuly\n";
				counter_OfEmployee--;
			}
		}
		if (!flag)

		{
			system("Color 04");
			cout << "This Phone Not Found " << endl;
		}
		system("pause");

		break;
	case 3:
		cout << "Enter The Email You Want TO Delete: ";
		cin >> DeleteEmail;
		for (int i = 0; i < counter_OfEmployee; i++)
		{
			if (DeleteEmail == ptrEmployee[i]->getEmail())
			{
				swap(ptrEmployee[i], ptrEmployee[counter_OfDeparment]);
				flag = 1;
				system("Color 02");
				cout << "Has Deleted Successfuly\n";
				counter_OfEmployee--;
			}
		}
		counter_OfEmployee--;
		if (!flag)
		{
			system("Color 04");
			cout << "This Email Not Found " << endl;
		}
		system("pause");

		break;

	}

}

void HrSysteam::modifyEmployee()
{
	if (counter_OfEmployee > 0)
	{
		ShowNames();
		int num;
		cout << "Enter Number of Employee You Want To Edit: ";
		cin >> num;
 		ptrEmployee[num - 1]->EditEmplyee();
	}

	else
	{
		cout << "No Employee To Edit\n";
	}
	system("pause");
}
void HrSysteam::getCalculatePayroll()
{
	ShowNames();
	int num;
	cout << "Enter Number: ";
	cin >> num;
	cout << "Payroll Of This Employee Is : " << ptrEmployee[num - 1]->calculatePay() << endl;
	system("pause");
}
void HrSysteam::FindEmployee()
{
	system("cls");
	cout << "1-By Name\n2-By Phone\n3-Email\n";
	cout << "Enter Your choice... : ";
	int choice;
	cin >> choice;
	string SearchName;
	string SearchPhone;
	string SearchEmail;
	string SearchJopTitle;
	bool flag = 0;
    
	switch (choice) {
	case 1:
		cout << "Enter The Name You Want to Search About: ";
		cin >> SearchName;
		for (int i = 0; i < counter_OfEmployee; i++)
		{
			if (SearchName == ptrEmployee[i]->getName())
			{
				system("Color 02");
				ptrEmployee[i]->displayDetailes();
				flag = 1;
			}
		}
		if (!flag)
		{
			system("Color 04");
			cout << "This Employee Not Found " << endl;
		}
		system("pause");

		break;
	case 2:
		cout << "Enter The Phone Number You Want to Search About: ";

		cin >> SearchPhone;
		for (int i = 0; i < counter_OfEmployee; i++)
		{
			if (SearchPhone == ptrEmployee[i]->getPhone())
			{
				system("Color 02");
				ptrEmployee[i]->displayDetailes();
				flag = 1;
			}
		}
		if (!flag)
		{
			system("Color 04");
			cout << "This Employee Not Found " << endl;
		}
		system("pause");

		break;
	case 3:
		cout << "Enter The Email You Want to Search About: ";

		cin >> SearchEmail;
		for (int i = 0; i < counter_OfEmployee; i++)
		{
			if (SearchEmail == ptrEmployee[i]->getEmail())
			{
				system("Color 02");
				ptrEmployee[i]->displayDetailes();
				flag = 1;
			}
		}

		if (!flag)
		{
			system("Color 04");
			cout << "This Employee Not Found " << endl;
		}
		system("pause");

		break;
	//case 4:
	//	for (int i = 0; i < counter_OfEmployee; i++)
	//	{
	//		if (SearchJopTitle == ptrEmployee[i]->getJopTitle())
	//		{
	//			ptrEmployee[i]->displayDetailes();
	//			flag = 1;
	//		}
	//	}
		//if (!flag)
	//		cout << "This Name Not Found " << endl;
	//	break;
		
	}
}

void HrSysteam::ShowEmployees()
{
	system("Color 02");
	for (int i = 0; i < counter_OfEmployee; i++)
	{
		ptrEmployee[i]->displayDetailes();

	}
	//if (counter_OfEmployee == 0)
	//{
	//	system("Color 04");
	//	cout << "Sorry Ther's No Employees :( \n";
	//	cout << "Do You Want To Add Employee (y/n)\n";
	//	char ch;
	//	cin >> ch;
	//	if (ch == 'y')
	//	{
	//		ptrEmployee[counter_OfEmployee]->AddEmpoyee;
	//			counter_OfEmployee++;
	//	}
	//}
}

double HrSysteam::CalcTotalPayroll()
{
	return ptrEmployee[counter_OfEmployee]->getTotalBenefit() + ptrEmployee[counter_OfEmployee]->calculatePay();
}

void HrSysteam::AddDepartment()
{

	cout << "Enter Name Of Department "<<counter_OfDeparment+1<<" Name: ";
	ptrDepartment[counter_OfDeparment].setNameOfDepartment();
	counter_OfDeparment++;
}

void HrSysteam::EditDepartment()
{
	cout << "----------------------\n";
	for (int i = 0; i < counter_OfDeparment; i++)
	{
		cout<<i+1<<" - " << ptrDepartment[i].getName() << endl;
	}
	cout << "----------------------\n";
	int x;
	cout << "Enter Number Of Department You Want To Edit: ";
	cin >> x;
	ptrDepartment[x - 1]. setNameOfDepartment();
}
void HrSysteam::DelDepartment()
{
	bool flag = 0;
	ShowNamesOfDepartment();
	int del;
	cout << "Enter The Number Of Department You Want To Delete: ";
	cin >> del;
	for (int i = 0; i < counter_OfDeparment; i++)
	{
		if (ptrDepartment[del-1].getName () == ptrDepartment[i].getName()) {
			swap(ptrDepartment[del - 1], ptrDepartment[counter_OfDeparment]);
			counter_OfDeparment--;
			flag = 1;
			system("Color 02");
			cout << "Was Deleted Successfuly\n";
			break;
		}
	}
	if (!flag)
		cout << "Nor Found\n";
}
void HrSysteam::ShowNamesOfDepartment()
{
	cout << "\"Department\"\n";
	cout << "------------------------\n";
	for (int i = 0; i < counter_OfDeparment; i++)
	{
		cout << "| " << i + 1 << " - " << ptrDepartment[i].getName() << endl;
	}
	cout << "------------------------\n";

}

void HrSysteam::ShowAllOfEmployee()
{
	for (int i = 0; i < counter_OfEmployee; i++)
	{
		
		cout << "------------ Employee [" << i + 1 << "] Info ----------------\n";
	    ptrEmployee[i]->displayDetailes();
		cout << "--------------------------\n";
	}
	
}

void HrSysteam::ShowAllOfDepartment()
{
	cout << "------------ Deparments Info-----------\n";
	for (int i = 0; i < counter_OfDeparment; i++)
	{

		cout << i + 1 << " - " << ptrDepartment[i].getName()<<endl;
	}
}

void HrSysteam::EditBenefit()
{
	int i;
	ShowNames();
	cout << "Enter Employee You Want To Edit His Benefits: ";
	cin >> i;
	ptrEmployee[i - 1]->editBenefit();
	system("pause");
}

void HrSysteam::AddBenefit()
{
	int i;
	ShowNames();
	cout << "Enter Employee You Want To Edit His Benefits: ";
	cin >> i;
	ptrEmployee[i - 1]->setBenefit();

}

void HrSysteam::delBenefit()
{
	int i;
	ShowNames();
	cout << "Enter Number Of Employee You Want To Delete His Benefits: ";
	cin >> i;
	ptrEmployee[i - 1]->del_Benefit();

	
}
