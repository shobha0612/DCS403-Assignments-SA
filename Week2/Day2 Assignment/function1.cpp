#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double number;

    cout << "Enter a number: ";
    cin >> number;

    double absoluteValue = fabs(number);
    double squareRoot = sqrt(absoluteValue);
    double powerResult = pow(2,3);

    cout << "Square root of " << absoluteValue << " = " << squareRoot << endl;
    cout << "2 raised to power 3 = " << powerResult << endl;
    cout << "Absolute value of " << number << " = " << absoluteValue << endl;

}