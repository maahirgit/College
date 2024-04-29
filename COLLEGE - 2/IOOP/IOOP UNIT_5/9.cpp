#include <iostream>
#include <cmath>

class Circle {
private:
    double r;
    const double pi = 3.14159;
    
public:
    // Constructor
    Circle(double radius) {
        r = radius;
    }
    
    // Destructor
    ~Circle() {
        std::cout << "Circle object has been deleted." << std::endl;
    }
    
    // Method to calculate the area of the circle
    double area() {
        return pi * pow(r, 2);
    }
};

int main() {
    // Create a Circle object with radius 5
    Circle c(5);
    
    // Access the area of the circle
    std::cout << "Area of the circle: " << c.area() << std::endl;
    
    return 0;
}