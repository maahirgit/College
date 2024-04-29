// Write a C++ program to make function to find positive/negative using class.
#include <iostream>

class Number {
    private:
        int n;
    public:
        void setNumber(int num) {
            n = num;
        }
        bool isPositive() {
            return (n > 0);
        }
};

int main() {
    Number num;
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    num.setNumber(n);
    if (num.isPositive()) {
        std::cout << n << " is positive." << std::endl;
    } else {
        std::cout << n << " is negative." << std::endl;
    }
    return 0;
}
