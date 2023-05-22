// assigment2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double amount;
    double change;
    
    cout << "Enter amount:", amount;
    cin >> amount;

    int cents = (int)(amount * 100);

    int q = cents / 25;
    cents = cents % 25;
    int d = cents / 10;
    cents = cents % 10;
    int n = cents / 5;
    cents = cents % 5;
    int p = cents;
    change = amount / cents;
    
    cout << "Change is iqual to:", amount <<;
    cout << "and ", cents <<;
}
