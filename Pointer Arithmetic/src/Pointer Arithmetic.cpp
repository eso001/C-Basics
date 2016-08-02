//============================================================================
// Name        : Pointer.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int practice(){
	const int arrayLength = 10;

	string mainRay[] = {"monkey", "tiger", "three", "frog", "giraffe", "lion", "seven", "shark", "dolphin", "ten"};

	string *pfirstAnimal = mainRay;
	string *panimalTransformer = &mainRay[1];

	cout << *pfirstAnimal << *panimalTransformer << endl;

	pfirstAnimal++;
	panimalTransformer++;

	cout << "TRANSFORMING" << endl;
	cout << *pfirstAnimal << ": " << *panimalTransformer << endl;

	cout << "Iterating" << endl;
	pfirstAnimal = &mainRay[0];
	for (int i = 0; i < sizeof(mainRay)/sizeof(string); i++, pfirstAnimal++ ){
		cout << *pfirstAnimal << endl;
	}
	return 0;
}


int main() {
	practice();
	const int NSTRINGS = 5;
	string texts[NSTRINGS] = {"one", "two", "three", "four", "five"};
	//points at first element of array;
	string *pTexts = texts;
	cout << *pTexts << endl;
	pTexts += 3;

	cout << *pTexts << endl;

	pTexts -= 2;

	cout << *pTexts << endl;

	string *pEnd = &texts[NSTRINGS];
	pTexts = &texts[0];

	while(pTexts != pEnd) {
		cout << *pTexts << endl;
		pTexts++;
	}
	//set pTexts back to start
	pTexts = &texts[0];

	long elements = (long)(pEnd - pTexts);

	cout << elements << pEnd << endl;

	pTexts = &texts[0];

	pTexts += NSTRINGS/2;

	cout << *pTexts << endl;

	return 0;
}
