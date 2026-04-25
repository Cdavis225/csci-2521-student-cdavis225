#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
using namespace std;
/**
 * @file Lab11_cdavis225.cpp
 * @author Your Name
 * @date 2026-04-23
 * @brief This lab is meant to demonstate the use of exception handling using STL vectors 
 */

int main() {
	vector <string> cities = { "Columbus", "Athens", "Cincinnati", "Cleaveland", "Akron", "Chillicothe", "Reynoldsburg" };
	int userIndex;
	cout << "Enter a number" << endl;
	cin >> userIndex;
	//try-catch statement that checks the users input to see if it is within the range of the index
	try {
		string city = cities.at(userIndex);
		cout << "Your City is: " << city << endl;
	}
	catch (out_of_range){
		if (userIndex < 0) {
			cout << "Invalid index. Here's the first city instead: " << cities.at(0);
		}
		else if (userIndex >= cities.size()) {
			cout << "Invalid index. Here's the last city instead: " << cities.at(6);
		}
	}
	return 0;
}