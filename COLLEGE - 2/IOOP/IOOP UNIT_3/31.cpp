// Create an single dimension array of integer type and access it with the help of pointer.
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};  // create an array of integers

    int *p = arr;  // assign the address of the first element of the array to a pointer

    for (int i = 0; i < 5; i++) {
        cout << *p << " ";  // print the value of the current element using the pointer
        p++;  // move the pointer to point to the next element
    }

    return 0;
}
