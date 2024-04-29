// Write a C++ Program to find the factorial of a given number using pointer.
#include <iostream>
using namespace std;

int main() {
    int num, *p, fact = 1;
    cout << "Enter a number: ";
    cin >> num;

    p = &num;

    for (int i = 1; i <= *p; i++) {
        fact *= i;
    }

    cout << "Factorial of " << *p << " is " << fact << endl;

    return 0;
}
