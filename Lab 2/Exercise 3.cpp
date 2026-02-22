#include <iostream>
#include <cstring>
using namespace std;

class employee
{
private:
    char* firstname;
    string lastname;
    int monthlysalary;

public:
    employee()
    {
        firstname = new char[20];
        monthlysalary = 0;
    }

    void setdata(const char* fname, string lname, int salary)
    {
        strcpy(firstname, fname);
        lastname = lname;

        if (salary > 0)
            monthlysalary = salary;
        else
            monthlysalary = 0;
    }

    char* getfirstname() { return firstname; }
    string getlastname() { return lastname; }
    int getMonthlysalary() { return monthlysalary; }

    int yearlysalary()
    {
        return monthlysalary * 12;
    }

    void giveraise()
    {
        monthlysalary += monthlysalary * 0.10;
    }

    ~employee()
    {
        delete[] firstname;
    }
};
int main()
{
    employee e1, e2;
    e1.setdata("Ali", "Khan", 50000);
    e2.setdata("Sara", "Ahmed", 60000);
    cout << "Yearly Salary of Employee 1: " << e1.yearlysalary() << endl;
    cout << "Yearly Salary of Employee 2: " << e2.yearlysalary() << endl;
    e1.giveraise();
    e2.giveraise();
    cout << "\nAfter 10% Raise:\n";
    cout << "Yearly Salary of Employee 1: " << e1.yearlysalary() << endl;
    cout << "Yearly Salary of Employee 2: " << e2.yearlysalary() << endl;
    return 0;
}
