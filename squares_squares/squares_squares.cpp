// squares_squares.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int square(int);//function prototype



int main()
{
    int x = 1;

    x = square(x);
    x = square(x);
    x = square(x);
    x = square(x);
    x = square(x);
    x = square(x);
    x = square(x);
    x = square(x);
    x = square(x);
 
}


int square(int x) {
    cout << "The number: " << x << ". Its square is: " << x * x << " and its square root is: " << sqrt(x) << endl;
    x++;
    return x;
}

//output

//The number : 1. Its square is : 1 and its square root is : 1
//The number : 2. Its square is : 4 and its square root is : 1.41421
//The number : 3. Its square is : 9 and its square root is : 1.73205
//The number : 4. Its square is : 16 and its square root is : 2
//The number : 5. Its square is : 25 and its square root is : 2.23607
//The number : 6. Its square is : 36 and its square root is : 2.44949
//The number : 7. Its square is : 49 and its square root is : 2.64575
//The number : 8. Its square is : 64 and its square root is : 2.82843
//The number : 9. Its square is : 81 and its square root is : 3