#include <iostream>
using namespace std;

class Calendar {
private:
    int day, month, year;
public:
    Calendar() {
        day = 1;
        month = 1;
        year = 1970;
    }

    Calendar(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void AddDays(int numDays) {
        day += numDays;
        while (day > daysInMonth(month, year)) {
            day -= daysInMonth(month, year);
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }

    void display() {
        cout << day << "/" << month << "/" << year << endl;
    }

private:
    int daysInMonth(int m, int y) {
        int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
        if (m == 2) {
            if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
                return 29;
            }
        }
        return days[m-1];
    }
};

int main() {
    Calendar c1;
    cout << "Default date: ";
    c1.display();

    Calendar c2(14, 2, 2022);
    cout << "Initial date: ";
    c2.display();

    c2.AddDays(28);
    cout << "After adding 28 days: ";
    c2.display();

    c2.AddDays(365);
    cout << "After adding 365 days: ";
    c2.display();

    return 0;
}