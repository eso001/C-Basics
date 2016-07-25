//============================================================================
// Name        : DataMembers.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Dog.h"
using namespace std;

int main() {

	Dog dog;
	dog.makeHappy();
	dog.speak();

	Dog dog2;
	dog.makeSad();
	dog2.speak();

	return 0;
}
