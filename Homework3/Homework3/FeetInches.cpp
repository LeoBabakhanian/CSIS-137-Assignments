#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#include "FeetInches.h"

ostream& operator<<(ostream& output, const FeetInches& f)
{
	output << f.getFeet() << " feet, " << f.getInches() << " inches" << endl;
	return output;
}

istream& operator>>(istream& input, FeetInches& f)
{
	input >> f.feet;
	input.ignore();
	input >> f.inches;
	return input;
}

FeetInches::FeetInches(int f, int i)
{
	setInches(i);
	setFeet(f);
	simplifyUnits();
}

void FeetInches::simplifyUnits()
{
	if (inches >= 12)
	{
		feet += (inches / 12);
		inches = inches % 12;
	}
}

void FeetInches::displayDecimal() const
{
	double decimal = double(feet) + (double(inches) / 12);
	cout << decimal << endl;
}


FeetInches& FeetInches::setFeet(int f)
{
	feet = (f >= 0) ? f : 0;
	return *this;
}

FeetInches& FeetInches::setInches(int i)
{
	inches = (i >= 0) ? i : 0;
	simplifyUnits();
	return *this;
}

int FeetInches::getFeet() const
{
	return feet;
}

int FeetInches::getInches() const
{
	return inches;
}

const FeetInches& FeetInches::operator-(const FeetInches& f)
{
	FeetInches fdif;
	fdif.feet = feet - f.feet;
	fdif.inches = inches - f.inches;
	
	if (fdif.feet > 0 && fdif.inches < 0)
	{
		fdif.feet -= ((abs(fdif.inches) / 12) + 1);
		fdif.inches = 12 - (abs(fdif.inches) % 12);
	}
	if (fdif.feet < 0 && fdif.inches < 0)	
	{
		fdif.feet -= -((abs(fdif.inches) / 12) + 1);
		fdif.inches = -((abs(fdif.inches) % 12) + 12);		
	}
	if (fdif.feet < 0 && fdif.inches > 0)
	{
		fdif.feet -= -((abs(fdif.inches) / 12) + 1);
		fdif.inches = ((abs(fdif.inches) % 12) - 12);
	}
		
	return fdif;
}

const FeetInches& FeetInches::operator+(const FeetInches &f)
{
	FeetInches fsum;

	fsum.inches = inches + f.inches;
	fsum.feet = feet + f.feet;
	fsum.simplifyUnits();
	return fsum;
}

bool FeetInches::operator>(const FeetInches &f)
{
	bool check;

	if (feet > f.feet)
		check = true;
	else if (feet == f.feet && inches > f.inches)
		check = true;
	else
		check = false;

	return check;
}

bool FeetInches::operator<(const FeetInches &f)
{
	bool check;

	if (feet < f.feet)
		check = true;
	else if (feet == f.feet && inches < f.inches)
		check = true;
	else
		check = false;

	return check;
}

bool FeetInches::operator>=(const FeetInches &f)
{
	bool check;

	if (feet > f.feet)
		check = true;
	else if (feet == f.feet && inches >= f.inches)
		check = true;
	else
		check = false;

	return check;
}

bool FeetInches::operator<=(const FeetInches &f)
{
	bool check;

	if (feet < f.feet)
		check = true;
	else if (feet == f.feet && inches <= f.inches)
		check = true;
	else
		check = false;

	return check;
}

bool FeetInches::operator==(const FeetInches &f)
{
	bool check;

	if (feet == f.feet && inches == f.inches)
		check = true;
	else
		check = false;

	return check;
}

bool FeetInches::operator!=(const FeetInches &f)
{
	bool check;

	if (feet != f.feet)
		check = true;
	else if (feet == f.feet && inches != f.inches)
		check = false;
	else
		check = false;

	return check;
}