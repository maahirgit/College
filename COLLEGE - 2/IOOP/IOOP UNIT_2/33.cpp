#include <iostream>
using namespace std;
inline int sum(int a, int b)
{
    return a + b;
}
inline int difference(int a, int b)
{
    return a - b;
}
inline int product(int a, int b)
{
    return a * b;
}
inline int division(int a, int b)
{
    return a / b;
}
inline int modulu(int a, int b)
{
    return a % b;
}

int main()
{
    int a, b;
    char op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> op;

    switch (op)
    {
        case '+':
            cout << a << " + " << b << " = " << sum(a, b) << endl;
            break;
        case '-':
            cout << a << " - " << b << " = " << difference(a, b) << endl;
            break;
        case '*':
            cout << a << " * " << b << " = " << product(a, b) << endl;
            break;
        case '/':
            cout << a << " / " << b << " = " << division(a, b) << endl;
            break;
        case '%':
            cout << a << " % " << b << " = " << modulu(a, b) << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
            break;
    }

    return 0;
}
