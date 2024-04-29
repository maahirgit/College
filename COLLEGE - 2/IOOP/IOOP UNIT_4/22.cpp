// Write a C++ program to create unique roll number for students using static data member.
#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    static int rollNumber;
public:
    Student(std::string name) : name(name) {
        rollNumber++;
    }
    int getRollNumber()  {
        return rollNumber;
    }
    std::string getName()  {
        return name;
    }
};

int Student::rollNumber = 0; // Initialize static data member

int main() {
    Student s1("John");
    Student s2("Alice");
    Student s3("Bob");

    std::cout << "Student " << s1.getRollNumber() << " is " << s1.getName() << std::endl;
    std::cout << "Student " << s2.getRollNumber() << " is " << s2.getName() << std::endl;
    std::cout << "Student " << s3.getRollNumber() << " is " << s3.getName() << std::endl;

    return 0;
}
