#include <iostream>

// forward declarations
class A;
class B;
class C;

// friend function declaration
double avg(const A& a, const B& b, const C& c);

class A {
public:
    A(int x) : x_(x) {}
    
    friend double avg(const A& a, const B& b, const C& c);

private:
    int x_;
};

class B {
public:
    B(int y) : y_(y) {}
    
    friend double avg(const A& a, const B& b, const C& c);

private:
    int y_;
};

class C {
public:
    C(int z) : z_(z) {}
    
    friend double avg(const A& a, const B& b, const C& c);

private:
    int z_;
};

// friend function definition
double avg(const A& a, const B& b, const C& c) {
    return (a.x_ + b.y_ + c.z_) / 3.0;
}

int main() {
    A a(1);
    B b(2);
    C c(3);
    double result = avg(a, b, c);
    std::cout << "Average: " << result << std::endl;
    return 0;
}