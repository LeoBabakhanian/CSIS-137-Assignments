//Leo Babakhanian
//CS/IS 137- Fall Class
//Final Project

#include <iostream>
#include <string>
#include "Dimensions.h"
using namespace std;

ostream& operator<<(ostream& output, const Dimensions& d)
{
	output << d.getLength() << " in. x ";
	output << d.getWidth() << " in. x ";
	output << d.getHeight() << " in. ";

	return output;
}

istream& operator>>(istream& input, Dimensions& d)
{
    //cout << "Length: ";
    cin >> d.length;
    //cout <<"Width: ";
    cin >> d.width;
    //cout <<"Height: ";
    cin >> d.height;
	return input;
}

Dimensions::Dimensions()
{
    length = 0;
    width = 0;
    height = 0;
}

Dimensions& Dimensions::setDimensions(double l, double w, double h)
{
    length = l;
    width = w;
    height = h;
	return *this;
}

void Dimensions::setWidth(double w)
{
    width = w;
}

void Dimensions::setHeight(double h)
{
    height = h;
}

void Dimensions::setLength(double l)
{
    length = l;
}

double Dimensions::getWidth() const
{
	return width;
}

double Dimensions::getHeight() const
{
	return height;
}

double Dimensions::getLength() const
{
	return length;
}
