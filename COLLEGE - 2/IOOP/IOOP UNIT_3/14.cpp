// 14. Write a C++ program that will generate diagonal matrix of a given matrix.
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
    cout << "The diagonal matrix of the given matrix is: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == j) {
                cout << mat[i][j] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    return 0;
}
