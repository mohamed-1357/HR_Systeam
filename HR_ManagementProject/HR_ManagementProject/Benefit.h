#pragma once
#include<iostream>
using namespace std;
class Benefit
{
protected:
	string planType;
	double amount;
	string info;
	string rank;

public:
	string getPlanType();	//
	void setAmount(double);
	double getAmount();	
	void setInfo(string);
	string getInfo();
	void setRank(string);
	string getRank();
	virtual void setCoverge(string);
	virtual void setDetails_Benefit();
	Benefit();
	void set_PlanType(int p);
	void setRank();
	virtual double calculateBenefit() =0;
    virtual	void displayBenefit();
};