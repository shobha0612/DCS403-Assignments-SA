#include <iostream>
using namespace std;

int main (){
   
   //---------------while loop--------------
    // int num, sum = 0;
    // int i = 1;

    // cout << "Enter a Number: ";
    // cin >> num;

    // while (i <= num){
    //     sum = sum + i;
    //     i++;
    // }
    
    // cout << sum;



    //--------------Do-while loop----------
    // int num, sum = 0;
    // int i = 1;

    // cout << "Enter  a number: ";
    // cin >> num;

    // do{ 
    //     sum += i;
    //     i++;
    // }while (i <= num);
    //     cout << sum;


    //------------Ranged based For loop--------------

    // int numbers[] = {1,2,3,4,5};
    // for (int n : numbers){
    //     cout << n << " ";
    // } -------------> yo ranged based maa garna milchha but code ali complicated hunchha

    

    //-------------Nested Loops----------------

    // for (int i = 1; i <= 3; i++){ //-------outer loop lye row denchha
    //     for (int j = 1; j <= 3; j++){ //--------inner loop lye column denchha
    //         cout << i * j << "\t";
    //     }
    //     cout << endl;
    // }

    //------break----------
    // for  (int i =1; i<=10; i++){
    //     if (i == 6)break;
    //     cout << i << " ";
    // }



    //---------continue---------
    //  for  (int i =1; i<=10; i++){
    //     if (i == 3) continue;
    //     cout << i << " ";
    // }



    //------------------------------------Case Studies------------------------------------
    // -----------Detecting Sentinel Value-----------------

    // int num;
    // cout<<"Enter a number: ";
    // cin >> num;
    
    // while (num != 0) {   // 0 is the sentinel value
    //     cout << "You entered: " << num << endl;
    //     cin >> num;
    // }

    // cout << "Sentinal Value detected.";



    //------Checking Palindromes----------------
    // int num, reversedNum = 0;

    // cout << "Enter a number: ";
    // cin >> num;

    // int temp = num;
    // for(; temp > 0; temp /= 10){
    //     reversedNum = reversedNum * 10 + (temp % 10);
    // }

    // if (num == reversedNum)
    //     cout << "PALINDROME NUMBER";
    // else 
    //     cout << "not palindrome";
    
    //     return 0;


    //--------Prime Numbers---------
int limit;

cout << "Enter the limit: ";
cin >> limit;

for (int num = 2; num <= limit; num++){
    bool isPrime = true;

    for (int i = 2; i <= num / 2; i++){
        if (num % i == 0){
            isPrime = false;
            break;
        }
    }
    
    if (isPrime)
        cout << num << " ";
}

return 0;

}