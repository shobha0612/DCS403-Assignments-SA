#include<iostream>
using namespace std;

//----------Recursion-------------
    //Must have: 
       //Base Case: defines when to stop recursion
       //Recursive Case: breaks down the problem into sub-problems


// Function to calculate factorial of a number taken as a user input
// int factorial(int n) {
//     if (n == 0) {   // Base case
//         return 1;
//     } else {
//         return n * factorial(n - 1);  // Recursive case
//     }
// }

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     cout << "Factorial = " << factorial(n);
//     return 0;
// }


//----------Summing a Series-----------
//   int sum(int n){ 
//     if (n == 0) {   // Base case
//         return 0;
//     } else {
//         return n + sum(n - 1);  // Recursive case
//     }
// }

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     cout << "sum = " << sum(n);
//     return 0;
// }


//---------------Fibonacci Numbers----------
   //Series of numbers in which each number is the sum of the two preceding numbers, starting from 0 and 1.
      //0,1,1,2,3,5,8....



//-------Recursive Helper Function--------
   //Secondary recursive function
   //Used to manage additional parameters that track intermediate state or simplify the main call


//-----------------Towers of Hanoi-------------------------------------

// Create a recursive function for Tower of Hanoi
void towerOfHanoi(int n, char s_rod, char d_rod, char a_rod)
{
    // If there's only one disk
    if (n == 1) {
        // Print the move for the single disk
        cout << "Move disk 1 from rod " << s_rod
             << " to rod " << d_rod << endl;
        return;
    }

    // If there are more than one disks
    // Call the towerOfHanoi function to move n-1 disks from
    // the source rod to the auxiliary rod using the
    // destination rod
    towerOfHanoi(n - 1, s_rod, a_rod, d_rod);

    // Print the move for the nth disk from the source rod
    // to the destination rod
    cout << "Move disk " << n << " from rod " << s_rod
         << " to rod " << d_rod << endl;

    // Call the towerOfHanoi function to move n-1 disks from
    // the auxiliary rod to the destination rod using the
    // source rod
    towerOfHanoi(n - 1, a_rod, d_rod, s_rod);
}

int main()
{
    // Number of disks
    int n = 3;

    // Call the Tower of Hanoi function
    towerOfHanoi(n, 'A', 'C', 'B');

    return 0;
}


//-----------------Eight Queens-------------------

//Benifits of Tail Recursion, benifits chha ke chhaina and what is tail recursion?
   //recursive call is the last statement that is executed by the function. So basically nothing is left to execute after the recursion call.