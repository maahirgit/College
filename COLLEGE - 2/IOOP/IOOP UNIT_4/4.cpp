// Create one structure for student include data members Rollno, name, sub1, sub2, sub3.
// Take values from user for all the variables and print them.
#include <iostream>
#include <string>

struct Student {
    int Rollno;
    std::string name;
    float sub1, sub2, sub3;
};

int main() {
    Student s;
    std::cout << "Enter Rollno: ";
    std::cin >> s.Rollno;
    std::cout << "Enter name: ";
    std::cin >> s.name;
    std::cout << "Enter marks for sub1: ";
    std::cin >> s.sub1;
    std::cout << "Enter marks for sub2: ";
    std::cin >> s.sub2;
    std::cout << "Enter marks for sub3: ";
    std::cin >> s.sub3;

    std::cout << "Rollno: " << s.Rollno << std::endl;
    std::cout << "Name: " << s.name << std::endl;
    std::cout << "Marks for sub1: " << s.sub1 << std::endl;
    std::cout << "Marks for sub2: " << s.sub2 << std::endl;
    std::cout << "Marks for sub3: " << s.sub3 << std::endl;
    return 0;
}
