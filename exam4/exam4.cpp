// exam4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


void ConvertFromSeconds(int totalSec, double* secs, int* mins, int* hrs)
{
    *hrs = totalSec / 3600; 
    totalSec = totalSec % 3600;
    *mins = totalSec / 60;
    totalSec = totalSec % 60;
    *secs = totalSec; 
}

int main()
{
    
    int totalSec;
    double secs;
    int mins, hrs;

    cout << "This program converts time given in seconds into hours, minutes and seconds, please enter seconds: " << endl;
    cin >> totalSec;

    ConvertFromSeconds(totalSec, &secs, &mins, &hrs); 

   
    cout << "When Seconds are = " << totalSec << ", Hrs = " << hrs << ", Mins = " << mins << ", Secs = " << secs << endl;

}
/*
This program converts time given in seconds into hours, minutes and seconds, please enter seconds:
3456
When Seconds are = 3456, Hrs = 0, Mins = 57, Secs = 36
*/


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
