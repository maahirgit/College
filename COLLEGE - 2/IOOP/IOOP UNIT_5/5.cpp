#include <iostream>
#include <string>

class Student {
public:
    // Default constructor
    Student() : Rollno_(0), name_(""), s1_(0), s2_(0), s3_(0) {}
    
    void display() const {
        std::cout << "Roll number: " << Rollno_ << std::endl;
        std::cout << "Name: " << name_ << std::endl;
        std::cout << "Subject 1: " << s1_ << std::endl;
        std::cout << "Subject 2: " << s2_ << std::endl;
        std::cout << "Subject 3: " << s3_ << std::endl;
    }
    
private:
    int Rollno_;
    std::string name_;
    int s1_, s2_, s3_;
};

int main() {
    // Create a default student object
    Student student;
    
    // Display the student details
    student.display();
    
    return 0;
}