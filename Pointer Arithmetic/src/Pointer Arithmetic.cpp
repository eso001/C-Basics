//============================================================================
// Name        : Pointer.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	const int NSTRINGS = 5;
	string texts[NSTRINGS] = {"one", "two", "three", "four", "five"};
	//points at first element of array;
	string *pTexts = texts;
	cout << *pTexts << endl;

	return 0;
}
