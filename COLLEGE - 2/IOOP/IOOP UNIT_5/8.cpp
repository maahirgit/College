#include <iostream>
#include <string>

class Employee {
public:
    // Default constructor
    Employee() : Empid_(0), Name_(""), Dep_name_(""), Salary_(0.0) {}
    
    // Constructor with arguments
    Employee(int empid, const std::string& name, const std::string& dep_name, double salary)
        : Empid_(empid), Name_(name), Dep_name_(dep_name), Salary_(salary) {}
    
    // Function to calculate salary after increment
    void calculateSalary(double increment) {
        Salary_ += increment;
    }
    
    // Function to display employee information
    void display() const {
        std::cout << "Employee ID: " << Empid_ << std::endl;
        std::cout << "Name: " << Name_ << std::endl;
        std::cout << "Department Name: " << Dep_name_ << std::endl;
        std::cout << "Salary: " << Salary_ << std::endl;
    }
    
private:
    int Empid_;
    std::string Name_;
    std::string Dep_name_;
    double Salary_;
};

int main() {
    // Create an employee object with default constructor
    Employee employee1;
    
    // Display the employee information
    std::cout << "Default employee information:" << std::endl;
    employee1.display();
    
    // Create an employee object with constructor arguments
    Employee employee2(1001, "John Doe", "IT", 50000.0);
    
    // Display the employee information
    std::cout << "\nEmployee information with constructor arguments:" << std::endl;
    employee2.display();
    
    // Calculate and display the new salary after increment
    employee2.calculateSalary(5000.0);
    std::cout << "\nEmployee information after salary increment:" << std::endl;
    employee2.display();
    
    return 0;
}