#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;

    double maximum = fmax(num1, num2);
    double minimum = fmin(num1, num2);

    cout << "Maximum: " << maximum << endl;
    cout << "Minimum: " << minimum << endl;
}