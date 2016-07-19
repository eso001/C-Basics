//============================================================================
// Name        : comparingFloats.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	//you can not ask if one floating point number is equal to another
	float value1 = 1.1;
	if(value1 == 1.1) {
		cout << "equals" << endl;
	}
	else {
		cout << "not equal" << endl;
	}
	cout << setprecision(10) << value1 << endl;

	return 0;
}
