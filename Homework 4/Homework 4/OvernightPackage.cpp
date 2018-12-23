//LEO BABAKHANIAN, GEORGE KHDRYAN
//CS/IS 137 - FALL CLASS
//HOMEWORK #4

#include <iostream>
#include <iomanip>
using namespace std;

#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(const string& senderName, const string& senderAddress, const string& senderCity,
	const string& senderState, const string& senderZip, const string& receiverName, const string& receiverAddress, const string& receiverCity,
	const string& receiverState, const string& receiverZip, double weight, double costPerOunce, double overnightFeePerOunce) :
	Package(senderName, senderAddress, senderCity, senderState, senderZip, receiverName, receiverAddress, receiverCity, receiverState, receiverZip, weight, costPerOunce)
{
	setOvernightFeePerOunce(overnightFeePerOunce);
}

void OvernightPackage::setOvernightFeePerOunce(double t)
{
	overnightFeePerOunce = (t <= 0.0) ? 0.0 : t;
}

double OvernightPackage::getOvernightFeePerOunce()const
{
	return overnightFeePerOunce;
}

double OvernightPackage::calculateCost()const
{
	return (getOvernightFeePerOunce() + Package::getCostPerOunce()) * Package::getWeight();
}

void OvernightPackage::print()const
{
	cout << "Shipment Weight and Cost: \n\n" << "Weight: " << Package::getWeight() << " ounces.\n"
		<< "Shipping Cost: $" << setprecision(2) << fixed << calculateCost() << "\n" << endl;
}
