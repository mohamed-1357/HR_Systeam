#pragma once
#include<iostream>
using namespace std;
class Department
{
protected:

	int ID;
	string name;
	static int count;

public:
	int getId();
	void printDepartment();
	void setNameOfDepartment();
	Department();
	string getName();
	void set_default_Department(string s);

};

