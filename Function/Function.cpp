// Function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;


void drawLine(int length, char style) {// parameters inside the brakets
	
	for (int i = 0; i < length; i++) {
		cout << style;
	}
}

void drawTriangle(int size, char style) {

	for (int i = 0; i < size; i++) {
		drawLine(size - i, ' ');
		drawLine(2 * i + 1, style);
		cout << endl;
	}
}


int main()
{
	drawLine(50, '#');
	cout << endl;
	drawLine(80, '#');
	cout << endl;
	drawLine(30, '+');
	cout << endl;

	drawTriangle(15, 'o');
	cout << endl;

	cout << "Draw another triangle " << endl;

	drawTriangle(10, 'a');

	cout << "The End" << endl;

	}