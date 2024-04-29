// Create a structure for employee entity include data members Empid, Name, Dep_name,
// Salary include necessary member functions and make 2 variable of employee structure.
#include <iostream>
#include <string>

struct Employee {
    int Empid;
    std::string Name;
    std::string Dep_name;
    double Salary;

    void setEmpid(int empid) {
        Empid = empid;
    }
    void setName(std::string name) {
        Name = name;
    }
    void setDep_name(std::string dep_name) {
        Dep_name = dep_name;
    }
    void setSalary(double salary) {
        Salary = salary;
    }

    int getEmpid() {
        return Empid;
    }
    std::string getName() {
        return Name;
    }
    std::string getDep_name() {
        return Dep_name;
    }
    double getSalary() {
        return Salary;
    }
};

int main() {
    Employee emp1, emp2;

    emp1.setEmpid(1001);
    emp1.setName("John");
    emp1.setDep_name("Marketing");
    emp1.setSalary(50000.0);

    emp2.setEmpid(1002);
    emp2.setName("Jane");
    emp2.setDep_name("Sales");
    emp2.setSalary(60000.0);

    std::cout << "Employee 1:" << std::endl;
    std::cout << "Empid: " << emp1.getEmpid() << std::endl;
    std::cout << "Name: " << emp1.getName() << std::endl;
    std::cout << "Department: " << emp1.getDep_name() << std::endl;
    std::cout << "Salary: " << emp1.getSalary() << std::endl;

    std::cout << "Employee 2:" << std::endl;
    std::cout << "Empid: " << emp2.getEmpid() << std::endl;
    std::cout << "Name: " << emp2.getName() << std::endl;
    std::cout << "Department: " << emp2.getDep_name() << std::endl;
    std::cout << "Salary: " << emp2.getSalary() << std::endl;

    return 0;
}
