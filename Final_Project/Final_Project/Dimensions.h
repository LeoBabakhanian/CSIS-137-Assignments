//Leo Babakhanian
//CS/IS 137- Fall Class
//Final Project

#ifndef DIMENSIONS_H
#define DIMENSIONS_H
using namespace std;

class Dimensions
{
	friend ostream& operator<<(ostream&, const Dimensions&);
	friend istream& operator>>(istream&, Dimensions&);

private:
	double width;
	double height;
	double length;

public:
	Dimensions();
	Dimensions& setDimensions(double, double, double);
	void setWidth(double);
	void setLength(double);
	void setHeight(double);
	double getWidth() const;
	double getHeight() const;
	double getLength() const;
};

#endif
