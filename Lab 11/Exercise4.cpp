#include <iostream>
#include <map>
using namespace std;

class StudentManager {
private:
    map<string, int> students;   // name -> grade

public:

    // ADD student
    void addStudent() {
        string name;
        int grade;

        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter grade: ";
        cin >> grade;

        students[name] = grade; // adds a student to map

        cout << "Student added successfully!\n";
    }

    // DISPLAY all students
    void displayAll() {
        if (students.empty()) {
            cout << "No students found.\n";
            return;
        }

        cout << "\n--- Student List ---\n";
        for (auto &pair : students) {
            cout << "Name: " << pair.first << " | Grade: " << pair.second << endl;
        }
    }

    // RETRIEVE grade
    void retrieve() {
        string name;
        cout << "Enter student name to search: ";
        cin >> name;

        if (students.find(name) != students.end()) { // searches for key/name if found returns iterator to it
            cout << "Grade of " << name << " is " << students[name] << endl; // prints grade
        }
        else {
            cout << "Student not found!\n";
        }
    }

    // UPDATE grade
    void update() { 
        string name;
        cout << "Enter student name to update: ";
        cin >> name;

        auto it = students.find(name); // searches for student in map using key/name

        if (it != students.end()) { // if student found
            int newGrade;
            cout << "Enter new grade: ";
            cin >> newGrade;

            it->second = newGrade;// it->first if for name and second is for grade

            cout << "Grade updated successfully!\n";
        }
        else {
            cout << "Student not found!\n";
        }
    }

    // DELETE student
    void removeStudent() {
        string name;
        cout << "Enter student name to delete: ";
        cin >> name;

        if (students.erase(name)) {
            cout << "Student deleted successfully!\n";
        }
        else {
            cout << "Student not found!\n";
        }
    }
};

int main() {

    StudentManager sm;
    int choice;

    do {
        cout << "\n===== STUDENT MENU =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Retrieve Grade\n";
        cout << "4. Update Grade\n";
        cout << "5. Delete Student\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                sm.addStudent();
                break;

            case 2:
                sm.displayAll();
                break;

            case 3:
                sm.retrieve();
                break;

            case 4:
                sm.update();
                break;

            case 5:
                sm.removeStudent();
                break;

            case 0:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}
