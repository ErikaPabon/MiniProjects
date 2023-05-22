// change2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
    using namespace std;

    int main()
    {
        double amountDue;
        double amountpaid;
        int paidamount;
        int dollar, quarter, dimes, nickels, pennies;

        cout << "This program tells you the dollars you will receive after pay\n";
        cout << "Please enter amount due: ";
        cin >> amountDue;
        cout << "Please enter the dollar amount you are using to pay\n";
        cin >> amountpaid;

        int paidamount = (int)(amountpaid * 100);

        int dollar = paidamount / 100;
        dollar = paidamount % 25;
        int quarter = paidamount / 25;
        quarter = paidamount % 25;
        int dime = paidamount / 10;
        dime = paidamount % 10;
        int nickels = paidamount / 5;
        nickels = paidamount % 5;
        int pennies = paidamount / 1;
        pennies = paidamount % 1;

        cout << "Change is: " << dollar << "dollars";
        cout << "and " << quarter << "quarters, " << dime << "dimes, " << nickels << "nickels, " << pennies << "cents." << ;
}