// Write a C++ Program to find addition and multiplication of two number using call by
// reference.
#include <iostream>

using namespace std;

void add_and_multiply(int a, int b, int& sum, int& product) {
    sum = a + b;
    product = a * b;
}

int main() {
    int num1, num2, sum, product;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    add_and_multiply(num1, num2, sum, product);

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;

    return 0;
}
