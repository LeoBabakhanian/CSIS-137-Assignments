//Leo Babakhanian, George Khdryan
//CS/IS 137- Fall Class
//Homework 3

#include <iostream>
using namespace std;

#include "FeetInches.h"

int main()
{
	FeetInches f1, f2, f3;
	cout << "Please enter the first set of feet and inches. (Ex:FT'IN)" << endl;
	cin >> f1;
	cout << "Please enter the second set of feet and inches. (Ex:FT'IN)" << endl;
	cin >> f2;
	cout << "The first set you entered is " << f1 << "The second set you entered is " << f2 << endl;
	cout << "The first set in decimal notation is ";
	f1.displayDecimal();
	cout << "\nThe second set in decimal notation is ";
	f2.displayDecimal();
	f3 = f1 - f2;
	cout << "\nSet one subtracted by set two is " << f3 << endl;
	f3 = f1 + f2;
	cout << "Set one plus set two is " << f3 << endl;
	if (f1 == f2)
		cout << "Set one is equal to set two" << endl;
	if (f1 != f2)
		cout << "Set one is not equal to set two" << endl;
	if (f1 > f2)
		cout << "Set one is greater than set two." << endl;
	if (f1 < f2)
		cout << "Set one is less than set two." << endl;
	if (f1 >= f2)
		cout << "Set one is greater than or equal to set two." << endl;
	if (f1 <= f2)
		cout << "Set one is less than or equal to set two." << endl;

	system("PAUSE");
	return 0;
}