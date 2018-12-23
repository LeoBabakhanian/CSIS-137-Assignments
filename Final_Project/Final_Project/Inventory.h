//Leo Babakhanian
//CS/IS 137- Fall Class
//Final Project

#ifndef INVENTORY_H
#define INVENTORY_H

#include "Name.h"
#include "Quantity.h"
#include "Weight.h"
#include "Dimensions.h"
#include "Notes.h"
using namespace std;

class Inventory
{
	friend ostream& operator<<(ostream&, Inventory&);

private:
	Name name;
	Quantity quantity;
	Dimensions dimensions;
	Weight weight;
	Notes notes;

public:
	Inventory();
	~Inventory();
	//Inventory& setItem(Name,Quantity,Weight,Dimensions,Notes);
	Inventory& setName(Name);
	Inventory& setQuantity(Quantity);
	Inventory& setDimensions(Dimensions);
	Inventory& setWeight(Weight);
	Inventory& setNotes(Notes);
	Name getName();
	Quantity getQuantity();
	Dimensions getDimensions();
	Weight getWeight();
	Notes getNotes();

};

#endif
