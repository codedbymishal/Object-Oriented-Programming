#include <iostream>
using namespace std;

class Person {
private:
    string name, occupation;

public:   
    Person(string occ){
        occupation = occ;
        name="unknown";
    }

    // Virtual function
    virtual void Draw() {
        cout << "A person can draw in many ways" << endl;
    }

    virtual ~Person() { } 
};


class Artist : public Person {
public:
    Artist() : Person("artist") { }

    void Draw() override{
        cout << "An artist can draw with a paint brush" << endl;
    }
};


class Gunman : public Person {
public:
    Gunman() : Person("gunman") { }

    void Draw() override{
        cout << "A gunman draws a gun to shoot" << endl;
    }
};

int main() 
{
    Person* arr[3];

    arr[0] = new Person("person");
    arr[1] = new Artist();
    arr[2] = new Gunman();

    for (int i = 0; i < 3; i++) {
        arr[i]->Draw();
    }

    // Free memory
    for (int i = 0; i < 3; i++) {
        delete arr[i];
    }

    return 0;
}