//LEO BABAKHANIAN, GEORGE KHDRYAN
//CS/IS 137- FALL CLASS
//HOMEWORK 5

#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include <string> 
using namespace std;

#include "Package.h"

class OvernightPackage :public Package
{
private:
	double overnightFeePerOunce;
public:
	OvernightPackage(const string&, const string&, const string&, const string&, const string&,
		const string&, const string&, const string&, const string&, const string&, double = 0.0, double = 0.0, double = 0.0);

	void setOvernightFeePerOunce(double);
	double getOvernightFeePerOunce()const;

	virtual double calculateCost()const;
	virtual void print()const;
};

#endif