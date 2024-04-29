// Write a C++ Use a friend function to find average of a given number.
#include <iostream>
using namespace std;

class Number {
private:
    int num;
public:
    Number(int n) : num(n) {}

    friend float average(Number n1, Number n2);
};

float average(Number n1, Number n2) {
    return (float)(n1.num + n2.num) / 2.0;
}

int main() {
    Number n1(10), n2(20);
    float avg = average(n1, n2);
    cout << "The average of " << n1.num<< " and " << n2.num<< " is " << avg << endl;
    return 0;
}
