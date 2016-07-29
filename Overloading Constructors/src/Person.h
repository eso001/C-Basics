/*
 * Person.h
 *
 *  Created on: Jul 28, 2016
 *      Author: ericso0303
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age;
public:
	//the compiler will pick which constructor based on how many parameters you use
	//when you instansiate an object
	Person();
	Person(string newName) { name = newName; age = 0; };
	Person(string newName, int age);
	string toString();
};

#endif /* PERSON_H_ */
