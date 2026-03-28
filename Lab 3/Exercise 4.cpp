#include <iostream>
#include <string>
using namespace std;

class bookType
{
private:
    string title;
    string authors[4];
    int numAuthors;
    string publisher;
    string ISBN;
    double price;
    int copiesInStock;

public:
    // Constructor
    bookType()
    {
        title = "";
        numAuthors = 0;
        publisher = "";
        ISBN = "";
        price = 0.0;
        copiesInStock = 0;
    }

    // --- Title ---
    void setTitle(string t)
    {
        title = t;
    }

    string getTitle()
    {
        return title;
    }

    bool checkTitle(string t)
    {
        return (title == t);
    }

    // --- Authors ---
    void setAuthors(string a[], int n)
    {
        numAuthors = n;
        for (int i = 0; i < n; i++)
            authors[i] = a[i];
    }

    void showAuthors()
    {
        for (int i = 0; i < numAuthors; i++)
            cout << authors[i] << endl;
    }

    // --- Publisher ---
    void setPublisher(string p)
    {
        publisher = p;
    } // check??

    string getPublisher()
    {
        return publisher;
    }

    // --- ISBN ---
    void setISBN(string i)
    {
        ISBN = i;
    }

    string getISBN()
    {
        return ISBN;
    }

    bool checkISBN(string i)
    {
        return (ISBN == i);
    }

    // --- Price ---
    void setPrice(double p)
    {
        price = p;
    }

    double getPrice()
    {
        return price;
    }

    // --- Copies ---
    void setCopies(int c)
    {
        copiesInStock = c;
    }

    int getCopies()
    {
        return copiesInStock;
    }

    void updateCopies(int c)
    {
        copiesInStock += c;
    }

    // --- Display ---
    void display()
    {
        cout << "\nTitle: " << title << endl;
        cout << "Authors: "<<endl;
        showauthors();
        cout << "Publisher: " << publisher << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Price: " << price << endl;
        cout << "Copies: " << copiesInStock << endl;
    }
};
int main()
{
    bookType books[100]; // lib has 100 books

    // Example: Enter data for 2 books
    for (int i = 0; i < 2; i++)
    {
        string title, publisher, isbn;
        double price;
        int copies, n;

        cout << "\nEnter title: ";
        cin >> title;
        books[i].setTitle(title);

        cout << "Enter number of authors (max 4): ";
        cin >> n;

        string a[4];
        for (int j = 0; j < n; j++)
        {
            cout << "Enter author " << j + 1 << ": ";
            cin >> a[j];
        }
        books[i].setAuthors(a, n);

        cout << "Enter publisher: ";
        cin >> publisher;
        books[i].setPublisher(publisher);

        cout << "Enter ISBN: ";
        cin >> isbn;
        books[i].setISBN(isbn);

        cout << "Enter price: ";
        cin >> price;
        books[i].setPrice(price);

        cout << "Enter copies: ";
        cin >> copies;
        books[i].setCopies(copies);
    }

    // Search by Title
    string searchTitle;
    cout << "\nEnter title to search: ";
    cin >> searchTitle;

    for (int i = 0; i < 2; i++)
    {
        if (books[i].checkTitle(searchTitle))
        {
            cout << "\nBook Found:";
            books[i].display();
        }
    }

    //Search by ISBN
    string searchISBN;
    cout << "\nEnter ISBN to search: ";
    cin >> searchISBN;

    for (int i = 0; i < 2; i++)
    {
        if (books[i].checkISBN(searchISBN))
        {
            cout << "\nBook Found:";
            books[i].display();
        }
    }

    //  Update Copies 
    string updateISBN;
    int newCopies;

    cout << "\nEnter ISBN to update copies: ";
    cin >> updateISBN;

    for (int i = 0; i < 2; i++)
    {
        if (books[i].checkISBN(updateISBN))
        {
            cout << "Enter number of copies to add: ";
            cin >> newCopies;
            books[i].updateCopies(newCopies);
            cout << "Updated Book:";
            books[i].display();
        }
    }

    return 0;
}
