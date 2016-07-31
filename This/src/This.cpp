//============================================================================
// Name        : This.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "person.h"

using namespace std;

int main() {
	Person person;
	cout << person.toString() << endl; // prints !!!Hello World!!!

	Person Eric("Eric", 23);

	Person Joyce("Joyce", 20);
	cout << Eric.toString() << "; memory location: " << &Eric << endl;
	cout << Joyce.toString() << "; memory location: " << &Joyce << endl;
	return 0;
}
