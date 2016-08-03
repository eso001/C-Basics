//============================================================================
// Name        : References.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void changer(string &fruit){
	fruit = fruit + " banana";
}
void changeSomething(double &value){
	value = 123.4;

}
int main() {

	int value1 = 8;

	int &value2 = value1;
	value1 = 10;

	cout << "value1: " << value1 << endl;
	cout << "value2: " << value2 << endl;

	double value = 4.321;
	changeSomething(value);

	string vegetable = "tomato";
	cout << vegetable << endl;

	changer(vegetable);
	cout << vegetable << endl;

	return 0;
}
