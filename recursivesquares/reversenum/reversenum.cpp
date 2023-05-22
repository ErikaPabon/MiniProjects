// reversenum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int reversenum(int input) { //for 1, 2, 3, 4, 5,   take the 5 from the end and add it to a new num // takes some operation

    // 12345/10 = 1234
    // 12345% 10 = 5

    int numout = 0;

    while (input != 0) {
        
        numout *= 10;
        numout += input % 10; //increasing the output
        input /= 10;
    }

    return numout; //

}
int main()
{

    int x = 0;
    cout << "Enter a number" << endl;
    cin >> x;
    cout << reversenum(x);
}
