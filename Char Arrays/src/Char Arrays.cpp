//============================================================================
// Name        : Char.cpp
// Author      : Eric So
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//create a char string and output it
//output all chars with a for loop
//output all chars with a while(true) loop
int practice(){

	char fat[] = "plumpElephant";

	for(int i = 0; i < sizeof(fat); i++){

		cout << fat[i] << flush;
		if(i == sizeof(fat)-1){
			cout << endl;
		}
	}

	cout << "practice finished" << endl;










	return 0;
}
int main() {

	practice();
	//we can store text in an array of chars

	//c++ will put this into a char array;
	char text[] = "hello";

	for(int i = 0; i < sizeof(text); i++){
		cout << text[i] << ": " << i << endl;
	}
//	string text = "hello";

	int k = 0;
	while(true){

		if(text[k] == 0){
			break;
		}
		cout << text[k] << flush;

		k++;
	}

	return 0;
}
