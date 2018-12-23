//Leo Babakhanian, George Khdryan
//CS/IS 137- Fall Class
//Homework 3

/*
FeetInches
--------------------------------
ostream&: operator<<(output:ostream&, const f:FeetInches&)
istream&: operator>>(input:istream&, f:FeetInches&)
--------------------------------
-inches: int
-feet: int
-simplifyUnits(): void
--------------------------------
+FeetInches(f:int, i:int)
+void: displayDecimal() const
+FeetInches&: setInches(i:int)
+FeetInches&: setFeet(f:int)
+int: getInches() const
+int: getFeet() const
+FeetInches& operator-(f:FeetInches& const)
+FeetInches& operator+(f:FeetInches& const)
+bool: operator>(f:FeetInches& const)
+bool: operator<(f:FeetInches& const)
+bool: operator>=(f:FeetInches& const)
+bool: operator<=(f:FeetInches& const)
+bool: operator==(f:FeetInches& const)
+bool: operator!=(f:FeetInches& const)
*/


#ifndef FEETINCHES_H
#define FEETINCHES_H

class FeetInches
{
	friend ostream& operator<<(ostream&, const FeetInches&);
	friend istream& operator>>(istream&, FeetInches&);
private:
	int inches;
	int feet;
	void simplifyUnits();
public:
	FeetInches(int = 0, int = 0);
	void displayDecimal() const;
	FeetInches& setInches(int);
	FeetInches& setFeet(int);
	int getInches() const;
	int getFeet() const;
	const FeetInches& operator-(const FeetInches&);
	const FeetInches& operator+(const FeetInches&);
	bool operator>(const FeetInches&);
	bool operator<(const FeetInches&);
	bool operator>=(const FeetInches&);
	bool operator<=(const FeetInches&);
	bool operator==(const FeetInches&);
	bool operator!=(const FeetInches&);
};

#endif