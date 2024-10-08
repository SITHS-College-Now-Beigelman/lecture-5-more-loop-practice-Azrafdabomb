// Azraf Hossain
// Lecture 5
// 10.7.24

#include <iostream> // Required
#include <iomanip>
#include <iostream>

using namespace std; // Shortens Cout statments

main() // Function where the code runs
{
    cout << fixed << setprecision(2); // Sets all values FIXED to two decimal places
    double initalMoney; // defining and also setting values for a few variables
    double transac;
    double transacAmtDeb;
    double transacAmtCred;
    double totalDeb = 0;
    double totalCred = 0 ;
    int type;

    cout << "How much money did you have at the start of the day? How many transactions were done today?" << endl; // Prompting the user to set values for amount of money in bank and number of transactions
    cin >> initalMoney >> transac;

    int i = 0; // variable to counteract the amount of transactions in one day
    for (i = 1;i <= transac; i++) // for each time that the variable 'i' is less than or equal to the number of transactions, the following code will run

    { // because there is more than one line, squiggly brackets are required for proper syntax

        cout << "What type of transaction? [1 for Debit/2 for Credit];  What is the amount?" << endl; // prompting the user to select the type of transaction
        cin >> type;
        
        if (type == 1) // if the type selected is debit,
        { // squiggly
            cin >> transacAmtDeb; // prompt the user to input the amount,
            initalMoney = initalMoney - transacAmtDeb; // subtract that amount from the total amount of money in the bank account,
            totalDeb = totalDeb - transacAmtDeb; // and also decrement the amount from the total amount of debit so we can print it out later
        }

        else if (type == 2) // if the type selected is credit, 
        { // squiggly
            cin >> transacAmtCred; // propmt the user to input the amount,
            initalMoney = initalMoney + transacAmtCred; // add that amount to the total amount of money in the bank account,
            totalCred = totalCred + transacAmtCred; // and also increment the amount to the total amount of credit so we can print it out later
        }
    }

    // show the amount of money remaining in the bank account, the total amount of debit, and the total amount of credit.
    cout << showpoint << "Total Money Remaining: $" << initalMoney << " --- Total Amount of Debit: $"<< totalDeb << " --- Total Amount of Credit: $" << totalCred <<  endl;

    return 0;
}

/*
How much money did you have at the start of the day? How many transactions were done today?
100
2
What type of transaction? [1 for Debit/2 for Credit];  What is the amount?
1
10
What type of transaction? [1 for Debit/2 for Credit];  What is the amount?
2
300
Total Money Remaining: $390.00 --- Total Amount of Debit: $-10.00 --- Total Amount of Credit: $300.00
*/