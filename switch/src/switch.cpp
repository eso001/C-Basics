//============================================================================
// Name        : switch.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char value = 5;
	cout << "Enter a value:" << flush;
	cin >> value;

	switch (value) {
	case 4:
		cout << "value is : " << value << endl;
		break;
	case 5:
		cout << "value is : " << value << endl;
		break;
	case 6:
		cout << "value is : " << value << endl;
		break;
	default:
		cout << "unrecognized value" << endl;
	}
	int pokemon;
	do {
		cout << "Enter a pokemon and I'll tell you the type: " << flush;
		cin >> pokemon;

		switch (pokemon) {
		case 1:
			cout << pokemon << "'s type is flying " << endl;
			break;
		case 2:
			cout << pokemon << "'s type is water and psychic " << endl;
			break;
		default:
			cout << "you have not entered a pokemon" << endl;
		}

	} while (true);
	return 0;
}
