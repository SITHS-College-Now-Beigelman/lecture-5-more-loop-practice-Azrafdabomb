// Azraf Hossain
// Lecture 5
// 10.7.24

#include <iostream> // Required
#include <iomanip>
#include <iostream>

using namespace std; // Shortens Cout statments



main(){

    double initalMoney;
    double transac;
    double transacAmtDeb;
    double transacAmtCred;
    double totalDeb = 0;
    double totalCred = 0 ;
    int type;

    cout << "How much money did you have at the start of the day? How many transactions were done today?" << endl;
    cin >> initalMoney >> transac;

    int i = 0;
    for (i = 1;i <= transac; i++)
    {
        cout << "What type of transaction? [1 for Debit/2 for Credit];  What is the amount?" << endl;

        cin >> type;
        
        if (type == 1)
        {
            cin >> transacAmtDeb;
            initalMoney = initalMoney - transacAmtDeb;
            totalDeb = totalDeb - transacAmtDeb;
        }

        else if (type == 2)
        {
            cin >> transacAmtCred;
            initalMoney = initalMoney + transacAmtCred;
            totalCred = totalCred + transacAmtCred;
        }
        cout << initalMoney << totalDeb << endl;
    }
    return 0;
}
