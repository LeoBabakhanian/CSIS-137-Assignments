//Leo Babakhanian
//CS/IS 137- Fall Class
//Final Project

#include <iostream>
#include <string>
using namespace std;

#include "Name.h"
#include "Quantity.h"
#include "Weight.h"
#include "Dimensions.h"
#include "Notes.h"
#include "Inventory.h"
#include "InventoryList.h"

bool validLogin(string, string);
void printInventoryTop();

int main()
{
	int attempts = 0;
	//int maxInput;
	//int MAX = 100;
	bool test;
	char menuChoice;
	string username;
	string password;

	cout << "Welcome to the Medical Inventory Program." << endl << 
		"Only authorized users can access the program. You will now be asked for your login information." << endl << endl;

	/*Login System*/
	do
	{
		cout << "==========================================" << endl;
		cout << "\t INVENTORY SYSTEM LOGIN \t" << endl;
		cout << "==========================================" << endl;
		cout << "Please enter a username: " << endl;
		getline(cin, username);
		cout << "Please enter a password: " << endl;
		getline(cin, password);

		bool isValid = validLogin(username, password);

		try
		{
			if (isValid)
			{
				cout << endl << "Login successful." << endl;

				test = false;
				//Loop stops if false
			}
			else
				throw isValid;
		}
		/*If user enters invalid login details, the invalid login prompt will begin*/
		catch (bool valid)
		{
			cout << "Invalid login attempt. Please try again." << endl << endl;

			int remainingAttempts = 5;
			remainingAttempts = remainingAttempts - attempts;

			//Starts the counter for the user to see how many remaining attempts they have
			if (remainingAttempts < 5)
			{
				cout << "You have " << remainingAttempts << " remaining attempts." << endl;

				if (remainingAttempts == 0)
				{
					cout << "The program will now exit." << endl;

					//Pause so user can see what happened
					system("PAUSE");
					return 0;
				}
			}

			attempts++; 
			//add to count
			test = true; 
			//Keep loop going if true
		}

	} while (test); //Loop stops if false

	//cout << endl << "Please enter the maximum amount of items you are adding to the inventory list." << endl;
	//cin >> maxInput;

	InventoryList il;

	/*Menu prompt*/
	do
	{
		cout << endl << "=================================" << endl;
		cout << "\t INVENTORY MENU \t" << endl;
		cout << "=================================" << endl;
		cout << "1) Add item to inventory" << endl;
		cout << "2) Remove item from inventory" << endl;
		cout << "3) View inventory list" << endl;
		cout << "q) Quit" << endl;
		cin >> menuChoice;

		try
		{
			Inventory inv1;

			if (menuChoice == '1')
			{
				Name name1;
				Quantity q1;
				Weight w1;
				Dimensions d1;
				Notes n1;

				string input;
				int quantity;
				double weight;

				//All tests for valid data types
				//Will be used in try catch blocks
				bool validQuantity = true; //set all to true for while loops
				bool validWeight = true;
				//bool validDimensions = true;

				cout << endl << "===========================================" << endl;
				cout << "\t MEDICAL INVENTORTY SYSTEM \t" << endl;
				cout << "===========================================" << endl;
				cout << "Please enter the name of the item." << endl;
				cin.ignore();
				getline(cin, input);
				name1.setName(input);
				//cin >> q1;

				/*If user enters anything other than a number, the block will 
				throw the input and let you know that the input is invalid*/
				while (validQuantity)
				{
					try
					{
						cout << "Please enter the quantity of the item." << endl;
						cin >> quantity;

						//If user input fails, throw quantity
						if (cin.fail())
						{
							cin.clear();
							cin.ignore();
							//Clear and ignore input so infinite loop doesn't occur
							throw quantity;
						}
						else
						{
							validQuantity = false;
							q1.setQuantity(quantity);
						}
					}
					catch (int q)
					{
						cout << endl << "Invalid entry. Please enter an integer." << endl;
					}
				}
				/*If user enters anything other than an integer or double the input
				will be thrown in this block and show an invalid message*/
				while (validWeight)
				{
					try
					{
						cout << "Please enter the weight of the item." << endl;
						cin >> weight;
						
						//If user input fails, throw weight
						if (cin.fail())
						{
							cin.clear();
							cin.ignore();
							//Clear and ignore input so infinite loop doesn't occur
							throw weight;
						}
						else
						{
							validWeight = false;
							w1.setWeight(weight);
						}
					}
					catch (double w)
					{
						cout << endl << "Invalid entry. Please enter an integer or double." << endl;
					}
				}

				//cin >> w1;
				cout << "Please enter the dimensions of the item one by one." << endl;
				//cin >> d1;
				cin.ignore();
				cin >> d1;		
				//Didn't know how to do exception handling here, seemed too complicated to get it to work
				cout << "Enter notes about the item (or leave blank)." << endl;
				//cin >> n1;
				cin.ignore();
				getline(cin, input);
				n1.setNotes(input);

				//set values to inventory
				//name1.setName(name);
				inv1.setName(name1);
				inv1.setQuantity(q1);
				//w1.setWeight(weight);
				inv1.setWeight(w1);
				inv1.setDimensions(d1);
				inv1.setNotes(n1);
				//add inventory to inventorylist
				il.addItem(inv1);

				cout << endl << endl << "Item \"" << name1.getName() << "\" added to inventory." << endl;
			}
			else if (menuChoice == '2')
			{	
				//While loop will continue while validDelete is true
				bool validDelete = true;

				while (validDelete)
				{
					try
					{
						int num;

						cout << "Please enter the item number that you would like to remove." << endl;
						cin >> num;

						//If user input fails, throw num
						if (cin.fail())
						{
							cin.clear();
							cin.ignore();
							//Clear and ignore input so infinite loop doesn't occur
							throw num;
						}
						else
						{
							validDelete = false;
							il.removeItem(num);
						}
					}
					catch (int number)
					{
						cout << endl << "Invalid entry. Please enter an integer only." << endl;
					}
				}
			}
			else if (menuChoice == '3')
			{
				//InventoryList inv1;
				printInventoryTop();
				cout << il;
			}
			else if (menuChoice == 'q')
				return 0;
			else
				throw menuChoice;
		}
		/*If the user enters an invalid menu option, they will
		be told that it is invalid and program will continue*/
		catch (char menu)
		{
			cout << endl << "Invalid selection. Please try again." << endl;
		}
		
	} while (menuChoice != 'q');

	system("PAUSE");
	return 0;
}

/*Login check using bool*/
bool validLogin(string u, string p)
{
	//List of default employee logins
	string defaultU[3] = { "Employee1", "Employee2", "Employee3" };
	string defaultP[3] = { "emp1*", "Emp222", "Emp33**" };

	//admin login
	string adminU[1] = { "admin" };
	string adminP[1] = { "password" };

	//Check for validity of username and password inputs
	if (u == defaultU[0] && p == defaultP[0])
		return true;
	else if (u == defaultU[1] && p == defaultP[1])
		return true;
	else if (u == defaultU[2] && p == defaultP[2])
		return true;
	else if (u == adminU[0] && p == adminP[0])
		return true;
	else
		return false;
}

/*Print top part of inventory list print out*/
void printInventoryTop()
{
	cout << "============================================================================" << endl;
	cout << " \t\t\t MEDICAL INVENTORY LIST \t\t\t" << endl;
	cout << "============================================================================" << endl;
	cout << "ITEM#: \t   NAME: \t QUANTITY: \t WEIGHT: \t DIMENSIONS: " << endl;
	cout << "============================================================================" << endl;
}