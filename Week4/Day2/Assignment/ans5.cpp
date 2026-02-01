#include <iostream>
using namespace std;

int main() {
    int arr[3][3], trans[3][3];
    
    cout << "Enter 9 elements: ";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            trans[j][i] = arr[i][j];
        }
    }
    
    cout << "\nTranspose:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}