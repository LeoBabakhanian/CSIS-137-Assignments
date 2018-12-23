//Leo Babakhanian
//CS/IS 137- Fall Class
//Exam 2

#include <iostream>
#include <iomanip>
#include <string>
#include "WaterPet.h"
using namespace std;

WaterPet::WaterPet(const string& name, const string& color, double fee, string water) : VirtualPet(name, color, fee)
{
	if (water == "fresh" || water == "salt")
	{
		waterType = water;
	}
}

void WaterPet::setWaterType(const string& water)
{
	if (water == "fresh" || water == "salt")
	{
		waterType = water;
	}
}

string WaterPet::getWaterType()const
{
	return waterType;
}

void WaterPet::printInfo()const
{
	cout << "\n\nVIRTUAL PET INFO" << endl;
	cout << "---------------------" << endl;
	cout << "Adoption Cost:       " << calcAdoptionCost() << endl;
	cout << "Name:                " << getName() << endl;
	cout << "Type:			      " << getType() << endl;
	cout << "Color:               " << getColor() << endl;
	cout << "Mood:                " << getMood() << endl;
	cout << "Water Type:          " << getWaterType() << endl;

}