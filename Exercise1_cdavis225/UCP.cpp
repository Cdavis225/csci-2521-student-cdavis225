#include <iostream>
#include <string>

using namespace std;
/**
 * @file Exercise1_cdavis225.cpp
 * @author CJ Davis
 * @date 2026-03-08
 * @brief This program validates UPC-A barcodes performing the UPC-A check digit algorithm.
 */

//This function allows the user to input a UCP code, it then checks and validates the code.
void gotCode() {
	char yn;
	string first;
	string last;
	string manuf;
	string product;
	//do-while loop that allows the user to input multiple codes as long as they have them.
	do {
		cout << "Do you have a number to test? (y or n): ";
		cin >> yn;
		if (yn != 'y') {
			cout << "No code, program will now exit.";
			break;
		}
		cout << "Enter the very first number of UCP: ";
		cin >> first;
		cout << "Enter the very last number of UCP: ";
		cin >> last;
		cout << "Enter your Manufacturer number (the first set of 5 digits) ";
		cin >> manuf;
		cout << "Enter you Product number (the second set of 5 digits) ";
		cin >> product;
		cout << endl;
		string code = first + manuf + product + last;
		int oddPos = 0;
		int evenPos = 0;
		//for loop that checks the odd and even positioned digits.
		for (int i = 0; i < 11; i++) {
			int check = code[i] - '0';
			if (i % 2 == 0) {
				oddPos += check;
			}
			else {
				evenPos += check;
			}
		}
		int total = oddPos * 3 + evenPos;
		int checkDigit = (10 - (total % 10)) % 10;
		//if statement that will let the user know if their code is valid or invalid, based on the previous two variables values.
		if (checkDigit == (code[11] - '0')) {
			cout << "UPC code " << code << " is valid." << endl;
		}
		else {
			cout << "Invalid UPC code." << endl;
		}
	} while (yn == 'y');
}

//main function that calls the gotCode function and displays it.
int main() {
	gotCode();
	return 0;
}
