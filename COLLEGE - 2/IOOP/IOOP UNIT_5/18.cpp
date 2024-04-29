#include <iostream>
#include <string>

using namespace std;

class Student {
  private:
    string name;
    int rollNo;

  public:
    void get_data() {
      cout << "Enter name: ";
      getline(cin, name);
      cout << "Enter roll number: ";
      cin >> rollNo;
    }

    void display_data() {
      cout << "Name: " << name << endl;
      cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
  Student* studentPtr = new Student(); // create Student object with new operator
  studentPtr->get_data(); // set data for Student object
  studentPtr->display_data(); // display data for Student object
  delete studentPtr; // delete Student object with delete operator

  return 0;
}