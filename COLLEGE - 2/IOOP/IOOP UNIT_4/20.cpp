// Write a C++ program using a class to store price list of 50 items and to print the largest
// price as well as the sum of all prices. Use static member, static method and friend method
// if necessary.
#include <iostream>
using namespace std;

class PriceList {
private:
    float prices[50];
    static int numPrices;
public:
    void setPrice(int i, float price) {
        prices[i] = price;
    }
    static int getNumPrices() {
        return numPrices;
    }
    friend void printLargestPrice(PriceList pl);
    static void incrementNumPrices() {
        numPrices++;
    }
};

int PriceList::numPrices = 0;

void printLargestPrice(PriceList pl) {
    float maxPrice = pl.prices[0];
    for (int i = 1; i < PriceList::getNumPrices(); i++) {
        if (pl.prices[i] > maxPrice) {
            maxPrice = pl.prices[i];
        }
    }
    cout << "The largest price is: " << maxPrice << endl;
}

int main() {
    PriceList pl;
    float price, sum = 0;
    for (int i = 0; i < 50; i++) {
        cout << "Enter price " << i+1 << ": ";
        cin >> price;
        if (price < 0) {
            break;
        }
        pl.setPrice(i, price);
        PriceList::incrementNumPrices();
        sum += price;
    }
    cout << "The sum of all prices is: " << sum << endl;
    printLargestPrice(pl);
    return 0;
}
