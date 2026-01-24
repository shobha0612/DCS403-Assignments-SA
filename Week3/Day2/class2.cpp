#include <iostream>
using namespace std;

//-----------pass by value------------
// void increament(int num){
//     num++;
//     cout << "Inside Function: " << num << endl;
// }

// int main(){
//     int x = 5;
//     increament(x);
//     cout << "outside function: " << x << endl;
// }


//---------Pass by Reference-----------------
// void increament(int &num){
//     num++;
//     cout << "Inside Function: " << num << endl;
// }

// int main(){
//     int x = 5;
//     increament(x);
//     cout << "outside function: " << x << endl;
// }



//----------Local, Global, and Static Local Variable------------
int globalCount = 0;

void showCounter(){
    int localCount =0;
    static int count = 0;
    localCount++;
    count++;
    globalCount++;

    cout << "local count: " << localCount << ", static count: " << count << ", global count: " << globalCount << endl;
}

int main(){
    showCounter();
    showCounter();
}