// Write a C++ Program to to find addition and multiplication using function pointer.
#include <iostream>

using namespace std;

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2;
    int (*operation)(int, int);
    char operatorSymbol;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter operator (+ or *): ";
    cin >> operatorSymbol;

    if (operatorSymbol == '+') {
        operation = add;
    } else if (operatorSymbol == '*') {
        operation = multiply;
    } else {
        cout << "Invalid operator" << endl;
        return 0;
    }

    int result = operation(num1, num2);

    cout << "Result: " << result << endl;

    return 0;
}
