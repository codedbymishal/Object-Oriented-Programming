#include <iostream>
#include <vector>
using namespace std;

class DynamicStack{

    private:
       vector<char> arr; // arr is a stack that stores characters

    public:
        void push(const char ch){
            arr.push_back(ch); // add a character to top of stack
        }

        char pop(){
            if(arr.empty()){
                return '\0';
            } 
            char ch = arr.back(); // get top element
            arr.pop_back(); // remove it
            return ch;
        }

        char peek(){
            if (arr.empty()) {
                 return '\0';
            }
            return arr.back(); // returns top element
        }

        bool isEmpty(){
            return arr.empty(); // true if empty
        }

        string reverse(string sentence) {
            string result = ""; // stores final ans

            for (int i = 0; i < sentence.length(); i++) { //loop thru sentence character by character
                if (sentence[i] != ' ') { // if no space push character
                    push(sentence[i]);
                }

                else{
                        while (!isEmpty()) { // if space found reverse word
                            result += pop();
                    }
                    result += ' ';
                }
            }

            while (!isEmpty()) { // to reverse last word
                result += pop();
            }

            return result;
        }
};

int main() {
	
    
    DynamicStack s;
    string sentence;

    cout << "Enter a Sentence: ";
    getline(cin,sentence); // takes full input including spaces

    string reverseSentence = s.reverse(sentence);
    cout << "Actual Sentence: "<<sentence <<endl <<"Rversed Sentence: "<<reverseSentence<<endl;

    return 0;
}
