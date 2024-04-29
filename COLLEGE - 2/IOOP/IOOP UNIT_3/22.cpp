// Create a pointer variable of type char and store an address of a char variable and print
// the value using pointer.
#include <iostream>
using namespace std;

int main() {
    char c = 'A';
    char *ptr = &c; // creating a pointer variable of type char and storing the address of c in it
    cout << "The value of c is: " << c << endl;
    cout << "The value of c using the pointer is: " << *ptr << endl;
    return 0;
}
