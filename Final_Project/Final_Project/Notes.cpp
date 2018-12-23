//Leo Babakhanian
//CS/IS 137- Fall Class
//Final Project

#include <iostream>
#include <string>
#include "Notes.h"
using namespace std;

ostream& operator<<(ostream& output, const Notes& n)
{
	output << n.getNotes();
	return output;
}

istream& operator>>(istream& input, Notes& n)
{
	getline(input, n.itemNotes);
	return input;
}

Notes::Notes()
{

}

Notes& Notes::setNotes(string notes)
{
	itemNotes = notes;
	return *this;
}

string Notes::getNotes() const
{
	return itemNotes;
}
