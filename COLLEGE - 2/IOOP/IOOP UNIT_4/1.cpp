// Write a C++ program to make function to find odd/even using class.
#include <iostream>
using namespace std ;
class Number {
    private:
        int n;
    public:
        void setNumber(int num) {
            n = num;
        }
        bool isEven() {
            return (n % 2 == 0);
        }
};

int main() {
    Number num;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    num.setNumber(n);
    if (num.isEven()) {
        cout << n << " is even." << endl;
    } else {
        cout << n << " is odd." << endl;
    }
    return 0;
}
