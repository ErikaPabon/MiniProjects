// recursivesquares.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void simplesquares(int);
bool palindrome(string);
int fibbonacci(int);
int reversenum(int);
int Ndigits(int n);


int main()
{
    int n = 5;
    simplesquares(n);

    string word;
    
    cout << palindrome("madam") << endl;
    cout << palindrome("doggy") << endl;

    cout << fibbonacci(5) << endl;
    cout << fibbonacci(4) << endl;
    cout << fibbonacci(7) << endl;

    cout << reversenum(12345) << endl;
    cout << reversenum(789) << endl;

    cout << "after this" << endl;

    int x = 123456;

    int y;

    y = Ndigits(x);

    cout << y << endl;
    
}

void simplesquares(int n)
{
    if (n == 0)
        return; //base case
    simplesquares(n - 1);//
    cout << "The number " << n << " its square is = "<< n * n << " and the square root = " << sqrt(n) << endl;
    
}

bool palindrome(string word)
{
    if (word.length() == 2)
        return word[0] == word[1];
    if (word.length() == 1)
        return true;
    if (word[0] != word[word.length() - 1])
        return false;

    return palindrome(word.substr(1, word.length() - 2));

}

int fibbonacci(int f)
{
    if (f == 0)
        return 0;
    if (f == 1)
        return 1;
    return fibbonacci(f - 1) + fibbonacci(f - 2);
}

int reversenum(int m)
{
    int temp = m;
    int digitCount = 0;

    while (temp != 0) {
        temp /= 10;
        digitCount++;
    }

    if (m == 0) {
        return 0;
    }

    return reversenum(m / 10) + ((m % 10) * pow(10, digitCount - 1));
}

int Ndigits(int n)
{
    int digitcount = 0;


    while (n != 0) {
        n = n / 10;
        digitcount++;
    }
    return digitcount;
}

/*OUTPUT
The number 1 its square is = 1 and the square root = 1
The number 2 its square is = 4 and the square root = 1.41421
The number 3 its square is = 9 and the square root = 1.73205
The number 4 its square is = 16 and the square root = 2
The number 5 its square is = 25 and the square root = 2.23607
1
0
5
3
13
54321
987

*/
