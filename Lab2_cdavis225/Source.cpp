#include <iostream>

using namespace std;
/**
 * @file Lab1_cdavis225.cpp
 * @author CJ Davis
 * @date 2025-01-24
 * @brief A program that takes user input for the length and width of a rectangle, and calculates and displays the perimeter based on the input given.
 */

int main()
{
	int rectLength;
	int rectWidth;
	int length;
	int width;

	//Text that informs the user what the program is about
	cout << "This application will calculate the perimeter of a rectangle" << endl;

	//Prompt asking the user to input the length of the rectangles sides
	cout << "Please enter the length of the rectangle: ";
	cin >> length;

	//Prompt asking the user to input the width of the rectangles sides
	cout << "Please enter the width of the rectangle: ";
	cin >> width;
	
	//variables the hold the value of length and width
	rectLength = length * 2;
	rectWidth = width * 2;

	//output that displays the output of the rectangles perimeter
	cout << "The perimeter of the rectangle is: " << rectLength + rectWidth << endl;
}