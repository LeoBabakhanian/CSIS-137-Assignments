//Leo Babakhanian
//CS/IS 137- Fall Class
//Exam 2

#include <iostream>
#include "Cat.h"
#include "Dog.h"
#include "Fish.h"
using namespace std;

int main()
{
	Cat Cat("Tasha", "Gray", 25.0, 10.0, 80.0);
	Dog Dog("Fido", "Black", 25.0, 10.0, 80.0);
	Fish Fish("Lucky", "Yellow", 25.0, "Fresh");

	VirtualPet *ptr1, *ptr2, *ptr3;
	VirtualPet *vPetArray[10];
	ptr1 = &Cat;
	ptr2 = &Dog;
	ptr3 = &Fish;

	for (int i = 0; i < 10; i++)
	{
		vPetArray[i] = nullptr;
	}
	
	vPetArray[0] = ptr1;
	vPetArray[1] = ptr2;
	vPetArray[2] = ptr3;

	for (int i = 0; i < 10; i++)
	{
		if (vPetArray[i] != nullptr)
		{
			vPetArray[i]->changeMood();
			vPetArray[i]->printInfo();
		}
	}

	system("PAUSE");
	return 0;
}