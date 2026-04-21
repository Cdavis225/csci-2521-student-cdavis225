#include<iostream>
#include "Translate.h"
/**
 * @file Exercise2_cdavis225.cpp
 * @author CJ Davis
 * @date 2026-04-20
 * @brief This program takes user input strings and converts it to morse code, the limit is 50 characters.
 */

using namespace std;
int main() {

	//asking the user for their string  input.
	cout << "Please enter a string with no more that 50 characters" << endl;

	string input;
	getline(cin, input);

	//Checks if the user input too many characters and displays an error message if it is over 50 characters.
	Limit theMax;
	if (!theMax.set(input)) {
		cerr << "Error: too many characters!" << endl << "Please enter a string with no more than 50 characters";
		return 1;
	}

	Translator translation;
	string morse = translation.translate(theMax);

	//Takes the user input and checks if it is valid or not, will tell the user if they possibly entered in an invalid character.
	if (morse.empty()) {
		cout << "No output created, possible invalid character usage." << endl;
	}
	else {
		cout << "Translation: " << morse << endl;
	}
	return 0;
}

