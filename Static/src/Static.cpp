//============================================================================
// Name        : Static.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//.h file
class Test {
private:
	int id;
	static int count;
public:
	static int const MAX = 99;
public:
	Test() {
		//postfix increment operator count++
		id = ++count;
		//prefix increment operator ++count
	}
	int getId(){
		return id;
	}
	static void showInfo(){
		//static methods can only access static variables
		cout << count << endl;
	}
};

//.cpp file
//you can access and share static variables among all objects of a class
//static is useful for counting how many objects you create
int Test::count = 0;
int main() {
	Test test1;
	Test test2;
	cout << "test1 id" << test1.getId() << endl;
	cout << "test2 id" << test2.getId() << endl;
	cout << Test::MAX << endl;
	Test::showInfo();

	return 0;
}
