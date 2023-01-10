// CppPointersDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdint>

using namespace std;

void pointersDemo();
void clearPointersDemo();

void printHelloWorld()
{
	using namespace std;
	cout << "Hello World!" << endl;
}


int main()
{
	//printHelloWorld();
	//pointersDemo();
	//clearPointersDemo();
}


/*
 * Introduction to pointers in CPP
 * Pointers are storing memory location of certain variable
 */
void pointersDemo()
{
	int a = 5;
	int b = 10;
	int* pointer_A = &a;

	cout << a << endl; //5
	cout << pointer_A << endl; //006FFC80
	cout << &pointer_A << endl; //008FF7B4
	cout << *pointer_A << endl << endl; //5

	a = ++a;
	cout << a << endl; //6
	cout << *pointer_A << endl << endl; //6

	pointer_A = &b;
	cout << a << endl; //6
	cout << *pointer_A << endl << endl; //10

	*pointer_A = 11;
	cout << b << endl; //11
}

/*
 * How to clear pointers in right way
 */
void clearPointersDemo()
{
	int* pointer = new int;
	*pointer = 5;

	cout << *pointer << endl; //5
	cout << pointer << endl << endl; //00ADA1A8

	//delete pointer;

	pointer = new int(2000);

	cout << *pointer << endl; //2000
	cout << pointer << endl << endl; //00AD5380
}