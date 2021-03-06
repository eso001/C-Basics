//============================================================================
// Name        : multidimensionalArrays.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string animals[2][3] = {
			{"monkey", "fox", "dog"},
			{"panda", "kangaroo", "koala"}
	};
	for ( int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++){
			cout << animals[i][j] << " " <<flush;
		}

		cout << endl;
	}
	int tenMatrix[10][10];

	for(int i = 0; i < sizeof(tenMatrix)/sizeof(tenMatrix[0]); i++){
		for(int j = 0; j < sizeof(tenMatrix[0])/sizeof(int); j++){
			tenMatrix[i][j] = (i+1)*(j+1);
		}
	}

	for ( int i = 0; i < 10; i++) {
			for(int j = 0; j < 10; j++){
				cout << tenMatrix[i][j] << " " <<flush;
			}

			cout << endl;
		}
	return 0;
}
