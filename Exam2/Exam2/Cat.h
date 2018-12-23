//Leo Babakhanian
//CS/IS 137- Fall Class
//Exam 2

#ifndef CAT_H
#define CAT_H

#include <string> 
using namespace std;

#include "DomesticLandPet.h"

class Cat : public DomesticLandPet
{
private:


protected:
	virtual void setType();

public:
	Cat(const string&, const string&, double = 25.0, double = 10.0, double = 80.0);
	//string getType()const;
	virtual void action()const;
	virtual void printInfo()const;
};

#endif