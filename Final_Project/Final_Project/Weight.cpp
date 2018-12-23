//Leo Babakhanian
//CS/IS 137- Fall Class
//Final Project

#include <iostream>
#include <string>
#include "Weight.h"
using namespace std;

ostream& operator<<(ostream& output, const Weight& w)
{
	output << w.getWeight();
	return output;
}

istream& operator>>(istream& input, Weight& w)
{
    cin >> w.itemWeight;
	return input;
}

Weight::Weight()
{

}

Weight& Weight::setWeight(double w)
{
	itemWeight = w;
	return *this;
}

double Weight::getWeight() const
{
	return itemWeight;
}
