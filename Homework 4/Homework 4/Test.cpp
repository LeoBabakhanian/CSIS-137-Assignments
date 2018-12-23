//LEO BABAKHANIAN, GEORGE KHDRYAN
//CS/IS 137- FALL CLASS
//MIDTERM PROJECT

#include <iostream>
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;

int main()
{
	Package regular("Bob Smith", "800 Main St.", "Los Angeles", "CA", "90027", "Carl Reed", "1200 Second Ave.", "Glendale", "CA", "91201", 13.5, 6.0);
	TwoDayPackage twoDay("Bob Smith", "800 Main St.", "Los Angeles", "CA", "90027", "Carl Reed", "1200 Second Ave.", "Glendale", "CA", "91201", 13.5, 6.0, 23.25);
	OvernightPackage overnight("Bob Smith", "800 Main St.", "Los Angeles", "CA", "90027", "Carl Reed", "1200 Second Ave.", "Glendale", "CA", "91201", 13.5, 6.0, 18.0);

	cout << "Package from: \n" << endl;
	cout << regular.getSenderName() << "\n" << regular.getSenderAddress() << "\n" << regular.getSenderCity()
		<< ", " << regular.getSenderState() << "\n" << regular.getSenderZip() << "\n" << endl;

	cout << "Package to: \n" << endl;
	cout << regular.getReceiverName() << "\n" << regular.getReceiverAddress() << "\n" << regular.getReceiverCity()
		<< ", " << regular.getReceiverState() << "\n" << regular.getReceiverZip() << "\n\n" << endl;

	cout << "Quote With Regular Shipping: \n" << endl;
	regular.print();
	cout << "\n\n\nQuote With Two Day Shipping: \n" << endl;
	twoDay.print();
	cout << "\n\n\nQuote With Overnight Shipping: \n" << endl;
	overnight.print();

	system("PAUSE");
	return 0;
}

