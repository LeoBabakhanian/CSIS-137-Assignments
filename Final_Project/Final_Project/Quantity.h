//Leo Babakhanian
//CS/IS 137- Fall Class
//Final Project

#ifndef QUANTITY_H
#define QUANTITY_H
using namespace std;

class Quantity
{
	friend ostream& operator<<(ostream&, const Quantity&);
	friend istream& operator>>(istream&, Quantity&);

private:
	int itemQuantity;

public:
	Quantity();
	Quantity& setQuantity(int);
	int getQuantity()const;

};

#endif
