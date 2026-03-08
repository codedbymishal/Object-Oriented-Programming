#include <iostream>
using namespace std;

class tollbooth {
private:
    int totalcars;
    double totalcash;

public:
    
    tollbooth() // default constructor
	{
        totalcars = 0;
        totalcash = 0.0;
    }

    // Function to register a paying car
    void addcar() 
	{
        totalcars++;
        totalcash += 0.50;
    }

    // Function to show totals
    void showtotals() const 
	{
        cout << "\nCars Passed: " << totalcars << endl;
        cout << "Cash Collected: $" << totalcash << endl;
    }
};

int main() 
{
    tollbooth t;
    int choice = 0;

    cout << "\n\t\t\t\t\t\t ===Toll Booth System===\n";

    
    while (choice != 3) 
	{
        cout << "\n1. Add Paying Vehicle\n";
        cout << "2. Show Totals\n";
        cout << "3. Quit\n";
        cout << "Enter your option: 1/2/3: ";
        cin >> choice;

        if (choice == 1) 
		{
            t.addcar();
            cout << "Vehicle recorded. $0.50 added.\n";
        } 
		else if (choice == 2) 
		{
            t.showtotals();
        } 
		else if (choice == 3) 
		{
            cout << "Goodbye!\n";
        } 
		else 
		{
            cout << "Invalid option. Try again.\n";
        }
    }
    return 0;
}
