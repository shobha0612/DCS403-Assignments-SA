#include<iostream>
using namespace std;

//---------------------------Sorting Arrays-----------
//------Selection Sort:
//time complexity: O(n^2)
//eg:
// void selectionSort(int arr[], int n){
//     for(int i = 0; i < n - 1; i++){
//         int minIndex = i;
//         for(int j = i + 1; j < n; j++)
//         if(arr[j] < arr[minIndex])
//         minIndex = j;
//     swap(arr[i], arr[minIndex]);
//     }
// }

//Bubble Sort

//Two Dimensional Array
void printMatrix(const int m[][4], int rows){
    for (int i = 0; i < rows; i++){
        for (int j =0; j<4; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
}

int main(){
    int matrix[3][4] = {{1,2,3,4}, {5,6,7,8}, {9, 10, 11, 12}};
    printMatrix(matrix, 3);
}