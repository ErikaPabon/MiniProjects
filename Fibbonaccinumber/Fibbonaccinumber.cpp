// Fibbonaccinumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;

int fibb(int n) { // function prototype

    if (n == 0) {//zeroth number defined as 0
        return 0;
    }
    else if (n == 1) {
        return 1;//first number defined as 1
    }
    else {
        return fibb(n - 1) + fibb(n - 2); // (5-1)+(5-2) = 4 + 3
    }

}

int main()
{
    int n;
    cout << "This program computes the nth Fibonacci number, \n";
    cout << "Enter the Fibonacci number position to check: \n";
    cin >> n;

    cout << "The Fibbonaci number of " << n << " is: " << fibb(n) << endl;
}

//This program computes the nth Fibonacci number,
//Enter the Fibonacci number position to check :
//10
//The Fibbonaci number of 10 is : 55

//This program computes the nth Fibonacci number,
//Enter the Fibonacci number position to check :
//15
//The Fibbonaci number of 15 is : 610
