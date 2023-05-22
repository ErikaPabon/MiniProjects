// Array2Example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>//preprocesor for using the random num feature
#include <ctime>// if using time on srand

using namespace std;

int main()
{
    double grades[25][10];
    double total[25]; //we need 25 rows
    double colTotal[10];

    srand(time(0));
    //srand(10);always same random numbers

    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 10; j++) {
            grades[i][j] = (int)((((double)rand()) / RAND_MAX) * 10); //cast (int)
        }//this scope generates the numbers
    }

    for (int i = 0; i < 25; i++) {
        total[i] = 0;//intializes totals to 0 before starts to sum up
        for (int j = 0; j < 10; j++)
            total[i] += grades[i][j];//Total sum of grades of each student
    }

    for (int i = 0; i < 10; i++) {
        colTotal[i] = 0;
        for (int j = 0; j < 25; j++)
            colTotal[i] += grades[j][i];

    }

    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 10; j++) {
            cout << grades << grades[i][j] ;//prints the variable
            if (j < 9) {
                cout << ", ";//to print comas in beetween before the last number on j
            }
        }
        cout << endl;

        //cout << 100 + (((double)rand()) / RAND_MAX) * 100 << endl;//once it generates a double random # it will divide with the max and multiplicated times 100
                       // RAND_MAX * 100 generates between a range and (100 +) this sums up
    }
}
