#include "Department.h"
int Department::count = 0;
void Department::setNameOfDepartment()
{
	cout << "Enter The New Name Of Department: ";
	cin >> name;
}
int Department::getId()
{
	return ID;
}
void Department::printDepartment()
{
	cout << "Name: " << name << endl;
	cout << "Department ID: "<< ID << endl;
}

Department::Department()
{
	count++;
	ID = count;
}

string Department::getName()
{
	return name;
}

void Department::set_default_Department(string s)
{
	name = s;
}
