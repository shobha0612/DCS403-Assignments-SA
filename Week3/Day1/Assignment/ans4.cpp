#include <iostream>
using namespace std;

int main(){
    int num, count = 0;
    
    cout << "Enter a Number: ";
    cin >> num;

    do{
        count++;
        num /= 10;
    } while(num != 0);

    cout << "Number of Digits: " << count;
}