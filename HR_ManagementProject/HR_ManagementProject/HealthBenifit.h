#pragma once
#include "Benefit.h"
class HealthBenifit : public Benefit
{
	string coverage;
public:
	void setDetails_Benefit();
	double calculateBenefit();
	void setCoverage(string c);
	string getCoverage();
	void displayBenefit();
	HealthBenifit();
};

