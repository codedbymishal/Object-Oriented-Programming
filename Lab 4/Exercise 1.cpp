#include <iostream>
#include <cstring>
using namespace std;

class Employee {
private:
    char* EmployeeName;  //DMA
    const int EmployeeId;   // cannot be changed after initialization

public:
    
    Employee(const char* name, int id) : EmployeeId(id) { // Constructor using member initializer list. MIL runs only once when object is created
        EmployeeName = new char[strlen(name) + 1]; // id cant be initliazed here
        strcpy(EmployeeName, name);
    }


    
    const char* getName() const { // Getter for Name
        return EmployeeName;
    }

    
    int getId() const { // Getter for ID but no Setter
        return EmployeeId; 
    }

    
    void setName(const char* name) { // Setter for Name works after object is created
        delete[] EmployeeName; // free old memory to prevent memory leak
        EmployeeName = new char[strlen(name) + 1];
        strcpy(EmployeeName, name);
    }
    
    ~Employee() { // Destructor
        delete[] EmployeeName;
    }

};

int main() 
{
	
    Employee Employee1("Hassan", 101);
    Employee Employee2("Mishal", 102);
    Employee Employee3("Ali", 103);

    Employee1.setName("ABC hello");

    cout << Employee1.getName() << " - " << Employee1.getId() << endl;
    cout << Employee2.getName() << " - " << Employee2.getId() << endl;
    cout << Employee3.getName() << " - " << Employee3.getId() << endl;

    return 0;
}
