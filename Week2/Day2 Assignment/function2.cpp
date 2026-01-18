#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double angle;

    cout << "Enter angle in radians: ";
    cin >> angle;

    double sineValue = sin(angle);
    double cosineValue = cos(angle);
    double tangentValue = tan(angle);

    double degrees = angle * 180 / M_PI;
    
    cout << "sin(" << degrees << ") = " << sineValue << endl;    
    cout << "cos(" << degrees << ") = " << cosineValue << endl;    
    cout << "tan(" << degrees << ") = " << tangentValue << endl;    

}