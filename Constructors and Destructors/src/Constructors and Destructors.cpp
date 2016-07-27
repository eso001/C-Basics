//============================================================================
// Name        : Constructors.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"

using namespace std;

int main() {
	cout << "Starting program..." << endl;

	//curly brackets are associated with a statement
	//putting these curly brackets will let cat only exist within these curly brackets

	{
		Cat bob;
		bob.speak();
	}
	//we cannot call bob.speak outside of these curly brackets
	//the object will be destroyed after this curly bracket is hit
	cout << "Ending program..." << endl;
	return 0;
}
