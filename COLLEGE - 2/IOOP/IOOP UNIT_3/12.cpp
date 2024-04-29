// 12. Write a C++ program to find sum of all the diagonal elements of a matrix.
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    int mat[rows][cols];
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
    }
    int diagonal_sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == j) {
                diagonal_sum += mat[i][j];
            }
        }
    }
    cout << "The sum of all diagonal elements is: " << diagonal_sum << endl;
    return 0;
}
