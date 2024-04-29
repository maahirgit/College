// Write a C++ Program to swap two numbers using pointers and function.
#include <iostream>
using namespace std;

// function to swap two numbers using pointers
void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int num1 = 10, num2 = 20;

    cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;

    // pass the addresses of num1 and num2 to the swap function
    swap(&num1, &num2);

    cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
