#include <iostream>
#include <algorithm>

using namespace std;

class INTEGER {
    private:
        int *arr;
        int n;
    public:
        INTEGER(int size) {
            n = size;
            arr = new int[n];
        }
        void sort() {
            std::sort(arr, arr + n);
        }
        void input() {
            cout << "Enter " << n << " integers:\n";
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }
        }
        float average() {
            int sum = 0;
            for (int i = 0; i < n; i++) {
                sum += arr[i];
            }
            return (float) sum / n;
        }
        void display() {
            cout << "The sorted array is:\n";
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            cout << "The average of the array is: " << average() << endl;
        }
        ~INTEGER() {
            delete[] arr;
        }
};

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    INTEGER obj(size);

    obj.input();
    obj.sort();
    obj.display();

    return 0;
}