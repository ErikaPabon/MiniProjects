// arrays3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>//this one is for random numbers
#include <iomanip> //this one is for setw

using namespace std;
void mystery(int z, int n);
int Ndigits(int n);

int main()
{
    const int SIZE = 5;
    int numbers[SIZE] = { 10, 20, 30, 40, 50 };// an array name is seen by the computer as the beginning memory address.
    //to sum the values in the array, use a loop with an accumulator variable.

    int i, temp;

    temp = numbers[SIZE - 1];

    for (i = 1; i < SIZE; i++) {

        numbers[i] = numbers[i - 1];

    }

    numbers[0] = temp;
    cout << "Array result is: " << endl;

    for (int count = 0; count < SIZE; count++)
        cout << numbers[count] << "  ";

    cout << endl;

    int total = 0; //add the values of each element in the array to the total variable. When finished, total will contain the sum of the of the 'sum' array's elements

    //to print the values, you must display the contents of each array's elements
    for (int count = 0; count < SIZE; count++)
       cout << numbers[count] << endl; // or for(int val : numbers) cout << val << endl;

    for (int count = 0; count < SIZE; count++) //while count is less than the elements of the array.
        total += numbers[count]; // total will sum up the elements to the sum size array variable.
    cout << " after this" << endl;
    mystery(1, 7);

    cout << " after this" << endl;

    int v1 = 10;

    int v2 = 15;



    int* p1 = &v1;

    int* p2 = &v2;



    *p1 += *p2;

    p2 = p1;

    *p2 = *p2 + *p1;

    cout << *p1 << "  " << *p2 << endl;


}
void mystery(int z, int n)

{

    int i, k;

    for (i = 1; i <= n; i++)

    {

        z++;

        k = (z + n) % i;

        switch (k)

        {

        case 1:    cout << "case 1" << endl;

        case 2:    cout << "case 2" << endl;

            break;

        default:   cout << "case 3" << endl;

            break;

        }

    }

    cout <<"i ="<<  i << endl;

    cout << "after this" << endl;

    int x = 123456;

    int y;

    y = Ndigits(x);

    cout << y << endl;

}

int Ndigits(int n)
{
    int digitcount = 0;
   

    while (n != 0) {
        n = n / 10;
        digitcount++;
    }
    return digitcount ;
}
