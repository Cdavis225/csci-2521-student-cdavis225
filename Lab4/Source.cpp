#include <iostream>
using namespace std;

/**
 * @file Lab1_cdavis225.cpp
 * @author CJ Davis
 * @date 2026-02-15
 * @brief This program is meant to produce a multiplication table between 4 and 10, based on the users input
 */

int main() {
	int maxNum;

	//a do-while loop that makes the user continue to input until they use a number between 4 and 10
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

	//this for loop creates the table itself, by keeping i <= maxNum, the only numbers printed would be between 1-9, 2-18, and going until it stops at 9-81
	for (int i = 1; i <= maxNum; i++) {
		for (int j = 1; j <= maxNum; j++) {
			cout << i * j << "\t ";
		}
		cout << endl;
	} 
	return 0;
}