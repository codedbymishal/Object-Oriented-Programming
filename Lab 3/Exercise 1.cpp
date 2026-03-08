#include <iostream>
using namespace std;

class complexnumber {
private:
    int* real;
    int* imag;

public:
    
    complexnumber(int r = 0, int i = 0) // Parameterized constructor
	{
        real = new int(r);
        imag = new int(i);
    }

    complexnumber(const complexnumber& obj) // Copy constructor (deep copy)
	{
        real = new int(*obj.real);
        imag = new int(*obj.imag);
        cout << "Copy constructor called!" << endl;
    }
    
    void display() const // Function to display complex number
	{
        cout << *real << " + " << *imag << "i" << endl;
    }
    
    void setreal(int r) // fucntion to modify real part
	{
        *real = r;
    }
    
    ~complexnumber() // Destructor
	{
        delete real;
        delete imag;
    }
};

int main() 
{
   
    complexnumber c1(5, 3);
    cout << "\n\nOriginal object: ";
    c1.display();

    complexnumber c2 = c1;
    cout << "Copied object: ";
    c2.display();

   
    c2.setreal(2);
    cout << "\nAfter changing copied object:" << endl;
    cout << "Original object: ";
    c1.display();  // remains unchanged
    cout << "Copied object: ";
    c2.display();  // changed

    return 0;
}
