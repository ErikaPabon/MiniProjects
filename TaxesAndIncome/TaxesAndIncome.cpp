#include <iostream>
using namespace std;

int main()
{
    double deduction, deduction1, deduction2, deduction3, deduction3_5, deduction4;//incomeaftertax
    double taxable, taxable1, taxable2, taxable3, taxable3_5, taxable4;//amountdeducted
    double income;//incomebeforetax

    double rate0, rate1, rate2, rate3, rate3_5, rate4;
    double TOTALTAX;
    double initialamount;

    cout << "Please enter your income and I will calculate your income after deductions and deducted amount: ";
    cin >> income;

    rate0 = 0.0;
    rate1 = 0.1;
    rate2 = 0.2;
    rate3 = 0.3;
    rate3_5 = 0.35;
    rate4 = 0.4;

    initialamount = income - 30000.00;
    taxable1 = 20000.00 * rate1;
    taxable2 = 50000.00 * rate2;
    taxable3 = 100000.00 * rate3;
    taxable3_5 = 50000.00 * rate3_5;


    if (income <= 30000.00)
    {
        deduction = income * rate0;
        cout << " Your initial amount is: " << income << ", your amount after deductions is: " << deduction << ", and,  your total deductions are: " << rate0 << endl;
    }
    else if (income >= 30000.01 && income <= 50000.00)
    {
        taxable = initialamount * rate1;
        deduction1 = income - taxable;
        TOTALTAX = taxable;
        cout << " Your initial amount is: " << initialamount << ", your amount after deductions is: " << deduction1 << ", and,  your total deductions are: " << TOTALTAX << endl;
    }
    else if (income >= 50000.01 && income <= 100000.00)//1st 30000*0, 2nd 20000*0.1, 3r part*0.2
    {
        taxable2 = (initialamount - 20000.00) * rate2;
        deduction2 = income - taxable1 - taxable2;
        TOTALTAX = taxable1 + taxable2;
        cout << "Your initial amount is: " << initialamount << ", your amount after deductions is: " << deduction2 << ", and,  your total deductions are: " << TOTALTAX<< endl;
    }
    else if (income >= 100000.01 && income <= 200000.00)
    {
        taxable3 = (initialamount - 70000.00) * rate3;
        deduction3 = income - taxable1 - taxable2 - taxable3;
        TOTALTAX = taxable1 + taxable2 + taxable3;
        cout << "Your initial amount is: " << initialamount << ", your amount after deductions is: " << deduction3<< ", and, your total deductions are: " << TOTALTAX << endl;
    }
    else if (income >= 200000.01 && income <= 250000.00)
    {
        taxable3_5 = (initialamount - 170000.00) * rate3_5;
        deduction3_5 = income - taxable1 - taxable2 - taxable3 - taxable3_5;
        TOTALTAX = taxable1 + taxable2 + taxable3 + taxable3_5;

        cout << "Your initial amount is: " << initialamount << ", your amount after deductions is: " << deduction3_5 << ", and, your total deductions are: " << TOTALTAX << endl;
    }
    else if (income >= 250000.01)
    {
        taxable4 = (initialamount - 220000.00) * rate4;
        deduction4 = income - taxable1 - taxable2 - taxable3 - taxable3_5 - taxable4;
        TOTALTAX = taxable1 + taxable2 + taxable3 + taxable3_5 + taxable4;

        cout << "Your initial amount is: " << initialamount << ", your amount after deductions is: " << deduction4 << ", and, your total deductions are: " << TOTALTAX << endl;
    }
}

//Please enter your income and I will calculate your income after deductions and deducted amount: 220000
//Your initial amount is : 190000, your amount after deductions is : 171000, and, your total deductions are : 49000

//C : \Users\eriik\source\repos\TaxesAndIncome\Debug\TaxesAndIncome.exe(process 18548) exited with code 0.
//Press any key to close this window . . .

