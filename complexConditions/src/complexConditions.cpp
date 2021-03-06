//============================================================================
// Name        : complexConditions.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*
 * == equality test operator
 * != not equals
 * < less than
 * > greater than
 *  <= less or equal to
 *  >= greater than or equal to
 */
int main() {
	int value1 = 7;
	int value2 = 4;

	if(value1 >= 7) {
		cout << "Condition 1: true" << endl;
	} else {
		cout << "Condition 1: false" << endl;
	}
	if(value1 >= 7 || value2 < 4) {
		cout << "Condition 1: true" << endl;
	} else {
		cout << "Condition 1: false" << endl;
	}
	return 0;
}
