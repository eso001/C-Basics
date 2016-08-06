//============================================================================
// Name        : New.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
//there are two kinds of memory

//the stack and the heap

//stack: a stack of plates you put plates and take plates off the top

//stack is associated with local variables and addresses of function to be called onto the stack
//you can end up with a stack overflow

//heap is the memory available to the computer

//if you had a array thats big, you would want to declare new
//so that way memory is allocated to the heap
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
class Fruit {
private:
	string name;
	int quantity;
public:
	Fruit(){
		cout << "fruit created" << endl;
	}
	Fruit(string name){
		this->name = name;
		this->quantity = 1;
	}
	Fruit(string name, int quantity){
		this->name = name;
		this->quantity = quantity;
	}
	Fruit(const Fruit& other){
		name = other.name;
		quantity = other.quantity;
	}
	~Fruit(){
		cout << "Fuck Fruits" << endl;
	}
	void setName(string name){
		this->name = name;
	}
	void setQuantity(int quantity){
		this->quantity = quantity;
	}
	void eat(){
		this->quantity--;
	}
	void currentQuantity(){
		cout << this->name << ": " << this->quantity << endl;
	}
};
Fruit *createFruit(){
	Fruit *pFruit = new Fruit();
	pFruit->setName("kiwi");
	return pFruit;
}
Animal *createAnimal(){
	//you need the new so the Animal does not get deleted
	//since new needs to be explicity deleted in memory
	Animal *pAnimal = new Animal();
	pAnimal->setName("Bertie");
	return pAnimal;
}
int main() {
	Fruit *kiwi = createFruit();

	kiwi->currentQuantity();
	delete kiwi;
	//a reference is passed from the function
	//pointer to an object is returned
	Animal *pFrog = createAnimal();

	pFrog->speak();

	delete pFrog;
	//WHEREVER YOU CALL NEW, YOU MUST CALL DELETE
	//the new operator allocates memory for a single object
	//when you allocate memory with new, you must remember to destroy object after
	//it will stay in your operating system
	Fruit *apple = new Fruit("apple", 3);
	Fruit banana("banana", 5);
	banana.currentQuantity();
	apple->currentQuantity();
	delete apple;

	Animal *pCat1 = new Animal();
	(*pCat1).setName("fun");
	pCat1 -> speak();
	//you always have to call delete when you call new
	//causes memory leaks
	cout << sizeof(pCat1) << endl;
	delete pCat1;


	//NULL is the same as 0,
	//dont do this
//	Animal *pCat2 = NULL;



	return 0;
}
