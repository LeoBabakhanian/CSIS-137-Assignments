//Leo Babakhanian
//CS/IS 137- Fall Class
//Exam 2

#ifndef DOMESTICLANDPET_H
#define DOMESTICLANDPET_H

#include <string> 
using namespace std;

#include "VirtualPet.h"

class DomesticLandPet : public VirtualPet
{
private:
	double licenseFee;
	double vetFees;
	double baseAdoptionFee;
	double adoptionCost;

protected:
	string mood;

public:
	DomesticLandPet(const string&, const string&, double = 25.0, double = 10.0, double = 80.0);
	string getMood()const;
	void setVetFees(double);
	void setLicenseFee(double);
	double getVetFees()const;
	double getLicenseFee()const;
	//void setBaseAdoptionFee(double);
	//virtual void printInfo();
	virtual void setMood(string);
	virtual double calcAdoptionCost()const;
	virtual void changeMood();
};

#endif