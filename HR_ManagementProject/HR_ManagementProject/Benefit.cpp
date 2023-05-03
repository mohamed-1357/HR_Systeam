#include "Benefit.h"

void Benefit::setDetails_Benefit()
{
	system("cls");
	cout << "Enter Amount : ";
	cin >> amount;
	cout << "Enter Info : ";
	cin >> info;
}




Benefit::Benefit():planType("Unkwon"),amount(0),info("Unkwon")
{
}

void Benefit::set_PlanType(int p)
{
	(p == 1) ? planType = "Health Benefit" : planType = "Dental Benefit";
}

void Benefit::setRank()
{
	cout << "Enter Rank[Gold - Silver - Pronz]: " << endl;
	cin >> rank;
}

void Benefit::displayBenefit()
{
	cout <<((planType=="1") ? "Health Benefit\n" : "Dental Benefit\n") << endl;
	cout << "The Amount Is : " << amount<<endl;
	cout << "Info : " << info << endl;
}



string Benefit::getPlanType()
{
	return planType;
}

void Benefit::setAmount(double a)
{
	amount = a;
}

double Benefit::getAmount()
{
	return amount;
}

void Benefit::setInfo(string i)
{
	info = i;
}

string Benefit::getInfo()
{
	return info;
}

void Benefit::setRank(string r)
{
	rank = r;
}

string Benefit::getRank()
{
	return rank;
}

void Benefit::setCoverge(string s)
{

}
