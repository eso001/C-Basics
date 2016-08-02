//============================================================================
// Name        : Pointers.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void stringChanger(string *pstring){
	cout << "location of string: " << pstring << "value of string: " << *pstring << endl;
	cout << "modifying string..." << endl;

	*pstring = *pstring + " oh yes bby";
}
//type is pointer to a double
void manipulate(double *pvalue){
	cout << "2. Value of int in manipulate" << *pvalue << endl;
	//this dereferrences by putting astrice
	//were using address and changing the value at that memory address

	*pvalue = 10.0;
	cout << "3. Value of int in manipulate" << pvalue << endl;
}
int main() {


	string cutie = "monkey";

	stringChanger(&cutie);
	cout << "cutie after change" << cutie << endl;


	int nValue = 8;

	//read as int pointer
	//pointer to an int equals to addres of nValue
	//this stores the address of that integer
	int* pnValue = &nValue;
	nValue = 9;

	cout << "Int value: " << nValue << endl;
	//dereference pointer add a "*"
	cout << "Pointer to int address: " << pnValue << *pnValue <<  endl;

	cout << "=====" << endl;
	double dValue = 123.4;

	cout << "1. dValue: " << dValue << endl;
	//passing in address of value
	manipulate(&dValue);
	cout << "4. dValue: " << dValue << endl;


	return 0;
}
