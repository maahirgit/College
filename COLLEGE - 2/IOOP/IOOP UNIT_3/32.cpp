// Write a C++ Program to find the sum of six numbers with arrays and pointers.
#include <iostream>
using namespace std;

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int *ptr = arr;
    int sum = 0;

    for (int i = 0; i < 6; i++) {
        sum += *ptr;
        ptr++;
    }

    cout << "The sum of the six numbers is: " << sum << endl;

    return 0;
}
