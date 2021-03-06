//============================================================================
// Name        : arrays.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Array of integers" << endl;

	cout <<"==========" << endl;
	int values[3];

	values[0] = 88;
	values[1] = 23;
	values[2] = 29;
	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;
	for (int i = 0; i < 3; i++){
		cout << values[i] << endl;
	}
	cout << endl << "Array of doubles" << endl;
	cout << "============" << endl;
	double numbers[4] = {4.5, 2.3, 7.2, 8.1};

	for(int j = 0; j < 4; j++){
		cout << "Element at index " << j << ": " << numbers[j] << endl;
		numbers[j] = 69;
	}

	cout << endl << "Initializing with zero values" << endl;
	cout << "=============" << endl;

	int numberArray[8] = {};
	for(int j = 0; j < 8; j++){
		cout << "Element at index " << j << ": " << numberArray[j] << endl;

	}

	cout << endl << "Initializing Array of strings" << endl;
		cout << "=============" << endl;

	string fruits[4] = {"apple", "banana", "orange", "pear"};

	for (int i = 0; i < 4; i++){
		cout << fruits[i] << endl;
	}

	int matrix[12];
	for (int i = 0; i < 12; i++){
		matrix[i] = i + 1;
	}
	for (int i = 0; i < 12; i++){
		cout << "multiples of " << i + 1 << ": " << endl;

		for(int j = 0; j < 12; j++){
			cout << matrix[i]*(j + 1) << " " << flush;
		}
		cout << endl;
	}
	return 0;
}
