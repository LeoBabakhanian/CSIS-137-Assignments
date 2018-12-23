//LEO BABAKHANIAN, GEORGE KHDRYAN
//CS/IS 137- FALL CLASS
//HOMEWORK #4

#include <iostream>
#include <string>
#include <iomanip>
#include "Package.h"
using namespace std;

Package::Package(const string& senderName, const string& senderAddress, const string& senderCity,
	const string& senderState, const string& senderZip, const string& receiverName, const string& receiverAddress, const string& receiverCity,
	const string& receiverState, const string& receiverZip, double weight, double costPerOunce) : senderName(senderName), senderAddress(senderAddress), senderCity(senderCity), senderState(senderState),
	senderZip(senderZip), receiverName(receiverName), receiverAddress(receiverAddress), receiverCity(receiverCity), receiverState(receiverState), receiverZip(receiverZip)
{
	setWeight(weight);
	setCostPerOunce(costPerOunce);
}

void Package::setSenderName(const string& sn)
{
	senderName = sn;
}

void Package::setReceiverName(const string& rn)
{
	receiverName = rn;
}

string Package::getSenderName()const
{
	return senderName;
}

string Package::getReceiverName()const
{
	return receiverName;
}


void Package::setSenderAddress(const string& sa)
{
	senderAddress = sa;
}

void Package::setReceiverAddress(const string& ra)
{
	receiverAddress = ra;
}

string Package::getSenderAddress()const
{
	return senderAddress;
}

string Package::getReceiverAddress()const
{
	return receiverAddress;
}


void Package::setSenderCity(const string& sc)
{
	senderCity = sc;
}

void Package::setReceiverCity(const string& rc)
{
	receiverCity = rc;
}

string Package::getSenderCity()const
{
	return senderCity;
}

string Package::getReceiverCity()const
{
	return receiverCity;
}


void Package::setSenderState(const string& ss)
{
	senderState = ss;
}

void Package::setReceiverState(const string& rs)
{
	receiverState = rs;
}

string Package::getSenderState()const
{
	return senderState;
}

string Package::getReceiverState()const
{
	return receiverState;
}


void Package::setSenderZip(const string& sz)
{
	senderZip = sz;
}

void Package::setReceiverZip(const string& rz)
{
	receiverZip = rz;
}

string Package::getSenderZip()const
{
	return senderZip;
}

string Package::getReceiverZip()const
{
	return receiverZip;
}

void Package::setWeight(double w)
{
	weight = (w <= 0.0) ? 0.0 : w;
}

double Package::getWeight()const
{
	return weight;
}

void Package::setCostPerOunce(double c)
{
	costPerOunce = (c <= 0.0) ? 0.0 : c;
}

double Package::getCostPerOunce()const
{
	return costPerOunce;
}

double Package::calculateCost()const
{
	return getWeight() * getCostPerOunce();
}

void Package::print()const
{
	cout << "Shipment Weight and Cost: \n\n" << "Weight: " << setprecision(2) << fixed << getWeight() << " ounces.\n"
		<< "Shipping Cost: $" << calculateCost() << endl;
}
