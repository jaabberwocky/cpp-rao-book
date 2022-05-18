// ch2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

// function declaration
int AskForName();

int main()
{
	int enteredNumber;
	string name;

	AskForName();
	cin >> name;
	cout << "Enter a number: ";
	cin >> enteredNumber;

	cout << name << " entered " << enteredNumber << endl;
	return 0;
}

// function implementation
int AskForName() {
	cout << "Please enter your name: ";
	return 0;
}