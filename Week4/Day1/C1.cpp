#include <iostream>
#include <ctime>
using namespace std;

// int main(){
    //Array
    //-----Generating Random numbers------
// int array[6];
// srand(time(0));

// for(int i =0; i < 6; ++i){
//     int randomNum = rand() % 51;
//     cout << randomNum << " ";
// }


//--------Deck of Card--------

// }

//---Passign array as a function parameter---------
void printArray(int arr[], int size){ 
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main(){
    int nums[] = {3, 6, 9};
    printArray(nums,3);
}


//----Searching Arrays----
    //liner search------it is useful for short array but takes too much time for large array set
        //When to use: When array is small or unsorted.

    //----Binary Search--------it only works on sorted arrays by repeatedly dividing the search interval in half, sort garna time laagchha