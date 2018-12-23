//Leo Babakhanian
//CS/IS 137- Fall Class
//Exam 2

#ifndef FISH_H
#define FISH_H

#include "WaterPet.h"
using namespace std;

class Fish : public WaterPet
{
private:


protected:
	virtual void setType();

public:
	Fish(const string&, const string&, double, const string&);
	//string getType()const;
	virtual void action()const;
	virtual void printInfo()const;

};

#endif