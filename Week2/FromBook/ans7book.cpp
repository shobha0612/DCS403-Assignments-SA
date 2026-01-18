#include <iostream>
using namespace std;

int main(){
    int numStudents;
    double score, highestScore;

    cout << "Enter a number of students: ";
    cin >> numStudents;

    cout << "Enter score for student 1: ";
    cin >> highestScore;

    for(int i = 2; i <= numStudents; i++){
        cout << "Enter score for student " << i << ": ";
        cin >> score;

        if(score > highestScore){
            highestScore = score;
        }
    }

    cout << "Highest score is: " << highestScore << endl;

    return 0;
}