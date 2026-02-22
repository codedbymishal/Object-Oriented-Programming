#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int roll_no;
    int semester;
    char section;

    void input()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> roll_no;
        cout << "Enter Semester: ";
        cin >> semester;
        cout << "Enter Section: ";
        cin >> section;
        cout << endl;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: CT-" << roll_no << endl;
        cout << "Semester: " << semester << endl;
        cout << "Section: " << section << endl;
        cout<<endl;
    }
};

int main()
{
    student s[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter data for student " << i + 1 << endl;
        s[i].input();
    }

    cout << "\nStudents belonging to Section A: "<<endl;
    for (int i = 0; i < 4; i++)
    {
        if (s[i].section == 'A' || s[i].section == 'a')
        {
        	   s[i].display();
		}
    }
    return 0;
}
