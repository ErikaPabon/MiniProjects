// Functionexample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>


using namespace std;

//function prototypes

void drawRectangle(int, int, char);
void drawLine(int, char);
void drawTriangle(int, char);
double power(double, int);
bool isPrime(int);



bool isPrime(int num) {

    for (int i = 2; i < num - 1; i++)





        for (int i = 2; i < 100; i++) {
            if (isPrime(i))
                cout << i << " ";

        }
    cout << endl;
    cout << x << " , " << y << endl;

    int num1 = 10;
    int num2 = 5;
    int sum = 0;
    for (int i = 0; i < num2; i++)
    {

        sum += num1;
        cout << num1;
        if (i < num2 - 1)
            cout << " + "
        else
            cout << " = " << sum << endl;
    }
}


