// Create two classes DM and DB which store the value of distances. DM stores distances
// in   meters   and   centimeters   and   DB   in   feet   and   inches.   Write   a   program   that   can   read
// values for the class objects and add one object of DM with another object of DB. Use
// friend function to carry out the addition operation. The object that stores the results may
// be a DM object or DB object, depending on the units in which the results are required.
#include <iostream>
using namespace std;

class DB;

class DM {
private:
    int meters;
    int centimeters;
public:
    DM(int m = 0, int cm = 0) : meters(m), centimeters(cm) {}
    void display() {
        cout << meters << " meters " << centimeters << " centimeters" << endl;
    }
    friend DM operator+(const DM &d, const DB &b);
};

class DB {
private:
    int feet;
    int inches;
public:
    DB(int ft = 0, int in = 0) : feet(ft), inches(in) {}
    void display() {
        cout << feet << " feet " << inches << " inches" << endl;
    }
    friend DM operator+(const DM &d, const DB &b);
};

DM operator+(const DM &d, const DB &b) {
    int totalMeters = d.meters + b.feet * 0.3048 + b.inches * 0.0254;
    int remainingCentimeters = d.centimeters + (b.feet * 0.3048 + b.inches * 0.0254 - (int)(b.feet * 0.3048 + b.inches * 0.0254)) * 100;
    if (remainingCentimeters >= 100) {
        totalMeters += remainingCentimeters / 100;
        remainingCentimeters = remainingCentimeters % 100;
    }
    return DM(totalMeters, remainingCentimeters);
}

int main() {
    DM d(10, 50);
    DB b(5, 11);
    DM result = d + b;
    result.display();
    return 0;
}
