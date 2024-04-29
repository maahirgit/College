// Write a C++ program for Addition, multiplication, subtraction, division of two pointer
// variable which has the address of another variable
#include <iostream>
using namespace std;

int main() {
    int num1 = 10, num2 = 20;
    int *ptr1 = &num1, *ptr2 = &num2;

    cout << "Addition: " << *ptr1 + *ptr2 << endl;
    cout << "Multiplication: " << *ptr1 * *ptr2 << endl;
    cout << "Subtraction: " << *ptr1 - *ptr2 << endl;
    cout << "Division: " << *ptr1 / *ptr2 << endl;

    return 0;
}
