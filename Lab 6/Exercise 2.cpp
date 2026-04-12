#include <iostream>
using namespace std;

class Calculator {
private:
    int num1, num2, num3;

public:
   
    // Constructor with user input
    Calculator() {
        cout << "Enter three numbers:\n";
        cin >> num1 >> num2 >> num3;
    }

    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    int multiply(int a, int b, int c) {
        return a * b * c;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    float divide(int a, int b) {
    	if(b!=0)
        return (float)a / b;
        else cout<<"Division by zero not possible!"<<endl;
    }

	    
	void display(){
		cout<<"\nAddition of two numbers: "<<num1<<"+"<<num2<<"="<<add(num1,num2)<<endl;
		cout<<"Addition of three numbers: "<<num1<<"+"<<num2<<"+"<<num3<<"="<<add(num1,num2,num3)<<endl;
		cout<<"\nMultiplication of two numbers: "<<num1<<"*"<<num2<<"="<<multiply(num1,num2)<<endl;
		cout<<"Multiplication of three numbers: "<<num1<<"*"<<num2<<"*"<<num3<<"="<<multiply(num1,num2,num3)<<endl;
		cout<<"\nSubtraction of two numbers: "<<num1<<"-"<<num2<<"="<<subtract(num1,num2)<<endl;
		cout<<"\nDivision of two numbers: "<<num1<<"/"<<num2<<"="<<divide(num1,num2)<<endl;
	}
};

int main() {
	
    Calculator c; // input happens here
    c.display();
}