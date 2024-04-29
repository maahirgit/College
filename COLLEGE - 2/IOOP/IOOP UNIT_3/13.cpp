// 13. Write a C++ program that will find multiplication of two matrices.
#include <iostream>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;
    cout << "Enter the number of rows of first matrix: ";
    cin >> rows1;
    cout << "Enter the number of columns of first matrix: ";
    cin >> cols1;
    int mat1[rows1][cols1];
    cout << "Enter the elements of first matrix: " << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> mat1[i][j];
        }
    }
    cout << "Enter the number of rows of second matrix: ";
    cin >> rows2;
    cout << "Enter the number of columns of second matrix: ";
    cin >> cols2;
    int mat2[rows2][cols2];
    cout << "Enter the elements of second matrix: " << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> mat2[i][j];
        }
    }
    if (cols1 != rows2) {
        cout << "The number of columns of first matrix must be equal to the number of rows of second matrix to perform matrix multiplication." << endl;
        return 0;
    }
    int mat3[rows1][cols2];
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            mat3[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    cout << "The multiplication of two matrices is: " << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << mat3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
