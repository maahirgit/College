// Write a C++ program to create a student class include data members Rollno, Name,
// counter as static variable /data member include necessary member functions And create 2
// objects of emp also use public and private access specifier. Also include static member
// function to access static variable counter.
#include <iostream>
#include <string>

class Student {
private:
    int rollNo;
    std::string name;
    static int counter;
public:
    Student(std::string n) : name(n) {
        rollNo = ++counter;
    }
    void display() {
        std::cout << "Roll No.: " << rollNo << std::endl;
        std::cout << "Name: " << name << std::endl;
    }
    static int getCounter() {
        return counter;
    }
};

int Student::counter = 0;

int main() {
    Student s1("John");
    Student s2("Alice");
    s1.display();
    s2.display();
    std::cout << "Counter: " << Student::getCounter() << std::endl;
    return 0;
}
