//============================================================================
// Name        : variables.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string value = "Hello ";
	string text2 = "Fred";

	string text3 = value + text2;

	//string is a class
	cout << value << text2 << endl;

	cout << text3 << "Stop tickling my Pikachu" << endl;
	//int is a primitive type
	int numberCats = 5;
	int numberDogs = 10;
	int numberAnimals = numberCats + numberDogs;

	cout << "Number of cats: " << numberCats << endl;

	cout << "Number of dogs: " << numberDogs << endl;

	cout << "Number of animals : " << numberAnimals << endl;

	cout << "New dog acquired!" << endl;



	numberDogs = numberDogs + 1;

	numberAnimals = numberCats + numberDogs;

	cout << "New number of dogs: " << numberDogs << endl;

	cout << "New total: " << numberAnimals << endl;

	return 0;
}
