#include <iostream>
using namespace std;

class ClassA {
private:
    int a;
public:
    // Constructor to initialize the value of a
    ClassA(int val) {
        a = val;
    }
    
    // Friend function to find the maximum of a and b
    friend int findMax(ClassA aObj, ClassB bObj);
};

class ClassB {
private:
    int b;
public:
    // Constructor to initialize the value of b
    ClassB(int val) {
        b = val;
    }
    
    // Friend function to find the maximum of a and b
    friend int findMax(ClassA aObj, ClassB bObj);
};

// Function to find the maximum of a and b
int findMax(ClassA aObj, ClassB bObj) {
    if (aObj.a > bObj.b) {
        return aObj.a;
    }
    else {
        return bObj.b;
    }
}

int main() {
    // Create objects of ClassA and ClassB
    ClassA a(5);
    ClassB b(10);
    
    // Find the maximum of a and b using the findMax() function
    int maxVal = findMax(a, b);
    
    // Display the maximum value
    cout << "The maximum value is: " << maxVal << endl;
    
    return 0;
}