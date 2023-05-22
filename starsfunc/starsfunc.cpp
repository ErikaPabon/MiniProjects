// starsfunc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int stars(char);
//void stars2(int);
int stars2(char);
int stars4(char);
int stars8(char);
int stars16(char);
int stars32(char);
int stars64(char);

int main()
{
    int i;

    i = 0;

    stars(i);
    cout << endl;
    stars2(i);
    cout << endl;
    stars4(i);
    cout << endl;
    stars8(i);
    cout << endl;
    stars16(i);
    cout << endl;
    stars32(i);
    cout << endl;
    stars64(i);
    cout << endl;
}

int stars(char f)
{
    cout << "*";
    return f;
}
int stars2(char a)
{
    stars(a);
    stars(a);
    return a;
}
int stars4(char num)
{
    stars2(num);
    stars2(num);
    return num;
}
int stars8(char num)
{
    stars4(num);
    stars4(num);
    return num;
}
int stars16(char num)
{
    stars8(num);
    stars(num);
    return num;
}
int stars32(char num)
{
    stars16(num);
    stars16(num);
    return num;
}
int stars64(char num)
{
    stars32(num);
    stars32(num);
    return num;
}


//output
//*
//**
//****
//********
//*********
//******************
//***********************************