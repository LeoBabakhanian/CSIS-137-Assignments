//Leo Babakhanian
//CS/IS 137- Fall Class
//Exam 2

#include <iostream>
#include <iomanip>
#include <string>
#include "DomesticLandPet.h"
using namespace std;

DomesticLandPet::DomesticLandPet(const string& name, const string& color, double fee, double lfee, double vfee) : VirtualPet (name, color, fee)
{
	//setBaseAdoptionFee(fee);
	setLicenseFee(lfee);
	setVetFees(vfee);
}

void DomesticLandPet::setVetFees(double vf)
{
	vetFees = vf;
}

void DomesticLandPet::setLicenseFee(double lf)
{
	licenseFee = lf;
}

double DomesticLandPet::getVetFees()const
{
	return vetFees;
}

double DomesticLandPet::getLicenseFee()const
{
	return licenseFee;
}

void DomesticLandPet::changeMood()
{
	int num = rand() % 5 + 1;

	switch (num)
	{
	case 1:
		mood = "content";
		break;
	case 2:
		mood = "hungry";
		break;
	case 3:
		mood = "sick";
		break;
	case 4:
		mood = "playful";
		break;
	case 5:
		mood = "naughty";
		break;
	}
}

void DomesticLandPet::setMood(string md)
{
	if (md == "hungry" || md == "sick" || md == "playful" || md == "naughty")
	{
		mood = md;
	}
	else
	{
		mood = "content";
	}
}

string DomesticLandPet::getMood()const
{
	return mood;
}

double DomesticLandPet::calcAdoptionCost()const
{
	return licenseFee + vetFees + (VirtualPet::calcAdoptionCost());
}