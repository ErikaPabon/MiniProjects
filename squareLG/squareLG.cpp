// squareLG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;


double squareroot(double LG, double N)
{
    return  0.5 * (LG + N / LG);// use symbols of multiplication

}

int main()
{
    double LG, N, NG;
    double diff; // to hold dif between LG & NG

    LG = 1;
    NG = 0;
    diff = 1;

    cout << "Please enter a number: " << endl;

    cin >> N;

    while (abs(diff) >= 0.00001)// abs : absolute value
    {
        NG = squareroot(LG, N);
        diff = LG - NG;
        LG = NG;//Updating LG
    }
    cout << "The square foot of: " << N << " is: " << NG << endl;
}
/*Please enter a number:
5
The square foot of : 5 is : 2.23607*/


/*Write a function to determine the square root of a number.The square root of a number
can be approximated by repeated calculation using the formula
NG = 0.5(LG + N / LG)
where NG stands for the next guessand LG stands for the last guess.The loop should
repeat until the difference between NGand LG is less than 0.00001.Use an initial guess
of 1.0.Write a driver program to test your square root function.*/
