//============================================================================
// Name        : Const.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal {
private:
	string name;
public:
	void setName(string name) { this->name = name; };
	void speak() const { cout << "My name is: " << name << endl;}
};
int main() {

	const double PI = 3.141592;

	cout << PI << endl;

	Animal animal;

	animal.setName("Freddy");
	animal.speak();

	int value = 8;

	const int * const pValue = &value;

	cout << *&pValue << endl;

	int number = 11;
	pValue = &number;


	cout << *pValue << endl;


	return 0;
}
