//============================================================================
// Name        : Inheritance.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal {
public:
	void speak(){ cout << "Grrr" << endl;}
};
class Cat: public Animal {
public:
	void jump(){cout << "Cat jumping" << endl; }
};

class Fruit {
private:
	string name;
	string type = "food";
private:
	void setFruit(string name){ this->name = name; }
};
int main() {

	Animal a;
	a.speak();

	Cat cat;
	cat.speak();
	cat.jump();
	return 0;
}
