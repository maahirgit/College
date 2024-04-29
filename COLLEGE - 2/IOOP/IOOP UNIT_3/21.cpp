// Create a pointer variable of type double and store an address of a double variable and
// print the value using pointer.
#include <iostream>
using namespace std;

int main() {
    double d = 3.14159;
    double *ptr = &d; // creating a pointer variable of type double and storing the address of d in it
    cout << "The value of d is: " << d << endl;
    cout << "The value of d using the pointer is: " << *ptr << endl;
    return 0;
}
