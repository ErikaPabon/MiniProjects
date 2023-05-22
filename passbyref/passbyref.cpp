// passbyref.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void doubleNum(int&);
void getNum(int&); //always include the & sign at header and prototype

int main()
{
    int value;

    //Get the number and store it in value.
    getNum(value);//when calling pass by ref no need of &.

    //Double the number stored in value.
    doubleNum(value);

    //Display the resulting number.
    cout << "That value doubled is " << value << endl;
    return 0;
}
//definition of getNum. User asked to enter a num, which is stored in userNum
void getNum(int& userNum)
{
    cout << "Enter a number: ";
    cin >> userNum;
}
//the value refVal is doubled.
void doubleNum(int& refVar)
{
    refVar *= 2;
}
