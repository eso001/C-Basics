/*
 * person.cpp
 *
 *  Created on: Jul 29, 2016
 *      Author: ericso0303
 */

#include "person.h"
#include <sstream>

//everything after the colon is the constructor initialization list!

Person::Person(string name, int age): name(name), age(age){


	//how to use "this"

//	this->name = name;
//	this->age = age;
//	//this refers the bit of memory where the object is in.
//	//when we instantiate a person object, this will point to where it is being stored in memory
//	//we find the location of each object in memory
//	cout << this << endl;
}
string Person::toString(){
	stringstream ss;
	ss << "Name: " << name << "; age: " << age;
	return ss.str();
}
