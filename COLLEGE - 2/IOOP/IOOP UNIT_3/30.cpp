// Write a C++ program to pass three subjects marks as a argument to function and return
// the grade of a student using function and pointer.
// (Passing pointers to function and return pointer from a function)
#include <iostream>
using namespace std;

char* calculateGrade(int *marks) {
    int total = 0;
    for (int i = 0; i < 3; i++) {
        total += *(marks + i);
    }
    float avg = total / 3.0;

    if (avg >= 90) {
        return "A+";
    } else if (avg >= 80) {
        return "A";
    } else if (avg >= 70) {
        return "B";
    } else if (avg >= 60) {
        return "C";
    } else if (avg >= 50) {
        return "D";
    } else {
        return "F";
    }
}

int main() {
    int marks[3];
    cout << "Enter marks for three subjects: ";
    for (int i = 0; i < 3; i++) {
        cin >> *(marks + i);
    }

    char* grade = calculateGrade(marks);
    cout << "Your grade is: " << grade << endl;

    return 0;
}
