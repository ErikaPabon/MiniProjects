#include <iostream>

using namespace std;

void printStars(int n) {
    for (int i = 0; i < n;i++) {
        cout << "*"; // body of the star
    }

    cout << endl;
}

int main()
{
    int n = 0; // some user input
    n = 5;

    for (int i = 0; i < n; i++) {
        printStars(pow(2, i));
    }

    for (int i = n; i > 0; i--) {
        printStars(pow(2, i));
    }
}

//*
//**
//****
//********
//****************
//********************************
//****************
//********
//****
//**
//*