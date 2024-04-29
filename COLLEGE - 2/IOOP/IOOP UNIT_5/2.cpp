#include <iostream>

class MyClass1 {
public:
    MyClass1(int x, int y) : x_(x), y_(y) {}
    
    int size() const {
        return x_ * y_;
    }
    
private:
    int x_, y_;
};

class MyClass2 {
public:
    MyClass2(int z) : z_(z) {}
    
    int size() const {
        return z_;
    }
    
private:
    int z_;
};

int main() {
    MyClass1 obj1(3, 4);
    MyClass2 obj2(5);
    
    int size1 = obj1.size();
    int size2 = obj2.size();
    
    if (size1 > size2) {
        std::cout << "Object 1 is larger." << std::endl;
    } else if (size2 > size1) {
        std::cout << "Object 2 is larger." << std::endl;
    } else {
        std::cout << "Both objects are the same size." << std::endl;
    }
    
    return 0;
}