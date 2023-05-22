// date.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int getDate(int*, int*, int*);

int main()
{
    int day, month, year = 0;

    getDate(&day, &month, &year);//grab the memory address of those variables

    cout << "Day = " << day << endl;

    cout << "Month = " << month << endl;

    cout << "Year = " << year << endl;
}

int getDate(int* dptr, int* mptr, int* yptr) //
{
    string date;

    int day = 0;
    int year = 0;

    cout << "Please enter a date in the following format dd-mmm-yyyy, ie. 10-Apr-2021 ";
    cin >> date;//dd(0,1) -(2) /// mmm(3,4,5) -(6) //// yyyy(7,8,9,10)


    for (int i = 0; i < 2; i++) {

        day = day * 10 + (date[i] - 48);
    }
        *dptr = day;

    for (int i = 7; i < 11; i++) {

        year = year * 10 + (date[i] - 48);
    }

        *yptr = year;

        for (int i = 3; i < 6; i++) {

            date.substr(3, 3);
        }
        string month = date.substr(3, 3);

        if (month == "Jan" || month == "JAN")
            *mptr = 1;
        else if (month == "FEB" || month == "Feb")
            *mptr = 2;
        else if (month == "MAR" || month == "Mar")
            *mptr = 3;
        else if (month == "APR" || month == "Apr")
            *mptr = 4;
        else if (month == "MAY" || month == "May")
            *mptr = 5;
        else if (month == "JUN" || month == "Jun")
            *mptr = 6;
        else if (month == "JUL" || month == "Jul")
            *mptr = 7;
        else if (month == "AUG" || month == "Aug")
            *mptr = 8;
        else if (month == "SEP" || month == "Sep")
            *mptr = 9;
        else if (month == "OCT" || month == "Oct")
            *mptr = 10;
        else if (month == "NOV" || month == "Nov")
            *mptr = 11;
        else if (month == "DEC" || month == "Dec")
            *mptr = 12;

        return *mptr;
}

/* OUTPUT
Please enter a date in the following format dd-mmm-yyyy, ie. 10-Apr-2021 10-OCT-1992
Day = 10
Month = 10
Year = 1992

Get Date
Write a function getDate(int* dptr, int* mptr, int* yptr) that
prompts the user to enter the date as a string in the form dd - mmm - yyyy(for example, 05 -
    Apr - 2103) and returns these values through iptr, mptr, and yptr.
    Test your program using the main program.*/