//Leo Babakhanian
//CS/IS 137- Fall Class
//Final Project

#ifndef INVENTORYLIST_H
#define INVENTORYLIST_H

#include "Inventory.h"

using namespace std;

class InventoryList
{
	friend ostream& operator<<(ostream&, const InventoryList&);

private:
	Inventory *ptr;
	int MAX = 100;
	int itemAmount;

public:
	InventoryList();
	~InventoryList();
	void addItem(Inventory);
	void removeItem(int);

};

#endif
