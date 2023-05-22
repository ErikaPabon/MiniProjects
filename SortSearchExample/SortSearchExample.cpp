// SortSearchExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char c2[] = { 's', 'o', 'r', 't', 'e', 'x' , 'a', 'm', 'p' , 'l', 'e' };

    for (int i = 0; i < 11; i++) {//how this will loop
        int minIndex = i; //first, we take first element as a the smallest one
        for (int j = i + 1; j < 11; j++) { //then we create a loop to compare with the rest of the elements
            if (c2[j] < c2[minIndex]) //if the element compared is less than the minIndex
                minIndex = j;// then the minIndex becomes that element 
        }
        char temp = c2[i];//take the first element and put it in temporary array
        c2[i] = c2[minIndex];// take the min index compared and put it in the first position of the array
        c2[minIndex] = temp;//take the element from temp and put it back on the empty array space
    }
}