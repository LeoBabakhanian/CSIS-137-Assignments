//Leo Babakhanian
//CS/IS 137- Fall Class
//Final Project

#include <iostream>
#include <string>
#include <iomanip>
#include "Inventory.h"
using namespace std;

ostream& operator<<(ostream& output, Inventory& l)
{
	output << l.getName() << setw(9) << l.getQuantity() << setw(15) <<  l.getWeight()
		<< setw(10) << l.getDimensions() << endl << "Notes: " << l.getNotes() << endl << endl;

	return output;
}

Inventory::Inventory()
{

}

Inventory::~Inventory()
{

}

/*
Inventory& Inventory::setItem(Name n, Quantity q, Weight w, Dimensions d, Notes no)
{
	//
	return *this;
}
*/

Inventory& Inventory::setName(Name n)
{
    name = n;
	return *this;
}

Inventory& Inventory::setQuantity(Quantity q)
{
    quantity = q;
	return *this;
}

Inventory& Inventory::setDimensions(Dimensions d)
{
    dimensions = d;
	return *this;
}

Inventory& Inventory::setWeight(Weight w)
{
    weight = w;
	return *this;
}

Inventory& Inventory::setNotes(Notes n)
{
    notes = n;
	return *this;
}

Name Inventory::getName()
{
	return name;
}

Quantity Inventory::getQuantity()
{
	return quantity;
}

Dimensions Inventory::getDimensions()
{
	return dimensions;
}

Weight Inventory::getWeight()
{
	return weight;
}

Notes Inventory::getNotes()
{
	return notes;
}
