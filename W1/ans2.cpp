//Q2. Temperature Conversion (Celsius to Fahrenheit)
//Fahrenheit = (Celsius × 9 / 5) + 32

#include <iostream>
using namespace std;

int main(){
    float celsius, fahrenheit;
    const float NINE = 9.0;
    const float FIVE = 5.0;
    const float THIRTY_TWO = 32.0;

    cout << "Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * NINE / FIVE) + THIRTY_TWO;

    cout << "Fahrenheit: " << fahrenheit << endl;

    return 0;
}