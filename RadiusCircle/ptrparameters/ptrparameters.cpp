// ptrparameters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void swap1(int, int);
void swap2(int*, int*);
void swap3(int&, int&);


int main()
{
	int p = 25;
	int q = 50;


	cout << "Before swap: p = " << p << " , q = " << q << endl;
	swap1(p, q);
	cout << "After swap 1: p = " << p << " , q = " << q << endl;
	swap2(&p, &q);
	cout << "After swap 1: p = " << p << " , q = " << q << endl;
	swap1(p, q);
	cout << "After swap 1: p = " << p << " , q = " << q << endl;

	string s = "1234";
	int x = 0;

	for (int i = 0; i < s.length(); i++) {// this loop will go through the length of the string =, when x=0 x = 0 * 10 + ('1' - 48) = 1, until the 
		x = x * 10 + (s[i] - 48);// 48 is the x ASCCI code for 1, 10: because is a decimal
	}
	cout << " x = " << x << endl;
	string s = "Apr-10-1234";
	string s1 = s.substr(3, 6);

	cout << "s1 = " << s1 << endl;

	int x = 0;

	for (int i = 7; i < 11; i++) {
		x = x * 10 + (s[i] - 48);
	}
	cout << "x = " << x << endl
}

//pass by value
void swap1(int x, int y) //x = 25 y=50
{
	int temp = x; 
	x = y;
	y = temp;
}
//pass by pointer
void swap2(int* x, int* y) // x= &p, y = &q
{
	int temp = *x;
	*x = y;
	*y = temp;
}
//pass by reference 
void swap3(int&  x, int& y)  // x= p, y = q
{
	int temp = x;
	x = y;
	y = temp;
}
