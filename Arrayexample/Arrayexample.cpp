// Arrayexample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

#define NUM 5

int main()
{
    double grades[NUM] = { 10, 20, 30, 40, 50 };
    double copy[NUM] = { 10, 20, 30, 40, 50 };
    double cumulative[NUM] = { 1, 2, 4, 5, 6 };

    if (grades == copy) {
        cout << "same" << endl;
    }
    else {
        cout << "different" << endl;
    }

    cout << "grades: " << grades << endl;
    cout << "copy: " << copy << endl;

    bool same = true;
    for (int i = 0; i < NUM; i++) {
        if (grades[i])
    }


}