//
// File:   assignment1.cpp
// Author: Camille Greer
// Purpose:
// Illustrate some of the bad things that can happen with
// pointers
//
#include <iostream>
#include<string>
using namespace std;

void firstQ();
void secondQ();
void thirdQ();

int main() 
{
	firstQ;
	secondQ;
	thirdQ;

  return 0;
}

void firstQ()
{
	int arr[25];
	int* ptrA;

	ptrA = new int;

	int* ptrB;
	ptrB = arr;

	delete arr;
	 
	for (int i = 0; i < 10; i++)
	{
		cout << "The first 10 numbers of the pointer is: " << ptrB << endl;

		ptrB++;
	}
}

void secondQ()
{
	int arr[25];

	int* ptr1 = arr;
	int* ptr2 = arr;

	ptr1 = new int;
	ptr2 = new int;

	delete ptr1;

	cout << arr << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "The first 10 numbers of the pointer is:" << ptr2 << endl;
		 
		ptr2++;
	}
}

void thirdQ()
{
	string firstName;
	string* name = firstName;

	string* name = new string;


}