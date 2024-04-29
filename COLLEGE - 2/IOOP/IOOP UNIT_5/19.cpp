#include <iostream>

using namespace std;

int main() {
  int n;

  cout << "Enter the size of the array: ";
  cin >> n;

  int* arr = new int[n]; // create array dynamically

  cout << "Enter the elements of the array:" << endl;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int maxNum = arr[0];

  for (int i = 1; i < n; i++) {
    if (arr[i] > maxNum) {
      maxNum = arr[i];
    }
  }

  cout << "The maximum number in the array is: " << maxNum << endl;

  delete[] arr; // free memory allocated for array

  return 0;
}