#include <iostream>
using namespace std;

class Currency {
private:
    int rupees, paisa;
public:
    Currency(int r, int p) {
        rupees = r;
        paisa = p;
    }

    friend Currency AddCurrency(Currency c1, Currency c2);
    void displayCurrency() {
        cout << "Currency: " << rupees << " Rupees and " << paisa << " Paisa." << endl;
    }
};

Currency AddCurrency(Currency c1, Currency c2) {
    int r = c1.rupees + c2.rupees;
    int p = c1.paisa + c2.paisa;
    if (p >= 100) {
        r += (p / 100);
        p %= 100;
    }
    Currency c3(r, p);
    return c3;
}

int main() {
    int r, p;
    cout << "Enter the first Currency value: " << endl;
    cout << "Rupees: ";
    cin >> r;
    cout << "Paisa: ";
    cin >> p;
    Currency c1(r, p);

    cout << "Enter the second Currency value: " << endl;
    cout << "Rupees: ";
    cin >> r;
    cout << "Paisa: ";
    cin >> p;
    Currency c2(r, p);

    Currency c3 = AddCurrency(c1, c2);

    cout << "The sum of the two Currency values is: ";
    c3.displayCurrency();

    return 0;
}