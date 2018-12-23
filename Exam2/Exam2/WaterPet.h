//Leo Babakhanian
//CS/IS 137- Fall Class
//Exam 2

#ifndef WATERPET_H
#define WATERPET_H
#include <string> 
using namespace std;

#include "VirtualPet.h"

class WaterPet : public VirtualPet
{
private:
	string waterType;

public:
	WaterPet(const string&, const string&, double, string);
	void setWaterType(const string&);
	string getWaterType()const;
	virtual void printInfo()const;
};

#endif