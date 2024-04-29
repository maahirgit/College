//  Write a C++Use friend function to find out mean of three numbers from three different
// classes
#include <iostream>

using namespace std;

class ClassA;
class ClassB;
class ClassC;

class ClassA {
private:
    int a;
public:
    ClassA(int x) {
        a = x;
    }
    friend float mean(ClassA, ClassB, ClassC);
};

class ClassB {
private:
    int b;
public:
    ClassB(int x) {
        b = x;
    }
    friend float mean(ClassA, ClassB, ClassC);
};

class ClassC {
private:
    int c;
public:
    ClassC(int x) {
        c = x;
    }
    friend float mean(ClassA, ClassB, ClassC);
};

float mean(ClassA objE, ClassB objB, ClassC objC) {
    return (objE.a + objB.b + objC.c) / 3.0;
}

int main() {
    ClassA objA(10);
    ClassB objB(20);
    ClassC objC(30);
    
    float m = mean(objA, objB, objC);
    cout << "Mean of the three numbers is: " << m << endl;
    
    return 0;
}
