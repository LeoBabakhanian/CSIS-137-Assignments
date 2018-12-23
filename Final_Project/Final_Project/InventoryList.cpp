//Leo Babakhanian
//CS/IS 137- Fall Class
//Final Project

#include <iostream>
#include <string>
#include <iomanip>
#include "InventoryList.h"
using namespace std;

ostream& operator<<(ostream& output, const InventoryList& list)
{
	for (int i = 0; i < list.itemAmount; i++)
	{
		output << "#" << (i + 1) << " \t " << list.ptr[i];
	}

	return output;
}

InventoryList::InventoryList()
{
	itemAmount = 0;
	ptr = new Inventory[MAX];
}

InventoryList::~InventoryList()
{
	delete[]ptr;
}

void InventoryList::addItem(Inventory i)
{
	if (itemAmount > MAX)
	{
		cout << "You have reached the maximum number of items. Unable to add item." << endl;
		return;
	}

	ptr[itemAmount] = i;
	itemAmount++;

}

void InventoryList::removeItem(int x)
{
    // Search x in array
    int i;

    for (i = 0; i < itemAmount; i++)
    {
        if ((i + 1) == x)
        {
            break;
        }
    }

    // If x found in array
    if (i < itemAmount)
    {
        // reduce size of array and move all
        // elements on space ahead
        itemAmount--;
        for (int j = i; j < itemAmount; j++)
        {
            ptr[j] = ptr[j+1];
        }

    cout << endl << "Item Removed." << endl;
    return;

   }

   cout << endl << "Item was not removed." << endl;
}
