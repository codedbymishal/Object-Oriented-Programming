#include <iostream>
using namespace std;

class bankaccount
{
private:
    float balance;
    int transactions;

public:
    bankaccount()
    {
        balance = 0;
        transactions = 0;
    }
    void deposit(float amount)
    {
        balance = balance + amount;
        cout<<"amont deposited"<<endl;
        transactions++;
    }
    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout<<"amount withdrawn"<<endl;
            transactions++;
        }
        else
            cout << "Insufficient Balance!\n";
    }
    void displaybalance()
    {
        cout << "Current Balance: " << balance << endl;
    }
    void displaytransactions()
    {
        cout << "Number of Transactions: " << transactions << endl;
    }
    void displayinterest()
    {
        double interest = balance * 0.05; 
        cout << "Interest Earned: " << interest << endl;
    }
};
int main()
{
    bankaccount acc;
    int choice;
    float amount;
    do // displays menu atleast once
    {
        cout << "\nMENU:"<<endl;
        cout << "1. Display Balance"<<endl;
        cout << "2. Display Transactions"<<endl;
        cout << "3. Display Interest"<<endl;
        cout << "4. Deposit"<<endl;
        cout << "5. Withdraw"<<endl;
        cout << "6. Exit"<<endl;
        cout << "Enter choice: "<<endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            acc.displaybalance();
            break;
        case 2:
            acc.displaytransactions();
            break;
        case 3:
            acc.displayinterest();
            break;
        case 4:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            acc.deposit(amount);
            break;
        case 5:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            acc.withdraw(amount);
            break;
        case 6:
            cout << "Exiting program!"<<endl;
            break;
        default:
            cout << "Invalid choice!"<<endl;
        }
    } while (choice != 6);
    return 0;
}
