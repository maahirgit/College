// 18. Write a C++ program to find product of all the elements which are divisible by seven of
// an array.
// Note: Pass Array as an argument to function.
#include <iostream>
using namespace std;

int findProduct(int arr[], int size) {
    int product = 1;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 7 == 0) {
            product *= arr[i];
        }
    }
    return product;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int product = findProduct(arr, size);
    if (product == 1) {
        cout << "There are no elements divisible by 7 in the array." << endl;
    } else {
        cout << "The product of all elements divisible by 7 in the array is: " << product << endl;
    }
    return 0;
}
