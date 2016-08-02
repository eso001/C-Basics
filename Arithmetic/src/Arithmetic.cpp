//============================================================================
// Name        : Arithmetic.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

float secondConverter(int seconds){
	int extraSeconds = seconds%60;
	int minutes = seconds/60;
	int extraMinutes = minutes%60;
	int hours = minutes/60;

	cout << "H M S: " << hours << extraMinutes << extraSeconds << endl;
}
int outputDots(){
	cout << "Outputting: " << endl;
	int counter = 0;
	for(int i = 0; i < 10000; i++){
		if(i%100 == 0){
			counter++;
			cout << "." << flush;
		}
	}
	cout << "finished..." << endl;
	return counter;
}
int main() {
	//this is called "casting 7 to a double"
	//we can convert certain types to otehrs

	secondConverter(3600);

	double value1 = (double)7/2;

	float value2 = 7.3;

	float value4 = 10.4;

	value4 /= 5;

	cout << value4 << endl;
	cout << value1 << endl;

	cout << "value 2 " << value2 << endl;
	int numberOfDots = outputDots();

	cout << "number of Dots: " << numberOfDots << endl;
	return 0;
}
