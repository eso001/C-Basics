//============================================================================
// Name        : FloatingPoint.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	//float numbers only have precision up to 6 decimal points

	float fVal = 76.123456789;

	cout << setprecision(20) << fVal << endl;

	double dVal = 76.123456789;

	cout << "size of float" << sizeof(float) << endl;

	long double ldVal = 76.12345678901234567890;
	cout << setprecision(20) << dVal << endl;

	cout << setprecision(25) << ldVal << endl;
	cout << "double: "<< sizeof(double) << endl;
	return 0;
}
