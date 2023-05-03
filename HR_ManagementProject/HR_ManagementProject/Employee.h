#pragma once
#include<iostream>
#include "Benefit.h"
#include "HealthBenifit.h"
#include "DentalBenefit.h"
#include "Department.h"
using namespace std;
class Employee
{
protected:
	int id;
	string name;
	string jop_Title;
	string phone;
	string email;
	static int counter;
	double payroll;
	int Number_of_Benefits;
	int c = 0;
	Department* D_ptr;
	double TotalBenefit;

public:

	Benefit** ptr = new Benefit *[Number_of_Benefits];
	void editBenefit();
	void DisplayBenefits();
	void del_Benefit();
	void setBenefit();
	virtual void EditEmplyee();
	double getTotalBenefit();
	Employee();
	virtual void setDitails();
	string nameOfEmployee();
	string getName();
	string getJopTitle();
	string getEmail();
	string getPhone();
	void setDepartment(Department& ); // :)
	virtual void displayDetailes();
	virtual double calculatePay()=0;

};
