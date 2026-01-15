//mathematical functions
//Charecter Data Type and Operations

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// int main(){
// char letter = 'A';
// cout << letter << " has code" << int(letter) << endl;
// }


// int main(){
// char letter = 'A';
// char next = letter + 1;
// cout <<next;
// }



// int main(){ //-------random charecter generation

// srand(time(0));
// char letter = rand() % 26 + 'A';
// cout << letter;
// }


int main(){

char hex;
int decimal;
cout << "Enter hex_value: ";
cin >> hex;

    if (hex >= '0' && hex <= '9'){
         decimal = hex - '0';

    } else if (hex >= 'A' && hex <= 'F'){
        decimal = 10 + (hex - 'A');

    } else if (hex >= 'a' && hex <= 'f'){
        decimal = hex - 'a' + 10;
    } else {
        cout << "Invalid hex value" << endl;
        return 1;

    }
}