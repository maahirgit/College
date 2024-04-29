// Create a class circle include pi and r as data members. Function area() which calculates
// area. Make one object and access area using object.
#include <iostream>

class Circle {
private:
    const double pi = 3.14159265358979323846;
    double r;

public:
    Circle(double radius) {
        r = radius;
    }

    double area() {
        return pi * r * r;
    }
};

int main() {
    Circle myCircle(5.0);

    std::cout << "The area of the circle is " << myCircle.area() << std::endl;

    return 0;
}
