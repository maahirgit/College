// Create a class for employee entity include data members Empid, Name, Dep_name,
// Salary include necessary member functions and make 2 variable of employee class.
#include <iostream>
#include <string>

class Employee {
private:
    int Empid;
    std::string Name;
    std::string Dep_name;
    double Salary;

public:
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
    Employee employee1, employee2;

    int empid1, empid2;
    std::string name1, name2, dep_name1, dep_name2;
    double salary1, salary2;

    std::cout << "Enter Employee 1 details:" << std::endl;
    std::cout << "Enter Empid: ";
    std::cin >> empid1;
    employee1.setEmpid(empid1);

    std::cout << "Enter Name: ";
    std::cin >> name1;
    employee1.setName(name1);

    std::cout << "Enter Dep_name: ";
    std::cin >> dep_name1;
    employee1.setDep_name(dep_name1);

    std::cout << "Enter Salary: ";
    std::cin >> salary1;
    employee1.setSalary(salary1);

    std::cout << std::endl << "Enter Employee 2 details:" << std::endl;
    std::cout << "Enter Empid: ";
    std::cin >> empid2;
    employee2.setEmpid(empid2);

    std::cout << "Enter Name: ";
    std::cin >> name2;
    employee2.setName(name2);

    std::cout << "Enter Dep_name: ";
    std::cin >> dep_name2;
    employee2.setDep_name(dep_name2);

    std::cout << "Enter Salary: ";
    std::cin >> salary2;
    employee2.setSalary(salary2);

    std::cout << std::endl << "Employee 1 Details:" << std::endl;
    std::cout << "Empid: " << employee1.getEmpid() << std::endl;
    std::cout << "Name: " << employee1.getName() << std::endl;
    std::cout << "Dep_name: " << employee1.getDep_name() << std::endl;
    std::cout << "Salary: " << employee1.getSalary() << std::endl;

    std::cout << std::endl << "Employee 2 Details:" << std::endl;
    std::cout << "Empid: " << employee2.getEmpid() << std::endl;
    std::cout << "Name: " << employee2.getName() << std::endl;
    std::cout << "Dep_name: " << employee2.getDep_name() << std::endl;
    std::cout << "Salary: " << employee2.getSalary() << std::endl;

    return 0;
}
