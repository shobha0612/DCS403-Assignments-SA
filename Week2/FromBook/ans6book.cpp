#include <iostream>
using namespace std;

int main(){
    double sum = 0.0;

    for (int numerator = 1, denominator = 3; numerator <= 97; numerator += 2, denominator += 2){
        sum += (double)numerator / denominator;
    }

    cout << "Sum of the series: " << sum << endl;

    return 0;
}