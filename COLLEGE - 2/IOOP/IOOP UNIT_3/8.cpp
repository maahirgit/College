// 8. Write a C++ program that will ask user to input month and display number of days in that
// particular month.
#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter the number of the month (1-12): ";
    cin >> month;
    if (month == 2) {
        cout << "The number of days in month 2 is 28 or 29 (leap year)" << endl;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        cout << "The number of days in month " << month << " is 30" << endl;
    } else {
        cout << "The number of days in month " << month << " is 31" << endl;
    }
    return 0;
}
