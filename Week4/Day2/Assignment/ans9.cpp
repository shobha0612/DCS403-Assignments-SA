#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    bool isSymmetric = true;
    
    cout << "Enter 9 elements: ";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(arr[i][j] != arr[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if(!isSymmetric) break;
    }
    
    if(isSymmetric) {
        cout << "Matrix is symmetric" << endl;
    } else {
        cout << "Matrix is not symmetric" << endl;
    }
    
    return 0;
}