// Create one class for student include data members Rollno, name, sub1, sub2, sub3. Take
// values from user for all the variables and print them.
#include <iostream>
#include <string>

class Student {
private:
    int Rollno;
    std::string name;
    int sub1;
    int sub2;
    int sub3;

public:
    void setRollno(int rollno) {
        Rollno = rollno;
    }
    void setName(std::string name) {
        this->name = name;
    }
    void setSub1(int sub1) {
        this->sub1 = sub1;
    }
    void setSub2(int sub2) {
        this->sub2 = sub2;
    }
    void setSub3(int sub3) {
        this->sub3 = sub3;
    }

    int getRollno() {
        return Rollno;
    }
    std::string getName() {
        return name;
    }
    int getSub1() {
        return sub1;
    }
    int getSub2() {
        return sub2;
    }
    int getSub3() {
        return sub3;
    }
};

int main() {
    Student student;

    int rollno, sub1, sub2, sub3;
    std::string name;

    std::cout << "Enter Rollno: ";
    std::cin >> rollno;
    student.setRollno(rollno);

    std::cout << "Enter Name: ";
    std::cin >> name;
    student.setName(name);

    std::cout << "Enter Sub1 marks: ";
    std::cin >> sub1;
    student.setSub1(sub1);

    std::cout << "Enter Sub2 marks: ";
    std::cin >> sub2;
    student.setSub2(sub2);

    std::cout << "Enter Sub3 marks: ";
    std::cin >> sub3;
    student.setSub3(sub3);

    std::cout << std::endl << "Student Details:" << std::endl;
    std::cout << "Rollno: " << student.getRollno() << std::endl;
    std::cout << "Name: " << student.getName() << std::endl;
    std::cout << "Sub1 marks: " << student.getSub1() << std::endl;
    std::cout << "Sub2 marks: " << student.getSub2() << std::endl;
    std::cout << "Sub3 marks: " << student.getSub3() << std::endl;

    return 0;
}
