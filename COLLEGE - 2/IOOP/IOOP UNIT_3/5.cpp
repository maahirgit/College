// 5. Write a C++ program to perform insertion operation in an array.
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int pos, value;
    cout << "Enter the position where you want to insert the element: ";
    cin >> pos;
    cout << "Enter the value of the element: ";
    cin >> value;
    for (int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = value;
    cout << "Array after insertion: ";
    for (int i = 0; i < n + 1; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}