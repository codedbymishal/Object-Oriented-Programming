#include <iostream>
using namespace std;

class PasswordLengthException{ // create an exception class

    public:
    const char* what(){ // returns a pointer to error msg
      return "Password cannot have less then 6 characters";
    }
};

class PasswordDigitException{ // create another exception class
    public:
    const char* what(){
      return "Password must contain at least one digit";
    }
};

int main() {
   string userName,password;
   cout<<"Enter username: ";
   cin>> userName ;
   cout<<"Enter password: ";
   
   try{ //contains risky code that may cause an error
   	
        cin>> password;
        if(password.length()<6){
            PasswordLengthException e; // craetes an exception object
            throw e; // sends exception to catch block. 
        }

        int found = -1; // flag for digit
     
        for(int i=0; i<password.length(); i++){ //loop through pw
            if(password[i] >= 48 && password[i]<=57){ // check ascii of character 0-9
                found =1;
                break;
            }
        }
     
        if(found ==-1){ // no digit found
            PasswordDigitException e; // throw exception
            throw e;
        }
     
        cout << "Login Successfull!"<<endl; 
        cout << "Username: "<<userName <<endl << "Password: "<<password<<endl;
        
    } // try block end

    catch(PasswordLengthException &e){ // catches pwlength exception object only
        cout << e.what(); // calls function from thrown obj and prints msg
    }
    catch(PasswordDigitException &e){ //catches pw with no digits exception object only
        cout << e.what();
    }


    return 0;
}
