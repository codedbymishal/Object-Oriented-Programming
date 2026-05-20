#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("hello.txt");// creates obj and opens hello.txt in read mode
    ofstream out("copyfile.txt"); // creates obj and creates/opens copyfile.txt in write mode

    char ch;

    while (in.get(ch)) {   // reads one character from file1.txt and stores it in ch. could use getline too
        out.put(ch);       //  Writes that character into copyfile.txt. So it copies character by character. 
    }

    cout << "File copied successfully!" << endl; // run program. It will NOT ask for input. It directly reads from hello.txt And creates copy.txt in same folder as this cpp file

    in.close();
    out.close();
    return 0;
}
