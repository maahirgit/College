// Create a pointer variable of type float and store an address of a float variable and print
// the value using pointer.
#include <iostream>
using namespace std;

int main() {
    float f = 3.14;
    float *ptr = &f; // create a pointer variable of type float and store the address of f
    cout << "The value of f is " << *ptr << endl; // print the value of f using the pointer
    return 0;
}
