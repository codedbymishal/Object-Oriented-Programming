#include <iostream>
#include <fstream>
using namespace std;

class Participant {
private:
    int id;
    string name;
    float score;
public:
	Participant(){
	}
	
	Participant(int id,string name,float score){
		this->id=id;
		this->name=name;
		this->score=score;
	}
	
    void Input() {
        ofstream out("participant.dat", ios::app); // create ofstream file obj and open file in append mode so new data is added EOF

        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Score: ";
        cin >> score;

        out << id << " " << name << " " << score << endl; // writes into file
        out.close(); // close file after writing
    }

    void Output() {
        int searchId;
        cout << "Enter ID to search: ";
        cin >> searchId;

        ifstream in("participant.dat"); // open file in read mode

        while (in >> id >> name >> score) { // reads each line til EOF or found
            if (id == searchId) {
                cout << "Found: " << id << " " << name << " " << score << endl; // if ids match show record of participant
                return;
            }
        }

        cout << "Not found!" << endl;
        in.close();
    }

    void Max() {
        ifstream in("participant.dat"); // openfile in read mode

        int maxId;
        string maxName;
        float maxScore = -1;

        while (in >> id >> name >> score) { // read each line/participant record
            if (score > maxScore) {
                maxScore = score;
                maxId = id;
                maxName = name;
            }
        }

        cout << "Highest Score: " << maxScore << endl;
        cout << "ID: " << maxId << " Name: " << maxName << endl;

        in.close();
    }
};

int main() {
    Participant p;

    int choice;

    do {
    	
        cout << "\n1. Input\n2. Search\n3. Max\n4. Exit\n";
        cout<<"Enter choice:";
        cin >> choice;

        switch (choice) {
            case 1: p.Input(); break;
            case 2: p.Output(); break;
            case 3: p.Max(); break;
        }

    } while (choice != 4);

    return 0;
}
