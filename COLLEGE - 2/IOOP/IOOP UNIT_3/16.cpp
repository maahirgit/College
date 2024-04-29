// 16. Write a C++ program to find addition of two single dimension array of same size and
// store result in another array.
// Note: Both the Arrays Must be passed as an argument to function.
#include <iostream>
using namespace std;

void addArrays(int arr1[], int arr2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}

int main() {
    int size;
    cout << "Enter the size of the arrays: ";
    cin >> size;
    int arr1[size], arr2[size], result[size];
    cout << "Enter the elements of the first array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr1[i];
    }
    cout << "Enter the elements of the second array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr2[i];
    }
    addArrays(arr1, arr2, result, size);
    cout << "The addition of two arrays is: " << endl;
    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
