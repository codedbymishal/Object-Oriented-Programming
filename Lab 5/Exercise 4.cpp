#include <iostream>
#include <string>
using namespace std;

// Base class: Item
class Item {
protected:
    string Name;
    int Quantity;

public:
    void setName(string n) { Name = n; }
    void setQuantity(int q) { Quantity = q; }

    string getName() { return Name; }
    int getQuantity() { return Quantity; }

    virtual double calculatePrice() { return 0; } // base class has no price
};

// Derived class: BakedGoods
class BakedGoods : public Item {
protected:
    double discount = 0.10; // 10% discount
};

// Derived class: Cakes
class Cakes : public BakedGoods {
private:
    double price = 600;

public:
    double calculatePrice() override {
        double total = price * Quantity;
        total -= total * discount; // apply 10% discount
        return total;
    }
};

// Derived class: Bread
class Bread : public BakedGoods {
private:
    double price = 200;

public:
    double calculatePrice() override {
        double total = price * Quantity;
        total -= total * discount; // apply 10% discount
        return total;
    }
};

// Derived class: Drinks
class Drinks : public Item {
private:
    double price = 100;
    double discount = 0.05; // 5% discount

public:
    double calculatePrice() override {
        double total = price * Quantity;
        total -= total * discount;
        return total;
    }
};

int main() {
    // Customer order
    Cakes cake;
    Bread bread;
    Drinks drink;

    int qty;
    string dummy; // for reading extra lines

    // Input for cakes
    cout << "Enter quantity of cakes: ";
    cin >> qty;
    cake.setQuantity(qty);

    // Input for bread
    cout << "Enter quantity of bread: ";
    cin >> qty;
    bread.setQuantity(qty);

    // Input for drinks
    cout << "Enter quantity of drinks: ";
    cin >> qty;
    drink.setQuantity(qty);

    // Calculate total
    double totalBill = cake.calculatePrice() + bread.calculatePrice() + drink.calculatePrice();

    cout << "\n--- Bill ---\n";
    cout << "Cakes: " << cake.getQuantity() << " pcs, Total: " << cake.calculatePrice() << endl;
    cout << "Bread: " << bread.getQuantity() << " pcs, Total: " << bread.calculatePrice() << endl;
    cout << "Drinks: " << drink.getQuantity() << " pcs, Total: " << drink.calculatePrice() << endl;
    cout << "------------------------\n";
    cout << "Grand Total: " << totalBill << endl;

    return 0;
}
