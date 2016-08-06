//============================================================================
// Name        : Allocating.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Letter {
private:
	char name;
public:
	void setName(char name){
		this->name = name;
	}
	void output(){
		cout << "my letter is: " << this->name << endl;
	}
};
class Animal {
private:
	string name;
public:
	Animal(){
		cout << "Animal created." << endl;
	}
	//const Animal& is an animal reference thats passed in
	Animal(const Animal& other) :
		name(other.name){
		cout << "Animal created by copying" << endl;
	}
	~Animal(){
		cout << "Destructor called" << endl;
	}
	void setName(string name){
		this->name = name;
	}
	void speak() const {
		cout << "My name is: " << name << endl;
	}
};

int main() {

	Letter *pLetter = new Letter[26];
	cout << sizeof(pLetter) << sizeof(*pLetter)<< endl;
	int asciiNumber = 97;
	for (int i = 0; i < sizeof(pLetter); i++, asciiNumber++){
		pLetter[i].setName(asciiNumber);
	}
	for(int j = 0; j< sizeof(pLetter); j++){
		pLetter[j].output();
	}
	delete [] pLetter;
	//you can use "new" on any type
	int *pInt = new int;

	*pInt = 8;

	delete pInt;
	//this allocates memory for animal object and instantiates it
	Animal *pAnimal = new Animal[10];

	pAnimal[5].setName("penisizer");
	pAnimal[5].speak();

	delete [] pAnimal;
	return 0;
}
