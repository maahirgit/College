#include <iostream>
#include <string>

class Employee {
public:
    // Constructor with arguments
    Employee(int id, const std::string& name, const std::string& department, double salary)
        : Empid_(id), Name_(name), Dep_name_(department), Salary_(salary) {}
    
    double getSalary() const {
        return Salary_;
    }
    
    void printInfo() const {
        std::cout << "Employee ID: " << Empid_ << std::endl;
        std::cout << "Name: " << Name_ << std::endl;
        std::cout << "Department: " << Dep_name_ << std::endl;
        std::cout << "Salary: $" << Salary_ << std::endl;
    }
    
private:
    int Empid_;
    std::string Name_;
    std::string Dep_name_;
    double Salary_;
};

int main() {
    // Create an employee object with constructor arguments
    Employee emp(1001, "John Doe", "Sales", 50000.0);
    
    // Print the employee information
    emp.printInfo();
    
    // Calculate and print the employee salary
    std::cout << "Annual salary: $" << emp.getSalary() * 12 << std::endl;
    
    return 0;
}