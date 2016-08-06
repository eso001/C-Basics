//============================================================================
// Name        : Encapsulation.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Machine {
private:
	int id;
public:
	Machine(): id(0) {cout << "Machine no arguments called" << endl;}
	Machine(int id): id(id) { cout << "Machine has argument" << endl;}
	void info(){ cout << "ID: " << id << endl;}
};
class Vehicle: public Machine{
public:
	Vehicle(){cout << "Vehicle" << endl;}
	Vehicle(int id): Machine(id) { cout << "Vehicle with id" << endl;}
};
class Car: public Vehicle {
public:
	Car(): Vehicle(5959){ cout << "Car no argument constructor" << endl;}
};
class Frog {
private:
	string name;
	string getName(){ return name;}
public:
	Frog(string name): name(name){}
	void info() { cout << "My name is: " << getName() << endl; }
};
int main() {

	Vehicle vehicle(69);
	vehicle.info();


	Car car;
	car.info();
	return 0;
}
