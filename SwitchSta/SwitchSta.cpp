// SwitchSta.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    enum Days {Mon, Tue, Wed, Thu, Fri, Sat, Sun}; //creates constant numbers automatically
    int day;
    int x, y;
    x = 77;
    cout << "Enter day: ";
    cin >> day;

    switch (day) {

    case 'M': 
        cout << "Do Monday Assigment" << endl;
        cout << "s1" << endl;
        cout << "s2" << endl;
        break;

    case 'T': 
        cout << "Do Tuesday Assignment" << endl;
        cout << "s3" << endl;
        cout << "s4" << endl;
        break;
    case 'W':
        cout << "Do Wednesday Assignment" << endl;
        cout << "s5" << endl;
        cout << "s6" << endl;
        break;

    default:
        cout << "No work assignment" << endl;
        cout << "s9" << endl;
        cout << "s10" << endl;

    }
    cout << "Done" << endl;
}