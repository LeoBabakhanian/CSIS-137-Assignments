//Leo Babakhanian
//CS/IS 137- Fall Class
//Exam 2

#ifndef DOG_H
#define DOG_H

#include "DomesticLandPet.h"
using namespace std;

class Dog : public DomesticLandPet
{
private:


protected:
	virtual void setType();

public:
	Dog(const string&, const string&, double = 25.0, double = 10.0, double = 80.0);
	//string getType()const;
	virtual void action()const;
	virtual void printInfo()const;

};

#endif