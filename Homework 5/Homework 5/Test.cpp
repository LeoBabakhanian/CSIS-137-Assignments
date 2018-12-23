//LEO BABAKHANIAN, GEORGE KHDRYAN
//CS/IS 137- FALL CLASS
//HOMEWORK 5

#include <iostream>
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;



int main()
{
	const int SIZE = 4;
	Package regular("Bob Smith", "800 Main St." , "Los Angeles", "CA", "90027", "Carl Reed", "1200 Second Ave.", "Glendale", "California", "91201", 13.5 , 6.0);
	TwoDayPackage twoDay("Jena Bailey", "1693 Cherry Camp Rd.", "Chicago", "IL", "60631", "Jayne Newman", "4269 Hardesty St.", "Albany", "NY", "12207", 7.4, 6.0, 23.25);
	OvernightPackage overnight("Miles Cobb", "1055 Kooter Ln.", "Charlotte", "NC", "28202", "Tony Lawson", "4904 Fittro St.", "Franklin", "AR", "72536", 11.0, 6.0, 18.0);
	Package *ptr1, *ptr2, *ptr3 = 0;
	ptr1 = &regular;
	ptr2 = &twoDay;
	ptr3 = &overnight;

	Package *arr[SIZE] = {ptr1, ptr2, ptr3};
	double total = 0;
	for (int i = 0; i <= 2; i++)
	{
		
		total += arr[i]->calculateCost();
		cout << "---------------------------\nPackage from: \n" << endl;
		cout << arr[i]->getSenderName() << "\n" << arr[i]->getSenderAddress() << "\n" << arr[i]->getSenderCity()
			<< ", " << arr[i]->getSenderState() << "\n" << arr[i]->getSenderZip() << "\n" << endl;

		cout << "Package to: \n" << endl;
		cout << arr[i]->getReceiverName() << "\n" << arr[i]->getReceiverAddress() << "\n" << arr[i]->getReceiverCity()
			<< ", " << arr[i]->getReceiverState() << "\n" << arr[i]->getReceiverZip() << "\n\n" << endl;
		arr[i]->print();
		
	}
	cout << "---------------------------\nTotal Cost of All Packages: $" << total << "\n\n" << endl;;
	system("PAUSE");
	return 0;
	
}

