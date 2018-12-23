//Leo Babakhanian
//CS/IS 137- Fall Class
//Final Project

#include <iostream>
#include <string>
#include "Name.h"
using namespace std;

ostream& operator<<(ostream& output, const Name& n)
{
	output << n.getName();
	return output;
}

istream& operator>>(istream& input, Name& n)
{
	getline(input, n.itemName);
	return input;
}

Name::Name()
{
    itemName = "No Name";
}

Name& Name::setName(string n)
{
	itemName = n;
	return *this;
}

string Name::getName() const
{
	return itemName;
}
