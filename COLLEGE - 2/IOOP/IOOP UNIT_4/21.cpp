// Write a C++ program to add data members of two different on Objects of two Different
// class using friend Function.
#include <iostream>

class Class1;

class Class2 {
private:
    int data;
public:
    Class2(int d) {
    data=d;
    }
    friend int addData(Class1 c1, Class2 c2);
};

class Class1 {
private:
    int data;
public:
    Class1(int d){
    data=d; 
    }
    friend int addData(Class1 c1, Class2 c2);
};

int addData(Class1 c1, Class2 c2) {
    return c1.data + c2.data;
}

int main() {
    Class1 obj1(10);
    Class2 obj2(20);

    std::cout << "Sum of data members: " << addData(obj1, obj2) << std::endl;

    return 0;
}
