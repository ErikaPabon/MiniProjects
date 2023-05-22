#include <iostream>
using namespace std;

int main()
{
    double amount;
    double paid;
    int change;

    cout << "This program tells you the dollars you will receive after pay\n";
    cout << "Please enter amount due: ";
    cin >> amount;
    cout << "Please enter the dollar amount you are using to pay\n";
    cin >> paid;

    int cents = (int)(amount * 100);
    int q = cents / 25;
    cents = cents % 25;
    int d = cents / 10;
    cents = cents % 10;
    int n = cents / 5;
    cents = cents % 5;
    int p = cents;
    change = amount / cents;

    cout << "Change is iqual to:" << change << endl;
    cout << "and " << cents << endl ;
}