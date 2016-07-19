//============================================================================
// Name        : while.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int i = 0;

	while(i < 1) {
		cout << "Hello i:" << i << endl;

		i++;

	}

	cout << "Program quitting." << endl;

	const string password = "hello";


	string input;
	do {
		cout << "Enter your password > " << flush;

			cin >> input;

			if(input != password) {
				cout << "Access Denied" << endl;
			}
	} while(input != password);

	cout << "password accepted" << endl;
	return 0;
}
