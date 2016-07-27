/*
 * Cat.cpp
 *
 *  Created on: Jul 27, 2016
 *      Author: ericso0303
 */
#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat(){
	cout << "Cat created." << endl;

	happy = true;
}
Cat::~Cat(){
	cout << "Cat destroyed" << endl;
}
void Cat::speak(){
	if(happy){
		cout << "Meow" << endl;
	} else {
		cout << "RAWR" << endl;
	}
}
