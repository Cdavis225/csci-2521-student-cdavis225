#include <iostream> 
using namespace std;

/**
 * @file Lab1_cdavis225.cpp
 * @author CJ Davis
 * @date 2026-03-29
 * @brief Demonstrates stack vs heap memory and the use of pointers and references.
 */

int main() {
	int stackInt = 10;
	int heapInt = 30;
	int* ptrToStack = &stackInt;
	int& refToStack = stackInt;

	cout << "Stack Variable (stackInt):" << endl;
	cout << "Value: " << stackInt << endl;
	cout << "Address: " << &stackInt << endl;

	cout << "\nHeap Variable (heapInt):" << endl;
	cout << "Value: " << heapInt << endl;
	cout << "Address: " << &heapInt << endl;

	cout << "\nPointer to Stack (ptrToStack):" << endl;
	cout << "Value Pointed To: " << *ptrToStack << endl;
	cout << "Address Stored: " << ptrToStack << endl;

	cout << "\nReference to Stack (refToStack):" << endl;
	cout << "Value Referred To: " << refToStack << endl;
	cout << "Address: " << &refToStack << endl;

	return 0;
}