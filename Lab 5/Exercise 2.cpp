#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    string name;
    int age;
    string institute;

public:
    // setters
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void setInstitute(string i) { institute = i; }

    // getters
    string getName() { return name; }
    int getAge() { return age; }
    string getInstitute() { return institute; }
};

// ---------------- Humanities ----------------
class HumanitiesTeacher : public Teacher {
private:
    string department = "Humanities";
    string courseName;
    string designation;

public:
    void setCourseName(string c) { 
	    courseName = c; }
    void setDesignation(string d) {
	    designation = d; }

    void display() {
        cout << "\n--- Humanities Teacher ---\n";
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Institute: " << getInstitute() << endl;
        cout << "Department: " << department << endl;
        cout << "Course: " << courseName << endl;
        cout << "Designation: " << designation << endl;
    }
};

// ---------------- Science ----------------
class ScienceTeacher : public Teacher {
private:
    string department = "Science";
    string courseName;
    string designation;

public:
    void setCourseName(string c) { 
	   courseName = c; }
    void setDesignation(string d) { 
	   designation = d; }

    void display() {
        cout << "\n--- Science Teacher ---\n";
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Institute: " << getInstitute() << endl;
        cout << "Department: " << department << endl;
        cout << "Course: " << courseName << endl;
        cout << "Designation: " << designation << endl;
    }
};

// ---------------- Maths ----------------
class MathsTeacher : public Teacher {
private:
    string department = "Maths";
    string courseName;
    string designation;

public:
    void setCourseName(string c) { 
	   courseName = c; }
    void setDesignation(string d) {   
	   designation = d; }

    void display() {
        cout << "\n--- Maths Teacher ---\n";
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Institute: " << getInstitute() << endl;
        cout << "Department: " << department << endl;
        cout << "Course: " << courseName << endl;
        cout << "Designation: " << designation << endl;
    }
};

// ---------------- MAIN ----------------
int main() {
    HumanitiesTeacher h;
    ScienceTeacher s;
    MathsTeacher m;

    string name, institute, course, designation;
    
    int age;

    // Humanities Teacher Input
    cout << "Enter Humanities Teacher Details:\n";
    cout << "Name: "; 
	cin >> name;
    cout << "Age: "; 
	cin >> age;
    cout << "Institute: "; 
	cin >> institute;
    cout << "Course: "; 
	cin >> course;
    cout << "Designation: "; 
	cin >> designation;

    h.setName(name);
    h.setAge(age);
    h.setInstitute(institute);
    h.setCourseName(course);
    h.setDesignation(designation);

    // Science Teacher Input
    cout << "\nEnter Science Teacher Details:\n";
    cout << "Name: "; 
	cin >> name;
    cout << "Age: "; 
	cin >> age;
    cout << "Institute: "; 
	cin >> institute;
    cout << "Course: "; 
	cin >> course;
    cout << "Designation: "; 
	cin >> designation;

    s.setName(name);
    s.setAge(age);
    s.setInstitute(institute);
    s.setCourseName(course);
    s.setDesignation(designation);

    // Maths Teacher Input
    cout << "\nEnter Maths Teacher Details:\n";
    cout << "Name: "; 
	cin >> name;
    cout << "Age: "; 
	cin >> age;
    cout << "Institute: "; 
	cin >> institute;
    cout << "Course: "; 
	cin >> course;
    cout << "Designation: "; 
	cin >> designation;

    m.setName(name);
    m.setAge(age);
    m.setInstitute(institute);
    m.setCourseName(course);
    m.setDesignation(designation);

    // Display
    h.display();
    s.display();
    m.display();

    return 0;
}
