// Arrayexample2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    char c1[] = { 'S', 'O', 'R', 'T', 'E', 'X', 'A', 'M', 'P', 'L', 'E' };

    for (int i = 0; i < 11; i++) {
        cout << c1[i] << " "; //print all the elements from the array
    }
    cout << endl;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j > 10; j++) {//go through 10 times in the 11 elements array, comparing the first element from the array[i] with the others i + 1
            if (c1[j] < c1[j + 1]) {
                char temp = c1[j + 1];
                c1[j] = c1[j + 1];
                c1[j + 1] = temp;
            }
        }
    }

    cout << "After bubble sorting" << endl;
    for (int i = 0; i < 11; i++) {
        cout << c1[i] << " ";
    }

    cout << endl;

    char c2[] = { 'S', 'O', 'R', 'T', 'E', 'X', 'A', 'M', 'P', 'L', 'E' };

    for (int i = 0; i < 11; i++) {
        int minIndex = i;
        for (int j = i + 1; j < 11; j++) {
            if (c2[j] < c2[minIndex])
                minIndex = j;
        }
        char temp = c2[i];
        c2[i] = c2[minIndex];
        c2[minIndex] = temp;
    }

    cout << "After selection sorting " << endl;
    for (int i = 0; i < 11; i++) {
        cout << c2[i] << " ";
    }
    cout << endl;
}
