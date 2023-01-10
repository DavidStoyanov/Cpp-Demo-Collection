// CppReferencesDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void referencesDemo();
void comparePointers();
void compareReferences();

int main()
{
	//referencesDemo();
	//comparePointers();
	compareReferences();
}

/*
 * Introduction to references
 *
 *	References can not be null.
 *	References should referencing variable compared to pointers.
 *	References do not take memory compared to pointers.
 *	
 */
void referencesDemo()
{
	int a = 5;
	int& refTo_A = a;

	int* ptr;
	//int& ref; Compile error

	cout << "The value of A is: " << a << endl;
	cout << "The value of refTo_A is: " << refTo_A << endl << endl;

	cout << "The memory address of A is: " << &a << endl;
	cout << "The memory address of refTo_A is: " << &refTo_A << endl;
}

/*
 * 
 */
void comparePointers()
{
	int a = 5;
	int b = 10;

	int* ptrTo_A = &a;

	cout << "The value of A is: " << a << endl;
	cout << "The value of ptrTo_A is: " << *ptrTo_A << endl << endl;

	ptrTo_A = &b;
	
	cout << "The value of A is: " << a << endl;
	cout << "The value of ptrTo_A is: " << *ptrTo_A << endl << endl;
}

/*
 * 
 */
void compareReferences()
{
	int a = 5;
	int b = 10;

	int& refTo_A = a;

	cout << "The value of A is: " << a << endl;
	cout << "The value of refTo_A is: " << refTo_A << endl << endl;

	refTo_A = b;

	cout << "The value of A is: " << a << endl;
	cout << "The value of refTo_A is: " << refTo_A << endl << endl;
}