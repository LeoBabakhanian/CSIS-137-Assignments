//LEO BABAKHANIAN, GEORGE KHDRYAN
//CS/IS 137- FALL CLASS
//MIDTERM PROJECT

#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>
using namespace std;

class Package
{
private:
	string senderName;
	string senderAddress;
	string senderCity;
	string senderState;
	string senderZip;

	string receiverName;
	string receiverAddress;
	string receiverCity;
	string receiverState;
	string receiverZip;

	double weight;
	double costPerOunce;

public:
	Package(const string&, const string&, const string&, const string&, const string&,
		const string&, const string&, const string&, const string&, const string&, double = 0.0, double = 0.0);

	void setSenderName(const string&);
	void setSenderAddress(const string&);
	void setSenderCity(const string&);
	void setSenderState(const string&);
	void setSenderZip(const string&);
	string getSenderName()const;
	string getSenderAddress()const;
	string getSenderCity()const;
	string getSenderState()const;
	string getSenderZip()const;

	void setReceiverName(const string&);
	void setReceiverAddress(const string&);
	void setReceiverCity(const string&);
	void setReceiverState(const string&);
	void setReceiverZip(const string&);
	string getReceiverName()const;
	string getReceiverAddress()const;
	string getReceiverCity()const;
	string getReceiverState()const;
	string getReceiverZip()const;

	void setWeight(double);
	double getWeight()const;
	void setCostPerOunce(double);
	double getCostPerOunce()const;
	double calculateCost()const;
	void print()const;
};

#endif
