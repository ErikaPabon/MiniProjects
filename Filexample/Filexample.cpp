// Filexample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream outfile1;
    ofstream outfile2;

    outfile1.open("reports1.txt");
    outfile2.open("report2.txt");


    outfile1 << "Hello World!\n";
    outfile << "Hello World! -2 \n";


    outfile1 << "My second line" << endl;
    outfile2 << "My second line -2" << endl;

    sum = 0;
    for (int i = 0; i < 10; i++) {

    }
    outfile1.close();
    outfile2.close();

}
