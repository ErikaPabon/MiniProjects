// changeamount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
    using namespace std;

    int main()
    {
        double amountDue;// owed by customer
        double cashreceived; // cash received
        int change; //change to give 

        cout << "This program tells you how much money the customer should receive\n";
        cout << "Please enter amount due to customer: ";
        cin >> amountDue;// money to give back to client
        cout << "Please enter the dollar amount received\n";
        cin >> cashreceived; // customer input the amount of money

        change = amountDue* 100+.1;
        int dollar, quarter, dimes, nickels, pennies;


        dollar = change/100;
        quarter = change%100/25;
        dimes = change%100%25/10;
        nickels = change%100%25%10/5;
        pennies = change%100%25%10%5;

        cout << "Customer should receive: " << dollar << " dollars";
        cout << " and " << quarter << " quarters,\n ";
        cout << dimes << " dimes, " << nickels << " nickels, " << pennies << " cents.";
    }