#include <iostream>
#include <fstream>
using namespace std;

void countLines() {
	
    ifstream in("story.txt"); // create input file stream obj and open file in read mode
    if(!in){
    	cout<<"File cant open";
    	return;
	}
	
    string line; // stores one line from file at a time
    int count = 0;// counts num of lines not starting with A

    while (getline(in, line)) { //reads file line by line and stores each line in line until EOF

        // ignore empty lines (optional safety)
        if (line.length() == 0)
            continue;

        // check first character
        if (line[0] != 'A' && line[0] != 'a') {
            count++;
        }
    }

    in.close(); //close file after reading

    cout << "Number of lines not starting with 'A': " << count << endl;
}

int main() {
    countLines();
    return 0;
}
