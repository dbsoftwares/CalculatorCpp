// Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include <iostream>

using namespace std;


long getNumber(int index){
	// read the number from the user
	long temp;
	cout << "Give me the "<< index <<" number"<<endl;
	cin >> temp;
	if (cin.good()){
		cout << "Okay, this is correct!"<<endl;
	}else{
		cout << "No way buddy, this is not a correct number."<<endl;
		cout << "I'm out. I have nothing to do here. <jetpack ON>"<<endl;
	}
	return temp;
}

int _tmain(int argc, _TCHAR* argv[])
{
	// Welcome msg
	cout << "Welcome Amroona Ali!\n";
	cout << "This is a very simple calculator which can (+,-,*,/)!"<<endl;
	cout << "It uses the \"long\" type for storing the numbers"<<endl;
	cout << "It's range is:"<<endl;
	cout << "–2,147,483,648 to 2,147,483,647"<<endl;
	
	// call the getNumber method
	long firstNumber = getNumber(1);
	long secondNumber = getNumber(2);

	// read the function mark from the user
	char functionMark;
	cin >> functionMark;
	if (cin.good()){
		cout << "Okay, this is correct!"<<endl;
	}else{
		cout << "No way buddy, this is not a correct number."<<endl;
		cout << "I'm out. I have nothing to do here. <jetpack ON>"<<endl;
	}

	// calculating the value
	long long calculatedValue = 0;
	
	if (functionMark == '+'){
		calculatedValue = firstNumber + secondNumber;
		cout << calculatedValue;
	} else if (functionMark == '-'){
		calculatedValue = firstNumber - secondNumber;
		cout << calculatedValue;
	} else if (functionMark == '*'){
		calculatedValue = firstNumber - secondNumber;
		cout << calculatedValue;
	} else if (functionMark == '/'){
		calculatedValue = firstNumber / secondNumber;
		cout << calculatedValue;
	}

	cin.get();
	cin.get();
	return 0;
}