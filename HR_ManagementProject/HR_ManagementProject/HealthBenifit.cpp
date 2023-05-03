#include "HealthBenifit.h"

void HealthBenifit::setDetails_Benefit()
{
	Benefit::setDetails_Benefit();
	cout << "Enter Coverage : ";
	cin >> coverage;
}

double HealthBenifit::calculateBenefit()
{
	return amount * 0.2;
}

void HealthBenifit::setCoverage(string c)
{
	coverage = c;
}

string HealthBenifit::getCoverage()
{
	return coverage;
}

void HealthBenifit::displayBenefit()
{
	cout << "Plan Type Is : " << planType << endl;
	cout << "Amount Is : " << amount << endl;
	cout << "Info Is : " << info << endl;
	cout << "Converage : " << coverage<<endl;
	cout << "Benefit = " << calculateBenefit()<<endl;
}

HealthBenifit::HealthBenifit():coverage("Unkwon")
{
}
