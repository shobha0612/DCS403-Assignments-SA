#include <iostream>
#include <ctime>
using namespace std;

// int main(){
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if (num >0){
//         cout << "Positive number" << endl;
//     }
// }



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



//Assigning grades based on marks (A,B,C,F), if ladder

// int main(){
//     float grade;
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



// int main(){ //Switch case
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


// int main(){

// srand(time(0));
//     int number = rand()% 10;
//     cout << number;
// }

int main(){
    int lYear;
    cout << "Enter a year: ";
    cin >> lYear;
    
    if ((lYear % 4 == 0)|| (lYear % 100 ==! 0)|| (lYear % 400 == 0)){
            cout << lYear << " is a leap year!" << endl;
        } else {
            cout << lYear << " is not a leap year!" << endl;
        }
    }