// 6. Write a C++ program to merge two single dimension arrays to an another array .
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the size of first array: ";
    cin >> n;
    int arr1[n];
    cout << "Enter the elements of first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    cout << "Enter the size of second array: ";
    cin >> m;
    int arr2[m];
    cout << "Enter the elements of second array: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    int merged_arr[n + m];
    for (int i = 0; i < n; i++) {
        merged_arr[i] = arr1[i];
    }
    for (int i = 0; i < m; i++) {
        merged_arr[n + i] = arr2[i];
    }
    cout << "Merged array: ";
    for (int i = 0; i < n + m; i++) {
        cout << merged_arr[i] << " ";
    }
    return 0;
}

