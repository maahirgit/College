// 17. Write a C++ program to find the sum and average of all the elements of an array.
// Note: Pass Array as an argument to function.
#include <iostream>
using namespace std;

void findSumAndAverage(int arr[], int size, int &sum, double &average) {
    sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    average = (double)sum / size;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size], sum;
    double average;
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    findSumAndAverage(arr, size, sum, average);
    cout << "The sum of all elements in the array is: " << sum << endl;
    cout << "The average of all elements in the array is: " << average << endl;
    return 0;
}
