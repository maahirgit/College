// 7. Write a C++ program to perform deletion operation in an array.
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int pos;
    cout << "Enter the position of the element to be deleted: ";
    cin >> pos;
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    cout << "Array after deletion: ";
    for (int i = 0; i < n - 1; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
