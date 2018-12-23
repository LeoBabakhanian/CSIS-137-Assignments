//Leo Babakhanian
//CS/IS 137- Fall Class
//Final Project

#ifndef WEIGHT_H
#define WEIGHT_H
using namespace std;

class Weight
{
	friend ostream& operator<<(ostream&, const Weight&);
	friend istream& operator>>(istream&, Weight&);

private:
	double itemWeight;

public:
	Weight();
	Weight& setWeight(double);
	double getWeight()const;

};

#endif
