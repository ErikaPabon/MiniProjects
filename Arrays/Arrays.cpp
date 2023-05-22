// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

#define NUM 10 // DEFINE A CONSTANT

int main()
{
    double grades[NUM] = { 0, 0, 0, 0, 0 }//OR double grades[10];
    double copy[NUM];
    double cumulative[NUM];

    double copy2[NUM];
    double ave, total, max;


    for (int i = 0; i < NUM; i++) { // or (int i = 0; i < 10; i++)
        grades[i] = 0;
        copy[i] = 0;
        cumulative[0];
    }

    for (int i = 0; i < NUM; i++) {
        cout << "Student " << (i + 1) << ": " << grades[i] << endl;
    }

    for (int i = 0; i < NUM; i++) {
        cout << "Enter grade for student " << (i + 1) << ": ";
        cin >> grades[i];
    }

    for (int i = 0; i < NUM; i++) {

        cout << "Student " << (i + 1) << ": " << grades[i] << endl;
    }

    cout << "Computing Average" << endl;
    total = 0;
    for (int i = 0; i < NUM; i++) {
        total += grades[i];
    }
    ave = total / NUM;
    cout << "Average grade is : " << ave << endl;


    max = grades[0];
    for (int i = 1; i < NUM; i++) {
        if (grades[i] > max)
            max = grades[i];
    }
    cout << "Maximum grade is : " << max << endl;

    cout << "Copying Arrays " << endl;
    for (int i = 0; i < NUM; i++) {
        copy[i] = grades[i];
    }

    cout << "Printing Copy " << endl;
    for (int i = 0; i < NUM; i++) {
        cout << copy[i] << " ";
    }
    cout << endl;

    grades[0] = 100;
    cout << grades[0] << " " << copy[0] << endl;

    //for (int i = 0; i < NUM; i++) {
        //for (int j = 0; j <= i; j++) {
            //cumulative[i] = cumulative[i] + x[j];
       // }
    //}

    cumulative[0] = grades [0];
    for (int i = 1; i < NUM; i++) {
        cumulative[i] = cumulative[i - 1] + grades[i];
    }


    cout << "Printing Cumulative " << endl;
    for (int i = 0; i < NUM; i++) {
        cout << cumulative[i] << " ";
    }
}

