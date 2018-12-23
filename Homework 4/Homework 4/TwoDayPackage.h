//LEO BABAKHANIAN, GEORGE KHDRYAN
//CS/IS 137- FALL CLASS
//HOMEWORK 4

#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include <string> 
using namespace std;

#include "Package.h"

class TwoDayPackage :public Package
{
private:
	double twoDayFee;

public:
	TwoDayPackage(const string&, const string&, const string&, const string&, const string&,
		const string&, const string&, const string&, const string&, const string&, double = 0.0, double = 0.0, double = 0.0);

	void setTwoDayFee(double);
	double getTwoDayFee()const;

	double calculateCost()const;
	void print()const;
};

#endif
