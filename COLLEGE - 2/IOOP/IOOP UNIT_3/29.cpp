// Write a C++ program to pass three subjects marks as a argument to function and find
// the grade of a student using function and pointer. (Passing pointers to functions )
#include <iostream>
using namespace std;

char findGrade(int *p1, int *p2, int *p3) {
    int avg = (*p1 + *p2 + *p3) / 3;

    if (avg >= 90) {
        return 'A';
    } else if (avg >= 80) {
        return 'B';
    } else if (avg >= 70) {
        return 'C';
    } else if (avg >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int marks1, marks2, marks3;
    cout << "Enter marks of three subjects: ";
    cin >> marks1 >> marks2 >> marks3;

    char grade = findGrade(&marks1, &marks2, &marks3);

    cout << "Grade: " << grade << endl;

    return 0;
}


