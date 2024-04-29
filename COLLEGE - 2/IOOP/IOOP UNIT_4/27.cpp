// Create a class employee with name, salary, age as member, use get_data() and show()
// functions. Display details of 3 manager employees.
#include <iostream>
#include <string>
using namespace std;

class employee {
private:
    string name;
    float salary;
    int age;
public:
    void get_data() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter salary: ";
        cin >> salary;
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
    }
    void show() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    employee manager1, manager2, manager3;
    cout << "Enter details for manager 1:" << endl;
    manager1.get_data();
    cout << "Enter details for manager 2:" << endl;
    manager2.get_data();
    cout << "Enter details for manager 3:" << endl;
    manager3.get_data();
    cout << "Details of manager 1:" << endl;
    manager1.show();
    cout << "Details of manager 2:" << endl;
    manager2.show();
    cout << "Details of manager 3:" << endl;
    manager3.show();
    return 0;
}
