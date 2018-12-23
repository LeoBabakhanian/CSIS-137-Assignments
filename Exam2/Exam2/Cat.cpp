//Leo Babakhanian
//CS/IS 137- Fall Class
//Exam 2

#include <iostream>
#include <string>
#include "Cat.h"
using namespace std;

Cat::Cat(const string& name, const string& color, double fee, double licfee, double vetfee) : DomesticLandPet(name, color, fee, licfee, vetfee)
{
	setType();
}

void Cat::setType()
{
	type = "Cat";
}

void Cat::action() const
{
	if (mood == "content")
	{
		cout << "Purr, purr." << endl;
		cout << "Your cat " << getName() << " is hungry for some water and fish." << endl;
	}
	else if (mood == "hungry")
	{
		cout << "MEOW. MEOW." << endl;
		cout << "Your cat " << getName() << " is hungry for some water and fish." << endl;
	}
	else if (mood == "sick")
	{
		cout << getName() << " is quiet and hiding and doesn't feel well." << endl;
		cout << "Time to go to the vet!!" << endl;
	}
	else if (mood == "playful")
	{
		cout << getName() << " is playing with a toy mouse. Meow." << endl;
	}
	else if (mood == "naughty")
	{
		cout << "Scratch. Scratch. " << getName() << " is scratching the curtains" << endl;
		cout << "Time to buy another scratching post or trim nails! " << endl;
	}
}

void Cat::printInfo()const
{
	VirtualPet::printInfo();
	action();
	cout << endl;
}