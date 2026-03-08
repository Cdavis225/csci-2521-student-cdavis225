#include <iostream>

int main()
{
	int manufacturerNumber = 51500;
	int temp = manufacturerNumber;

	// use integer divixzion to parse the digit
	int firstDigit = manufacturerNumber / 10000;

	// strip digit using modulus = 1500
	manufacturerNumber = manufacturerNumber % 10000;

	int secondDigit = manufacturerNumber / 1000;
	manufacturerNumber %= 1000; // 500

	int thirdDigit = manufacturerNumber / 100;
	manufacturerNumber %= 100; // 00

	int fourthDigit = manufacturerNumber / 10;
	manufacturerNumber %= 10;

	int fifthDigit = manufacturerNumber;


}