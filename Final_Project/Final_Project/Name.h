//Leo Babakhanian
//CS/IS 137- Fall Class
//Final Project

#ifndef NAME_H
#define NAME_H
using namespace std;

class Name
{
	friend ostream& operator<<(ostream&, const Name&);
	friend istream& operator>>(istream&, Name&);

private:
	string itemName;

public:
    Name();
	Name& setName(string);
	string getName()const;
};

#endif
