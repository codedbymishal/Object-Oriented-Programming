#include <iostream>
#include <set> // includes the set container
using namespace std;

int main() {

    set<string> guests; // set is the container, string is the type of data is stores and guests is the variable name.
    // it will store guest names
    
    string name; // stores each guest name
    char choice;

    do {
        cout << "Enter guest name: ";
        cin >> name;

        guests.insert(name);

        cout << "Do you want to add another guest? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    // Display unique guests
    cout << "\n--- Unique Guest List (Alphabetical Order) ---\n";

    for (const auto &g : guests) { // or use for (set<string>::iterator it = guests.begin(); it != guests.end(); it++) { cout << *it << endl;}
        cout << g << endl;
    }

    // Display count
    cout << "\nTotal unique guests: " << guests.size() << endl;

    return 0;
}
