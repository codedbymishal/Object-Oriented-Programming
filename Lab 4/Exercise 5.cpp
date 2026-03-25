#include <iostream>
#include <string>
using namespace std;

class HotelCustomer {
private:
    string customerName;
    int daysStayed;
    static const double dailyRent; // rent per day cant be modified and is shared by all objects

public:
    // constructor to initialize customer
    HotelCustomer(string name, int days) {
        customerName = name;
        daysStayed = days;
    }

    
    double calculateRent() const {  // cant store in variable or change values can only directly return
        
        if (daysStayed > 7)
            return (daysStayed - 1) * dailyRent;
        else
            return daysStayed * dailyRent;
    }

    
    void display() const {
        cout << "\nCustomer Name: " << customerName << endl;
        cout << "Days Stayed: " << daysStayed << endl;
        cout << "Rent: $" << calculateRent() << endl; // can only call const functions
        cout << "----------------------" << endl;
    }
};

// define static const rent per day outside class always
const double HotelCustomer::dailyRent = 1000.85;

int main() {
	
    // create customer objects
    HotelCustomer cust1("Mishal", 5);  // Normal rent
    HotelCustomer cust2("Abc", 10);   // Discounted rent

    // display their rent details
    cust1.display();
    cust2.display();

    return 0;
}
