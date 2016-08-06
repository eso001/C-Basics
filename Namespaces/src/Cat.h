/*
 * Cat.h
 *
 *  Created on: Aug 4, 2016
 *      Author: ericso0303
 */

#ifndef CAT_H_
#define CAT_H_

#include <iostream>
using namespace std;

namespace cats {

const string CATNAME = "Freddy";

class Cat {
public:
	Cat();
	virtual ~Cat();
	void speak();
};

}
#endif /* CAT_H_ */
