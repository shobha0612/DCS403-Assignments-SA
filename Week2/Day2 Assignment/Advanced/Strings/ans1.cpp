#include <iostream>
using namespace std;

int main() {
    string str;
    int words = 0;
    bool inWord = false;
    
    cout << "Enter a sentence: ";
    getline(cin, str);
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            if (!inWord) {
                words++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    
    cout << "Number of words: " << words << endl;
}