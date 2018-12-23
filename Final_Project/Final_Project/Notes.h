//Leo Babakhanian
//CS/IS 137- Fall Class
//Final Project

#ifndef NOTES_H
#define NOTES_H
using namespace std;

class Notes
{
	friend ostream& operator<<(ostream&, const Notes&);
	friend istream& operator>>(istream&, Notes&);

private:
	string itemNotes;

public:
	Notes();
	Notes& setNotes(string);
	string getNotes()const;

};

#endif