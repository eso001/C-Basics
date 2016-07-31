/*
 * person.h
 *
 *  Created on: Jul 29, 2016
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
	Person(): name("undefined"), age(0) {};
	Person(string name, int age);
	string toString();
};


#endif /* PERSON_H_ */
