#include <iostream>
using namespace std;

class BankAccount {
private:
    int account_no;
    double balance;
    static const double interestRate; // constant interest rate. static: shared by all objects, so interest rate is same for all accounts and cant be modified

public:
    // constructor to initialize account
    BankAccount(int acc_no, double bal) {
        account_no = acc_no;
        balance = bal;
    }

    // function to calculate interest
    double calculateInterest() const { //const function does not modify any object data members
        return balance * interestRate;
    }

    // display account info
    void display() const {
        cout << "\n\nAccount No: " << account_no << endl;
        cout << "Balance: $" << balance << endl;
        cout << "Interest: $" << calculateInterest() << endl;
        cout << "----------------------\n" << endl;
    }
};

// define static const variable outside class always
const double BankAccount::interestRate = 0.05; // 5% interest

int main() { // create two accounts
    BankAccount acc1(101, 1000);
    BankAccount acc2(102, 2500);
    // display their info
    acc1.display();
    acc2.display();

    // uncommenting next line will cause compiletime error error because interestRate is const
    // BankAccount::interestRate = 0.06;
   
    return 0;
}
