#include <iostream>
using namespace std;

class Base {
private:
    int privateInt; // only accessible inside Base
protected:
    int protectedInt; // accessible inside Base and derived classes
public:
    int publicInt; // accessible anywhere
    
    // use setters and getters to safely access private/protected variables
    // setters
    void setPrivateInt(int val) {
    	privateInt = val; }
    void setProtectedInt(int val) {
	    protectedInt = val; }
    void setPublicInt(int val) {
	    publicInt = val; }

    // getters
    int getPrivateInt() { 
    	return privateInt; }
    int getProtectedInt() { 
	    return protectedInt; }
    int getPublicInt() { 
	    return publicInt; }
};

// public inheritance
class publicChild : public Base {
public:
    void access() {
        // privateInt=10; // can't be accessed directly   
        protectedInt = 20; // stays protected so accessible in child
        publicInt = 30;    // stays public so accessible anywhere
        cout << "PublicChild : protectedInt: " << protectedInt << ", publicInt: " << publicInt << endl;
        
        setPrivateInt(10); //added: we can also set privateint thru getter setter of base
        cout<<"privateInt: "<<getPrivateInt()<<endl; //added
    }
};

// Protected Inheritance
class protectedChild : protected Base {
public:
    void access() {
        protectedInt = 40; // accessible               
        publicInt = 50;    // accessible but now protected
        // publicInt and protectedInt both become protected in child. Outside code cannot access them directly, only through childclass' methods.
        cout << "ProtectedChild: protectedInt: " << protectedInt << ", publicInt: " << publicInt << endl;
    }
    // to access privateInt: 
    void setPrivate(int val) { 
	    setPrivateInt(val); }
    int getPrivate() { 
	    return getPrivateInt(); }
};

// Private Inheritance
class privateChild : private Base {
public:
    void access() {
        protectedInt = 60; // accessible
        publicInt = 70;    // accessible but now private
        // Both publicInt and protectedInt become private in child. Cannot be accessed outside child class, only inside its methods.
        cout << "PrivateChild : protectedInt: " << protectedInt << ", publicInt: " << publicInt << endl;
    }
    // to access privateInt in main:
    void setPrivate(int val) { 
     	setPrivateInt(val); }
    int getPrivate() { 
        return getPrivateInt(); }
};

int main() {
    publicChild pc; // publicChild inherits from Base using public inheritance
    
    
    pc.setPrivateInt(10);      // can access via setter
    pc.access(); // prints only what the child can directly access
    cout << "PublicChild : privateInt via getter: " << pc.getPrivateInt() << endl; // prints private member through getter, since direct access is not allowed

    protectedChild prc; // protectedChild inherits Base with protected inheritance  
    prc.setPrivate(15);     // access private via setter
    prc.access();
    cout << "ProtectedChild : privateInt via getter: " << prc.getPrivate() << endl;
   
    privateChild pvc; //privateChild inherits privately
    pvc.setPrivate(20);     // access private via setter
    pvc.access(); // prints protectedInt and publicInt values assigned in child
    cout << "PrivateChild -> privateInt via getter: " << pvc.getPrivate() << endl; //prints 20

    return 0;
}
