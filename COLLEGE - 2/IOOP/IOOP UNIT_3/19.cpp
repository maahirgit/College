// Create a pointer variable of type integer and store an address of a integer variable and
// print the value using pointer.
#include <iostream>
using namespace std;

int main() {
    int num = 10; // integer variable
    int *ptr = &num; // pointer variable to store address of integer variable

    // printing the value of integer variable using pointer
    cout << "The value of integer variable is: " << *ptr << endl;

    return 0;
}
