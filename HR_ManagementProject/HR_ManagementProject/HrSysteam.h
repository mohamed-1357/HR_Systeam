#pragma once
#include<iostream>
#include<string>
#include "Department.h"
#include "Benefit.h"
#include "Employee.h"
#include "Hourly_Employee.h"
#include "Salaried_Employee.h"
#include "Comission_Employee.h"
#include "ManagerdEmployee.h"
using namespace std;
class HrSysteam
{
private:
	int counter_OfEmployee;
	int counter_OfDeparment;
	int size;
	int sizeOfDepartment;
	Employee** ptrEmployee;
	Department* ptrDepartment;

public:
	HrSysteam(int ,int);
	void setNumberEmplyees();
	void AddEmployee();
	void DelEmployee();
	void modifyEmployee();
	void FindEmployee();
	void ShowEmployees();
	double CalcTotalPayroll();
	void ShowNames();
	void AddDepartment();
	void EditDepartment();
	void getCalculatePayroll();
	void DelDepartment();
	void ShowNamesOfDepartment();
	void ShowAllOfEmployee();
	void ShowAllOfDepartment();
	void EditBenefit();
	void AddBenefit();
	void delBenefit();
};

