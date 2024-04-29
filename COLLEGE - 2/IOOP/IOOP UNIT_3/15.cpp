// 15. Write a C++ program to find smallest element in an array.
// Note: Pass Array as an argument to function.
#include <iostream>
using namespace std;

int findSmallest(int arr[], int size) {
    int smallest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
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
    int smallest = findSmallest(arr, size);
    cout << "The smallest element in the array is: " << smallest << endl;
    return 0;
}
