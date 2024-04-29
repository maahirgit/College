// Write a C++ program that calculates the value of m raised to power n for both int and
// double data types. (Use the concept of function overloading)
#include <iostream>

int power(int m, int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= m;
    }
    return result;
}

double power(double m, int n) {
    double result = 1.0;
    for (int i = 0; i < n; i++) {
        result *= m;
    }
    return result;
}

int main() {
    int m_int = 2, n_int = 3;
    double m_double = 2.5, n_double = 2;

    std::cout << m_int << " raised to power " << n_int << " is " << power(m_int, n_int) << std::endl;
    std::cout << m_double << " raised to power " << n_double << " is " << power(m_double, n_double) << std::endl;

    return 0;
}
