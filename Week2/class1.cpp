#include <iostream>
#include <ctime>
using namespace std;

//Write a program to check if a number is positive.
// int main(){
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if (num >0){
//         cout << "Positive number" << endl;
//     }
// }


//Write a program to find the greater of two numbers.
// int main(){
//     int fNum, sNum;
//     cout << "Enter a first number: ";
//     cin >> fNum;
//     cout << "Enter a second number: ";
//     cin >> sNum;

//     if (fNum > sNum){
//         cout << "First number is greater" << endl;
//     } else {
//         cout << "Second number is greater" << endl;
//     }
// }



//Write a program to assign grades based on marks (A, B, C, F).
//Assigning grades based on marks (A,B,C,F), if ladder

// int main(){
//     float marks;
//     cout << "Enter your marks: ";
//     cin >> marks;

//     if (marks >= 80){ 
//         cout << "A"<< endl;
//     } else if (marks >= 60){
//         cout << "B" << endl;
//     } else if (marks >= 40){
//         cout << "C" << endl;    
//     } else {
//         cout << "F" << endl;
//     }
// }


//Switch case
// int main(){ 
//    float marks;
//     int category;
//     cout << "enter your marks: ";
//     cin >> marks;

//     category = marks / 20;   
//     switch (category){
//         case 5:   // 100
//         case 4:   // 80–99
//             cout << "A";
//             break;

//         case 3:   // 60–79
//             cout << "B";
//             break;

//         case 2:   // 40–59
//             cout << "C";
//             break;

//         default:  // below 40
//             cout << "F";
//     }
//     return 0;

// }


 //Nested If Statement
// int main(){
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (num > 0){
//         if (num % 2 == 0){
//             cout << "Positive and Even number" << endl;
//         } else {
//             cout << " positive and Odd number" << endl;
//         }
//     } else if (num < 0){
//         cout << "Negative Number" << endl;
//     } else {
//         cout << "Zero" << endl;
//     }
// }


//Ternery operator
// int main(){
//     int num1, num2, smaller;

//     cout << "Enter first number: ";
//     cin >> num1;
//     cout << "Enter second number: ";
//     cin >> num2;

//     smaller = (num1 < num2) ? num1 : num2;

//     cout << "The smaller number is: " << smaller << endl;
// }


// int main(){

// srand(time(0));
//     int number = rand()% 10;
//     cout << number;
// }



// int main(){
//     int lYear;
//     cout << "Enter a year: ";
//     cin >> lYear;
    
//     if ((lYear % 4 == 0)|| (lYear % 100 ==! 0)|| (lYear % 400 == 0)){
//             cout << lYear << " is a leap year!" << endl;
//         } else {
//             cout << lYear << " is not a leap year!" << endl;
//         }
//     }