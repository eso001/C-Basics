//============================================================================
// Name        : Arrays.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void show1(const int nElements, string texts[]){
	for(int i=0; i < nElements; i++){

		cout << texts[i] << endl;
	}
}
void show2(const int nElements, string *texts){
	for(int i=0; i < nElements; i++){

		cout << texts[i] << endl;
	}
}
void show3(string (&texts)[3]){
	for(int i=0; i < sizeof(texts)/sizeof(string); i++){

		cout << texts[i] << endl;
	}
}


//you can declare a variable outside and itll be available inside any function in your file


//to return an array you should return the pointer to the array
string *getarray() {

	//you cant return pointers to local variables
//	string texts[] = {"one", "two", "three"};
}

char *getMemory(){
	char *pMem = new char[100];

	return pMem;
}

void freeMemory(char *pMem){
	delete [] pMem;
}
int main() {

	char *pMemory = getMemory();

	freeMemory(pMemory);

	string texts[] = {"apple", "orange", "banana"};

	cout << sizeof(texts) << endl;

	show3(texts);
	return 0;
}
