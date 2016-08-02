//============================================================================
// Name        : Pointers.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string texts[] = {"one", "two", "three"};


	cout << sizeof(texts)/sizeof(string) << endl;

	string *pTexts = texts;

	for(int i = 0; i < sizeof(texts)/sizeof(string); i++){
		cout << pTexts[i] << " " << flush;
	}
	cout << endl;
	for(int i = 0; i < sizeof(texts)/sizeof(string); i++, pTexts++){
			cout << *pTexts << " " << flush;

	}
	//typing "texts" is identical to typing "&texts[0]"
	//typing texts refers to the location of the first element of the array

	cout << endl << texts << endl;

	string *pElement = texts;
	string *pEnd = &texts[sizeof(texts)/sizeof(string) - 1];

	while(true){
		cout << *pElement << " " << pElement << " " << flush;

		if(pElement == pEnd){
			break;
		}

		pElement++;
	}

	return 0;
}
