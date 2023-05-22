// showDollars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

void showDollars(double); //function prototype

int main()
{
    double payRate, hoursWorked, wages;

    cout << "How many hours have you worked? ";
    cin >> hoursWorked;
    cout << "What is your hourly pay rate? ";
    cin >> payRate;
    wages = hoursWorked * payRate; 
    showDollars(wages);//calling the function prototype
    return 0;//start over again
}

void showDollars(double a)
{
    cout << fixed << showpoint << setprecision(2);
    cout << "Your wages are $" << a << endl;

}

//

