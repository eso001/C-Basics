/*
 * Cat.cpp
 *
 *  Created on: Jul 24, 2016
 *      Author: ericso0303
 */

#include <iostream>
#include "Cat.h"

using namespace std;
void Cat::speak(){

	if(happy) {
		cout << "Meow!" << endl;
	} else {
		cout << "RAWR" << endl;
	}
}

void Cat::makeHappy(){
	happy = true;
}

void Cat::makeSad(){
	happy = false;
}
