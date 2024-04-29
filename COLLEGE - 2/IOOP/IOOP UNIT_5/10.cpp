#include <iostream>

using namespace std;

class Complex {
private:
    int real, imag;
public:
    // Default Constructor
    Complex() {
        real = 0;
        imag = 0;
    }
    
    // One argument constructor
    Complex(int r) {
        real = r;
        imag = 0;
    }
    
    // Two arguments constructor
    Complex(int r, int i) {
        real = r;
        imag = i;
    }
    
    // Copy constructor
    Complex(const Complex &c) {
        real = c.real;
        imag = c.imag;
    }
    
    // Friend function to display the complex number
    friend void show(Complex c);
    
    // Friend function to find the addition of two complex numbers
    friend Complex sum(Complex c1, Complex c2);
};

// Function to display the complex number
void show(Complex c) {
    cout << c.real << " + " << c.imag << "i" << endl;
}

// Function to find the addition of two complex numbers
Complex sum(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    // Create objects of Complex class using different constructors
    Complex c1;
    Complex c2(5);
    Complex c3(3, 4);
    Complex c4 = c3;
    
    // Display the complex numbers using the show() function
    cout << "c1 = ";
    show(c1);
    cout << "c2 = ";
    show(c2);
    cout << "c3 = ";
    show(c3);
    cout << "c4 = ";
    show(c4);
    
    // Find the addition of two complex numbers using the sum() function
    Complex c5 = sum(c3, c4);
    cout << "c5 = ";
    show(c5);
    
    return 0;
}