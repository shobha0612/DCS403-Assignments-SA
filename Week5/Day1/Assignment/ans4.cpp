#include <iostream>
using namespace std;

void printArray(int arr[], int size, int index) {
    if(index == size) {
        return;  
    }
    cout << arr[index] << " ";
    printArray(arr, size, index + 1);  
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    printArray(arr, n, 0);
    cout << endl;
    return 0;
}