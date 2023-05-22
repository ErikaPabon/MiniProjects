// Resize.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int* resize(int*, int );

int main()
{
    int const size = 6;
    int arr[size] = { 1, 2, 3, 4, 5, 6 };
    int* newnumber = resize(arr, size);

    for (int i = 0; i < size*2;i++)
        cout << newnumber[i] << "  \n";

   cout << resize(arr, size)<< " ";

}

int* resize(int *arr, int size) 
{
    
    int* twice = new int[size * 2];//initializing dynamically an array with twice the size
    for (int i = 0; i < size; i++) {
       twice[i] = arr[i];
    }

    for (int i = size; i < size * 2; i++) {

        twice[i] = 0;
        twice[i] = arr[i];
    }

    return twice;
}

/*OUTPUT
1
2
3
4
5
6
0
0
0
0
0
0
1
2
3
4
5
6
013F47F8
-858993460
-858993460
6
-858993460
-1874820042
14941460
01548548

2. Resize Array
Write a function that accepts an int array and size as arguments.The function should
create a new array this is twice the size of the argument array.The function should copy
the contents of the argument array to the new array and initialize the unused elements of
the second array with 0. The function should return a pointer to the new array */
