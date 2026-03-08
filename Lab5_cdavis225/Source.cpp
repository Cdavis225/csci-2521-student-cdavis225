#include <iostream>

using namespace std;

/**
 * @file Lab5_cdavis225.cpp
 * @author CJ Davis
 * @date 2026-01-03
 * @brief program that is meant to generate a multiplication table using functions.
 */

void printInputValidationError() {
	int maxNum;
	if (maxNum < 4 || maxNum > 10) {

	}
}

bool isMaxDigitInputValid() {
	 maxNum;
	do {
		cout << "Please enter the maximum digit for the multiplication table." << endl;
		cout << "The digit must be greater than 4 and less than 10" << endl;
		cin >> maxNum;

		//this if statement checks to see if the user input a number between 4 and 10, allowing for the multiplication table to be created
		if (maxNum > 4 && maxNum < 10) {
			break;
		}

		//this if statement checks to see if the user input a number greater than or equal to 10 and less than or equal to 4, if so, the user will be given an error and asked to try again
		if (maxNum <= 4 || maxNum >= 10) {
			cout << "Max Digit: " << maxNum << endl;
			cout << "Error: The max digit must be greater than 4 nd less than 10. Please try again." << endl;
			continue;
		}

	} while (maxNum <= 4 || maxNum >= 10);
	
}

