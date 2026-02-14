#include <iostream>
using namespace std;

int main()
{
    double balance = 200000;
    double withdraw;
    char acctype;
    string accnumber;

    cout << "Enter account type (S for Savings / C for Current): ";
    cin >> acctype;

    cout << "Enter account number: ";
    cin >> accnumber;

    cout << "Enter amount to withdraw: ";
    cin >> withdraw;

    // Withdrawal limit check
    if (withdraw > 100000)
    {
        cout << "You cannot withdraw more than 100,000 at a time!" << endl;
        return 0;
    }

    double fee = 0;
    double tax = 0;

    if (acctype == 'S' || acctype == 's')
    {
        fee = 0.02 * withdraw;

        if (withdraw > 50000)
        {
            tax = 0.05 * withdraw;
        }
    }
    else if (acctype == 'C' || acctype == 'c')
    {
        fee = 100;

        if (withdraw > 50000)
        {
            tax = 0.05 * withdraw;
        }
    }
    else
    {
        cout << "Invalid account type!" << endl;
        return 0;
    }

    double totalDeduction = withdraw + fee + tax;

    // Balance check
    if (totalDeduction > balance)
    {
        cout << "Not enough balance!" << endl;
        return 0;
    }

    balance -= totalDeduction;

    cout << "\n--- Transaction Details ---" << endl;
    cout << "Withdrawn Amount: " << withdraw << endl;
    cout << "Fee: " << fee << endl;
    cout << "Tax: " << tax << endl;
    cout << "Total Deducted: " << totalDeduction << endl;
    cout << "Remaining Balance: " << balance << endl;

    return 0;
}
