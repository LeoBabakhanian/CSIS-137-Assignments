//Leo Babakhanian
//CS/IS 137- Fall Class
//Final Project

#include <iostream>
#include <string>
#include "Quantity.h"
using namespace std;

ostream& operator<<(ostream& output, const Quantity& q)
{
	output << q.getQuantity();
	return output;
}

istream& operator>>(istream& input, Quantity& q)
{
    input >> q.itemQuantity;
	return input;
}

Quantity::Quantity()
{

}

Quantity& Quantity::setQuantity(int q)
{
	itemQuantity = q;
	return *this;
}

int Quantity::getQuantity() const
{
	return itemQuantity;
}
