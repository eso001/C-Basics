/*
 * Person.h
 *
 *  Created on: Jul 27, 2016
 *      Author: ericso0303
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

using namespace std;

class Person {
private:
	string name;
public:
	Person();
	string toString();
	void setName(string newName);
	string getName();
};

#endif /* PERSON_H_ */
