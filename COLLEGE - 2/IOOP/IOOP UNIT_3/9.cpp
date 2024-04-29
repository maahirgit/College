// 9. Write a C++ program that will find addition of two matrices.
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    int mat1[rows][cols], mat2[rows][cols];
    cout << "Enter the elements of first matrix: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat1[i][j];
        }
    }
    cout << "Enter the elements of second matrix: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat2[i][j];
        }
    }
    int mat3[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    cout << "The addition of two matrices is: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
