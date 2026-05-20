#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Person {
private:
    char name[50];
    int age;
public:
    Person() { } // def cons

    Person(const char n[], int a) { // para constructor
        strcpy(name,n);
        age = a;
    }
    void display()
    {
    	cout<<"Name: "<<name<<" Age: "<<age<<endl;
	}

};

int main() {
    Person person1("Ali", 27);

    // write to binary file
    ofstream out("person.bin", ios::binary); // create output file stream obj and open file in binary write mode. it will store data in raw binary format not text.
    if(!out){
        cout<<"File cannot open";
        return 0;
     }
    out.write((char*)&person1, sizeof(person1)); 
    // &person1 gets memory address of object
    // (char*)&person1 converts object address into byte address because write() only understands bytes
    // sizeof(person1) tells exactly how many bytes to copy into file

    out.close();

    // read from binary file
    Person p2; // create empty obj to hold data that has been read from file
    ifstream in("person.bin", ios::binary); // opens a file for reading in binary mode.
    if(!in){
        cout<<"File cannot open";
       return 0;
    }
    in.read((char*)&p2, sizeof(p2)); //reads raw bytes from file. puts them directly into p2. So p2 becomes identical to person1
    in.close();

    p2.display();
}
