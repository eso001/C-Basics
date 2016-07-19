//============================================================================
// Name        : if.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string password = "hello";

	cout << "Enter your password >" << flush;

	string input;
	cin >> input;

	if (input == password) {
		cout << "password accepted" << endl;
	}

	if (input != password) {
		cout << "password denied" << endl;
	}
	cout << "'" << input << "'" << endl;

	cout << "1.\t Add new Record." << endl;
	cout << "2. \t Delete Record." << endl;
	cout << "3. \t View Record." << endl;
	cout << "4. \t Search Record" << endl;
	cout << "5. \t Quit." << endl;

	cout << "Enter your selection > " << flush;

	int val;
	cin >> val;

	if(val == 1) {
		cout << "Adding new record..." << endl;
	}
	else if(val == 2) {
		cout << "Deleting Record..." << endl;
	}
	else if(val == 3) {
		cout << "Viewing..." << endl;
	}
	else if(val == 4) {
		cout << "Searching..." << endl;
	}
	else if(val == 5) {
		cout << "Quitting" << endl;
	} else {
		cout << "Invalid option." << endl;
	}
	return 0;
}
