//============================================================================
// Name        : input.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <limits>
using namespace std;

int main() {

	int value = 5363;

	cout << value << endl;

	cout << "Max value: " << INT_MAX << endl;
	cout << "Min value: " << INT_MIN << endl;

	short int lValue = 958;
	cout << "short number: " << lValue << endl;

	cout << "size of int: " << sizeof(int) << endl;

	cout << "size of short int: " << sizeof(short int) << endl;

	cout << "size of long int: " << sizeof(long int) << endl;

	cout << "Enter your birthday: " << endl;


	//does not leave a bit for whether number is positive or negative

	unsigned int uValue = 12095;

	string birthday;

	cin >> birthday;

	cout << "your birthday is: " << birthday << endl;
	return 0;
}
