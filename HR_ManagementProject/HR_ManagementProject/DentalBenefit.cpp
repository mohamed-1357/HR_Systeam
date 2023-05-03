#include "DentalBenefit.h"



double DentalBenefit::calculateBenefit()
{
	return amount * 0.1;
}

void DentalBenefit::displayBenefit()
{
	Benefit::displayBenefit();
	cout << "Benefit = " << calculateBenefit() << endl;

}

