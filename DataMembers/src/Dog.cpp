/*
 * Dog.cpp
 *
 *  Created on: Jul 19, 2016
 *      Author: ericso0303
 */
#include <iostream>
#include "Dog.h"

using namespace std;

void Dog::speak(){

	if(happy){
	cout << "bark" << endl;
	} else {
		cout << "RAWWWRRR" << endl;
	}
}
void Dog::makeHappy(){
	happy = true;
}
void Dog::makeSad(){
	happy=false;
}
