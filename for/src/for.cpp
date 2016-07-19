//============================================================================
// Name        : for.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string pokemon;

	do {
		cout << "Type in pidgey to catch a pidgey: " << flush;
		cin >> pokemon;
		if(pokemon == "caterpie") {
			break;
		}
	} while (pokemon != "pidgey");

		cout << "You caught a: " << pokemon << endl;
	return 0;
}
