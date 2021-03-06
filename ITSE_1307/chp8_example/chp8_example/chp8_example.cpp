//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

void demoSingleArray() {
	//Function showing single array.
	srand(time(NULL));
	const int INTSIZE = 10;
	int aryNumbers[INTSIZE];

	//Enter values into the array
	for (int intIndex = 0; intIndex < INTSIZE; intIndex++) {
		//aryNumbers[intIndex] = (rand() % 10) + 1;
		cout << "Enter a number: ";
		cin >> aryNumbers[intIndex];
	}
	//Go backwards through the array
	for (int intIndex = INTSIZE - 1; intIndex >= 0; intIndex--) {
		cout << aryNumbers[intIndex] << endl;
	}
}

void demoDoubleArray() {
	//Function showing what to do if you need two different type of data paired together
	const int INTSIZE = 5;
	double adblPrice[INTSIZE];
	string astrItems[INTSIZE];
	
	//Get input from different array types
	for (int intIndex = 0; intIndex < INTSIZE; intIndex++) {
		cout << "Enter an item name: ";
		cin >> astrItems[intIndex];
		cout << "Enter the price of " << astrItems[intIndex] << ": ";
		cin >> adblPrice[intIndex];
	}
	//Print out the items 
	for (int intIndex = 0; intIndex < INTSIZE; intIndex++) {
		cout << astrItems[intIndex] << "\t$" << adblPrice[intIndex] << endl;
	}
	
}

int main()
{
	demoSingleArray();
	demoDoubleArray();
	return 0;
}

