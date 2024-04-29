#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements to add: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter " << n << " integers to add:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "The sum of the " << n << " integers is: " << sum << endl;

    delete[] arr;

    return 0;
}