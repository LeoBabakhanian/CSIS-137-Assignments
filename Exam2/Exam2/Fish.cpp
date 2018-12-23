//Leo Babakhanian
//CS/IS 137- Fall Class
//Exam 2

#include <iostream>
#include <string>
#include "Fish.h"
using namespace std;

Fish::Fish(const string& name, const string& color, double fee, const string& water) : WaterPet(name, color, fee, water)
{
	setType();
}

void Fish::setType()
{
	type = "Fish";
}

void Fish::action() const
{
	if (mood == "content")
	{
		cout << "Swish swish." << endl;
		cout << "Your fish " << getName() << " is casually swimming." << endl;
	}
	else if (mood == "hungry")
	{
		cout << "SWISH SWISH SWISH!!" << endl;
		cout << getName() << " is swimming to the top of the tank looking for food!" << endl;
	}
	else if (mood == "sick")
	{
		cout << getName() << " is hiding behind a rock and doesn't feel well." << endl;
		cout << "Time to call the vet!!" << endl;
	}

}

void Fish::printInfo()const
{
	VirtualPet::printInfo();
	action();
	cout << endl;
}