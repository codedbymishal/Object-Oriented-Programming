#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    // length
    cout << "Length: " << str.length() << endl;

    // write to file
    ofstream out("text.txt");
    if(!out){
      cout<<"File cannot open/create"<<endl;
      return 0;
    }
    out << str;
    out.close();

    // read from file
    ifstream in("text.txt");
     if(!in){
      cout<<"File cannot open"<<endl;
    return 0;
    }
    string data;
    getline(in, data);

    cout << "From file: " << data << endl;

    in.close();
    return 0;
}
