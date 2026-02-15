#include <iostream>
using namespace std;
/**
 * @file Lab1_cdavis225.cpp
 * @author CJ Davis
 * @date 2026-02-06
 * @brief A  program to calculate the area of a rectangle and a circle.
 */

int main() {
	//Section instructing the user to select an option available listed.
	int selection;
	cout << "Menu" << endl;
	cout << "1. Calculate the Area of a Rectangle" << endl;
	cout << "2.Calculate te Area of a Circle" << endl;
	cout << "3. Quit" << endl;
	cout << "Please make a selection: ";
	cin >> selection;

	//If statement that will direct the user to one of the three options based on their input.
	if (selection == 1) {
		//Calculation of the rectangle area
		double rectLength;
		double rectWidth;
		double rectArea;
		cout << "Please enter the length of the rectangle: " << endl;
		cin >> rectLength;
		cout << "Please enter the width of the rectangle: " << endl;
		cin >> rectWidth;
		rectArea = rectWidth * rectLength;
		cout << "The area of the rectangle is : " << rectArea;
	}
	else if (selection == 2) {
		//Calculation of the circle area
		double circRad;
		const double PI = 3.14159;
		double circArea;
		double radCalc;
		cout << "Please enter the radius of the circle: " << endl;
		cin >> circRad;
		radCalc = circRad * circRad;
		circArea = PI * radCalc;
		cout << "The area of the circle is : " << circArea;
	}
	else if (selection == 0) {
		//Ends program by returning 0, if the user enters 0
		return 0;
	}
	else {
		//Asks user to input a valid entry if they do not input 0, 1, or 2.
		cout << "Please enter a valid number E.g. 1 for option 1, 2 for option 2, and 0 to quit";
	}
}