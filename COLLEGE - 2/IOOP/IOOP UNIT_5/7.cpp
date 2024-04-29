#include <iostream>
#include <string>

class Student {
public:
    // Default constructor
    Student() : Rollno_(0), Name_(""), s1_(0), s2_(0), s3_(0) {}
    
    // Constructor with arguments
    Student(int rollno, const std::string& name, double s1, double s2, double s3)
        : Rollno_(rollno), Name_(name), s1_(s1), s2_(s2), s3_(s3) {}
    
    void display() const {
        std::cout << "Roll No: " << Rollno_ << std::endl;
        std::cout << "Name: " << Name_ << std::endl;
        std::cout << "Subject 1 marks: " << s1_ << std::endl;
        std::cout << "Subject 2 marks: " << s2_ << std::endl;
        std::cout << "Subject 3 marks: " << s3_ << std::endl;
    }
    
private:
    int Rollno_;
    std::string Name_;
    double s1_;
    double s2_;
    double s3_;
};

int main() {
    // Create a student object with default constructor
    Student student1;
    
    // Display the student information
    std::cout << "Default student information:" << std::endl;
    student1.display();
    
    // Create a student object with constructor arguments
    Student student2(1001, "John Doe", 90.5, 85.0, 95.5);
    
    // Display the student information
    std::cout << "\nStudent information with constructor arguments:" << std::endl;
    student2.display();
    
    return 0;
}