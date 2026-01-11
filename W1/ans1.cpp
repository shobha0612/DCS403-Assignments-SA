//Q1. Salary Calculation Using Constants and Type Conversion

#include <iostream>
using namespace std;

int main() {
    int baseSalary = 50000;
    const double bonusPercentage = 15;

    double bonusAmount, totalSalary;

    bonusAmount = baseSalary * (bonusPercentage / 100);
    totalSalary = baseSalary + bonusAmount;

    cout << "Total Salary: " << totalSalary << endl;

    return 0;
   
}