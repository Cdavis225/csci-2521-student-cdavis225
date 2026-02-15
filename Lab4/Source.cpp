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

	do {
		cout << "Please enter the maximum digit for the multiplication table." << endl;
		cout << "The digit must be greater than 4 and less than 10" << endl;
		cin >> maxNum;

		if (maxNum > 4 && maxNum < 10) {
			break;
		}

		if (maxNum <= 4 || maxNum >= 10) {
			cout << "Max Digit: " << maxNum << endl;
			cout << "Error: The max digit must be greater than 4 nd less than 10. Please try again." << endl;
			continue;
		}

	} while (maxNum <= 4 || maxNum >= 10);

	for (int i = 1; i <= maxNum; i++) {
		for (int j = 1; j <= maxNum; j++) {
			cout << i * j << "\t ";
		}
		cout << endl;
	} 
	return 0;
}