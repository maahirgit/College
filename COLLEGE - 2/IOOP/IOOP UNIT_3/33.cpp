// Create an double dimension array of integer type and access it with the help of pointer.
#include <iostream>
using namespace std;

int main() {
    int arr[3][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12}};

    int *p = &arr[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << *(p + i * 4 + j) << " ";
        }
        cout << endl;
    }

    return 0;
}
