// Showdouble.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void showDouble(int);//creates the function with a parameter type int, FUNCTION PROTOTYPE

int main()
{
    int num;//main fuction

    for (num = 0; num < 10; num++)//for num from 0 until less than 10
        showDouble(num);//called the function using the values of the conditional loop
    return 0;
}

// Definition of function showDouble
void showDouble(int value)
{
    cout << value << "\t" << (value * 2) << endl; // the called function displays the value of the loop and then multiply it times 2
}
