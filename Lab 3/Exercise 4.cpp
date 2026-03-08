
#include<iostream>
#include <string>
using namespace std;
class bookType{
	private:
		string title;
	    string authors[4];
     	string publisher;
     	string isbn;
     	float price;
     	int numofcopies;
     	int numofauthors;
    
    public:
    	
    	bookType() // default constructor
		{  
    		title="";
    		publisher="";
    		isbn="";
    		price=0.0;
    		numofcopies=0;
    		numofauthors=0;
		}
		~bookType() {} // destructor
		
		void setTitle(string t){
			title=t;
		}
		
     	string getTitle() const {
     		return title;	
		}
		 
		bool checkTitle(string t) const {
			if(t==title) return true;
			else return false;	
		}
		 
		void setCopies(int noc){
			numofcopies=noc;		
		}
		 	
		int getCopies() const {
			return numofcopies; 	
		}
		 
		void updateNumOfCopies(int c){
			numofcopies+=c;
		}
		
		void setISBN(string i){
			isbn=i;
		}
		
		string getISBN() const{
			return isbn;
		}
		
		bool checkISBN(string i){
			if (isbn==i) return true;
			else return false;
		}
		
		void setPrice(float p){
			price=p;
		}
		
		float getPrice() const{
			return price;
		}
		
		void setPublisher(string p){
			publisher=p;
		}
		
		string getPublisher() const{
			return publisher;
		}
		
		void setAuthors(string a[], int n){
			if(n>4) n=4;
			numofauthors=n;
			for(int i=0;i<n;i++)
			{
				authors[i]=a[i];
			}
		}
		void showAuthors() const {
			for (int i = 0; i < numofauthors; i++) 
			{
				cout << authors[i];
                if (i < numofauthors - 1)
                cout << ", ";
            }
            cout << endl;
    
		}
		void displayBook() const {
        cout << "\nTitle: " << title << endl;
        cout << "Authors: ";
        showAuthors();
        cout << "Publisher: " << publisher << endl;
        cout << "ISBN: " << isbn << endl;
        cout << "Price: " << price << endl;
        cout << "Copies in stock: " << numofcopies << endl;
    }
};
int main()
{

    bookType library[100];
    int totalBooks = 2;

   // Book 1
    string authors1[2] = {"Ali Khan", "Sara Ahmed"};
    library[0].setTitle("Object Oriented Programming");
    library[0].setAuthors(authors1, 2);
    library[0].setPublisher("Tech Press");
    library[0].setISBN("111-222");
    library[0].setPrice(550);
    library[0].setCopies(10);

    // Book 2
    string authors2[1] = {"John Smith"};
    library[1].setTitle("Data Structures");
    library[1].setAuthors(authors2, 1);
    library[1].setPublisher("Education House");
    library[1].setISBN("333-444");
    library[1].setPrice(450);
    library[1].setCopies(5);

    // Search by title
    string searchTitle = "Data Structures";
    for (int i = 0; i < totalBooks; i++) 
	{
        if (library[i].checkTitle(searchTitle)) 
		{
            cout << "\nBook found by title:";
            library[i].displayBook();
        }
    }

    // Search by ISBN
    string searchISBN = "111-222";
    for (int i = 0; i < totalBooks; i++) 
	{
        if (library[i].checkISBN(searchISBN)) 
		{
            cout << "\nBook found by ISBN:";
            library[i].displayBook();
        }
    }

    // Update copies
    library[0].updateNumOfCopies(5);
    cout << "\nAfter updating copies:";
    library[0].displayBook();

    return 0;
}
