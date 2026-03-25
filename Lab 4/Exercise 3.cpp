#include <iostream>
using namespace std;

class Account {
private:
    int account_no;
    double account_bal;
    int security_code;
    static int objectCount;   // static variable to count objects

public:
    // function to initialize data
    void setData(int no, double bal, int code) {
        account_no = no;
        account_bal = bal;
        security_code = code;
    }

    // function to display data
    void displayData() const {
        cout << "\nAccount No: " << account_no << endl;
        cout << "Balance: " << account_bal << endl;
        cout << "Security Code: " << security_code << endl;
        cout << "------------------------\n" << endl;
    }

    // constructor to increase object count
    Account() { //every time Account acc; runs, an object is created and this constructor runs automatically to increment count
        objectCount++;
    }

    // static function to display total objects
    static void showObjectCount() {
        cout << "Total Accounts Created: " << objectCount << endl;
    }
};

// definition of static variable outside class always
int Account::objectCount = 0;

int main() 
{

    Account acc1, acc2, acc3;

    acc1.setData(101, 50000.50, 1234);
    acc2.setData(102, 75000.75, 5678);
    acc3.setData(103, 90000.00, 9101);

    acc1.displayData();
    acc2.displayData();
    acc3.displayData();

    Account::showObjectCount();

    return 0;
}
