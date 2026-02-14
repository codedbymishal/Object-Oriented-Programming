#include<iostream>
using namespace std;


void calculateResult(int rollno, float ldst, float oop, float cag, float pst, float ds)
{
    float total, percentage;

    total = ldst + oop + cag + pst + ds;
    percentage = (total / 500) * 100;

    cout << "\nRoll Number: CT- " << rollno << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
}

int main()
{
    int rollno;
    float ldst, oop, cag, pst, ds;

    cout << "Enter your roll number: ";
    cin >> rollno;

    cout << "Enter your marks in the following subjects:" << endl;
    cout << "LDST: ";
    cin >> ldst;
    cout << "OOP: ";
    cin >> oop;
    cout << "CAG: ";
    cin >> cag;
    cout << "PST: ";
    cin >> pst;
    cout << "DS: ";
    cin >> ds;

    calculateResult(rollno, ldst, oop, cag, pst, ds);

    return 0;
}
