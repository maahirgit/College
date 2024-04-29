// // Make one class complex which includes float member x and y and include 2 friend non member 
// function friend complex sum(complex, complex); It calculates sum of two complex and return 
// complex object friend void show(complex); It will display complex object.
#include <iostream>
using namespace std;

class complex {
    float x, y;
public:
    complex() {
        x = y = 0;
    }
    complex(float real, float imag) {
        x = real;
        y = imag;
    }
    friend complex sum(complex, complex);
    friend void show(complex);
};

complex sum(complex c1, complex c2) {
    complex c;
    c.x = c1.x + c2.x;
    c.y = c1.y + c2.y;
    return c;
}

void show(complex c) {
    cout << "Real Part: " << c.x << endl;
    cout << "Imaginary Part: " << c.y << endl;
}

int main() {
    complex c1(3.5, 4.5), c2(2.7, 1.8), c3;
    c3 = sum(c1, c2);
    show(c3);
    return 0;
}
