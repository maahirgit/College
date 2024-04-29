#include <iostream>

class Manager {
public:
    Manager(int base_salary, int bonus) : base_salary_(base_salary), bonus_(bonus) {}
    
    int salary() const {
        return base_salary_ + bonus_;
    }
    
private:
    int base_salary_, bonus_;
};

class Scientist {
public:
    Scientist(int base_salary, int research_grant) : base_salary_(base_salary), research_grant_(research_grant) {}
    
    int salary() const {
        return base_salary_ + research_grant_;
    }
    
private:
    int base_salary_, research_grant_;
};

int calculate_total_salary(Manager manager,Scientist scientist) {
    return manager.salary() + scientist.salary();
}

int main() {
    Manager manager(50000, 10000);
    Scientist scientist(60000, 20000);
    
    int total_salary = calculate_total_salary(manager, scientist);
    std::cout << "Total salary: " << total_salary << std::endl;
    
    return 0;
}