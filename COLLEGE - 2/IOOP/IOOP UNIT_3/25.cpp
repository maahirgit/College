// Write a C++ Program to find largest out of three numbers using pointer.
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int *p1, *p2, *p3;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    p1 = &a;
    p2 = &b;
    p3 = &c;

    if (*p1 > *p2 && *p1 > *p3) {
        cout << *p1 << " is the largest number." << endl;
    } else if (*p2 > *p1 && *p2 > *p3) {
        cout << *p2 << " is the largest number." << endl;
    } else {
        cout << *p3 << " is the largest number." << endl;
    }

    return 0;
}
