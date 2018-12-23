//LEO BABAKHANIAN, GEORGE KHDRYAN
//CS/IS 137- FALL CLASS
//HOMEWORK #4

#include <iostream>
#include <iomanip>
using namespace std;

#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(const string& senderName, const string& senderAddress, const string& senderCity,
	const string& senderState, const string& senderZip, const string& receiverName, const string& receiverAddress, const string& receiverCity,
	const string& receiverState, const string& receiverZip, double weight, double costPerOunce, double twoDayFee) :
	Package(senderName, senderAddress, senderCity, senderState, senderZip, receiverName, receiverAddress, receiverCity, receiverState, receiverZip, weight, costPerOunce)
{
	setTwoDayFee(twoDayFee);
}

void TwoDayPackage::setTwoDayFee(double t)
{
	twoDayFee = (t <= 0.0) ? 0.0 : t;
}

double TwoDayPackage::getTwoDayFee()const
{
	return twoDayFee;
}

double TwoDayPackage::calculateCost()const
{
	return getTwoDayFee() + (Package::calculateCost());
}

void TwoDayPackage::print()const
{
	cout << "Shipment Weight and Cost: \n\n" << "Weight: " << Package::getWeight() << " ounces.\n"
		<< "Shipping Cost: $" << setprecision(2) << fixed << calculateCost() << endl;
}
