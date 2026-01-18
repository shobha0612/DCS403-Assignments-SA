#include <iostream>
using namespace std;

int main() {
    string str, word = "", longestWord = "";
    
    cout << "Enter a sentence: ";
    getline(cin, str);
    
    str += " "; // Add space at end to process last word
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            word += str[i];
        } else {
            if (word.length() > longestWord.length()) {
                longestWord = word;
            }
            word = "";
        }
    }
    
    cout << "Longest word: " << longestWord << endl;
    
}