//============================================================================
// Name        : Copy.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal {
private:
	string name;
public:
	Animal(){cout << "Animal created" << endl;};
	Animal(const Animal& other){ other.speak(); name = other.name; cout << "animal created by copying" << endl;};
	void setName(string name) { this->name = name; };
	void speak() const { cout << "My name is: " << name << endl;}
};

int main() {

	Animal animal1;
	animal1.setName("Freddy");

	//this line implicitly uses a copy constructor
	//copy constructor will copy over all properties from one object to another

	Animal animal2 = animal1;

	animal2.setName("Bob");
	animal1.setName("Jenniffferr");
	animal1.speak();
	animal2.speak();
	Animal animal3(animal1);
	animal3.setName("derp");
	animal3.speak();
	return 0;
}
