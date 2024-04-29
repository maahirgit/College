// Define a class Country that store the name of the country; its population and area. Create
// 2 or 3 objects of this class and find the county with largest population and the country
// which is geographically largest.(pass object as arguments)
#include <iostream>
#include <string>
using namespace std;

class Country {
private:
    string name;
    double population;
    double area;
public:
    Country(string n, double p, double a) {
        name = n;
        population = p;
        area = a;
    }

    string getName() {
        return name;
    }

    double getPopulation() {
        return population;
    }

    double getArea() {
        return area;
    }
};

void findLargestPopulation(Country c1, Country c2, Country c3) {
    Country largest = c1;
    if (c2.getPopulation() > largest.getPopulation()) {
        largest = c2;
    }
    if (c3.getPopulation() > largest.getPopulation()) {
        largest = c3;
    }
    cout << "Country with largest population: " << largest.getName() << endl;
}

void findLargestArea(Country c1, Country c2, Country c3) {
    Country largest = c1;
    if (c2.getArea() > largest.getArea()) {
        largest = c2;
    }
    if (c3.getArea() > largest.getArea()) {
        largest = c3;
    }
    cout << "Country with largest area: " << largest.getName() << endl;
}

int main() {
    Country c1("USA", 328.2, 9.8);
    Country c2("China", 1393.8, 9.6);
    Country c3("India", 1366.4, 3.3);

    findLargestPopulation(c1, c2, c3);
    findLargestArea(c1, c2, c3);

    return 0;
}
