/*
 * Animals.h
 *
 *  Created on: Aug 4, 2016
 *      Author: ericso0303
 */

#ifndef ANIMALS_H_
#define ANIMALS_H_

#include <iostream>
using namespace std;

namespace evs {

const string CATNAME = "Tiddles";

class Cat {
public:
	Cat();
	virtual ~Cat();
	void speak();
};

} /* namespace evs */

#endif /* ANIMALS_H_ */
