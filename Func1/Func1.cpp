// Func1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void func1(double, int); // Function protype

int main()
{
    int x = 0;
    double y = 1.5;

    cout << x << " " << y << endl; //x:0 -- double y: 1.5 
    func1(y, x);//called the function
    cout << x << " " << y << endl; // x: 0.0  double 10
    return 0;
}

void func1(double a, int b)
{
    cout << a << " " << b << endl; //a: 0.0 b:10
    a = 0.0;
    b = 10;
    cout << a << " " << b << endl; //a:0.0 b:1.5???
}
