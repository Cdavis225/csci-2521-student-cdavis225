#include<iostream>
using namespace std;
/**
 * @file Lab1_cdavis225.cpp
 * @author CJ Davis
 * @date 2025-01-24
 * @brief A simple program to greet the user by name.
 */

int main() {
	string firstName;
	string lastName;

	//Prompt that asks user for their first name
	cout << "Please enter your first name: ";
	//Input allowing the user to enter their first name
	cin >> firstName;

	//Prompt that asks user for their last name
	cout << "Pleas enter your last name: ";
	//Input allowing the user to enter their last name
	cin >> lastName;

	//Final output that welcomes the student to C++ Programming, using their first and last name based on the previous inputs
	cout << "Welcome to C++ Programming, " << firstName << " " << lastName << "!" << endl;
}