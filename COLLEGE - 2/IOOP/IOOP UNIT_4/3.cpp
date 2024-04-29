// Write a C++ program to make function to find minimum/maximum from 3 no using
// class.
#include <iostream>

class Number {
    private:
        int n1, n2, n3;
    public:
        void setNumber(int num1, int num2, int num3) {
            n1 = num1;
            n2 = num2;
            n3 = num3;
        }
        int getMinimum() {
            int min = n1;
            if (n2 < min) {
                min = n2;
            }
            if (n3 < min) {
                min = n3;
            }
            return min;
        }
        int getMaximum() {
            int max = n1;
            if (n2 > max) {
                max = n2;
            }
            if (n3 > max) {
                max = n3;
            }
            return max;
        }
};

int main() {
    Number num;
    int n1, n2, n3;
    std::cout << "Enter three numbers: ";
    std::cin >> n1 >> n2 >> n3;
    num.setNumber(n1, n2, n3);
    std::cout << "Minimum: " << num.getMinimum() << std::endl;
    std::cout << "Maximum: " << num.getMaximum() << std::endl;
    return 0;
}
