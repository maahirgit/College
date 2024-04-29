// Create an Array Of Class Object using class name student in which create data members
// like roll no, age, height, weight and gender and also create member function which accept
// information of above data member and display the same.
#include <iostream>

class Student {
private:
    int roll_no;
    int age;
    double height;
    double weight;
    std::string gender;

public:
    void get_info();
    void display_info();
};

void Student::get_info() {
    std::cout << "Enter roll number: ";
    std::cin >> roll_no;
    std::cout << "Enter age: ";
    std::cin >> age;
    std::cout << "Enter height (in meters): ";
    std::cin >> height;
    std::cout << "Enter weight (in kg): ";
    std::cin >> weight;
    std::cout << "Enter gender: ";
    std::cin >> gender;
}

void Student::display_info() {
    std::cout << "Roll Number: " << roll_no << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << " meters" << std::endl;
    std::cout << "Weight: " << weight << " kg" << std::endl;
    std::cout << "Gender: " << gender << std::endl;
}

int main() {
    const int NUM_STUDENTS = 3;
    Student students[NUM_STUDENTS];

    // Get information about each student
    for (int i = 0; i < ; i++) {
        std::cout << "Enter information for Student " << i+1 << ":" << std::endl;
        students[i].get_info();
    }

    // Display information about each student
    std::cout << "Information for all students:" << std::endl;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        std::cout << "Student " << i+1 << ":" << std::endl;
        students[i].display_info();
        std::cout << std::endl;
    }

    return 0;
}
