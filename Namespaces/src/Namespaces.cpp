//============================================================================
// Name        : Namespaces.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Cat.h"
#include "Animals.h"
using namespace std;

using namespace evs;

int main() {

	cout << CATNAME << endl;
	cout << cats::CATNAME << endl;

	Cat cat;
	cat.speak();

	evs::Cat cat2;
	cat2.speak();

	cats::Cat cat3;
	cat3.speak();

	return 0;
}
