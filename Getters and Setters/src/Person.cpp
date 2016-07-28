/*
 * Person.cpp
 *
 *  Created on: Jul 27, 2016
 *      Author: ericso0303
 */

#include "Person.h"

Person::Person(){
	name = "George";
}

string Person::toString(){

	return "Person's name is: " + name;
}

void Person::setName(string newName){
	name = newName;
}
string Person::getName(){
	return name;
}
