#include <iostream>
using namespace std;
/**
 * @file Lab1_cdavis225.cpp
 * @author CJ Davis
 * @date 2025-02-06
 * @brief A  program to calculate the area of a rectangle and a circle.
 */

int main() {
	int selection;
	cout << "Menu" << endl;
	cout << "1. Calculate the Area of a Rectangle" << endl;
	cout << "2.Calculate te Area of a Circle" << endl;
	cout << "3. Quit" << endl;
	cout << "Please make a selection: ";
	cin >> selection;

	if (selection == 1) {
		int rectLength;
		int rectWidth;
		int rectArea;
		cout << "Please enter the length of the rectangle: " << endl;
		cin >> rectLength;
		cout << "Please enter the width of the rectangle: " << endl;
		cin >> rectWidth;
		rectArea = rectWidth * rectLength;
		cout << "The area of the rectangle is : " << rectArea;
	}
	else if (selection == 2) {
		int circRad;
		const double PI = 3.14159;
		double circArea;
		int radCalc;
		cout << "Please enter the radius of the circle: " << endl;
		cin >> circRad;
		radCalc = circRad * circRad;
		circArea = PI * radCalc;
		cout << "The area of the circle is : " << circArea;
	}
	else if (selection == 0) {
		return 0;
	}
	else {
		cout << "Please enter a valid number E.g. 1 for option 1, 2 for option 2, and 0 to quit";
	}
}