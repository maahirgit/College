#include <iostream>
#include <string>

using namespace std;

class String {
  private:
    string fname;
    string lname;

  public:
    void setData() {
      cout << "Enter first name: ";
      cin >> fname;
      cout << "Enter last name: ";
      cin >> lname;
    }

    void displayData() {
      cout << "First Name: " << fname << endl;
      cout << "Last Name: " << lname << endl;
    }
};

int main() {
  String* stringPtr = new String(); // create String object with new operator
  stringPtr->setData(); // set data for String object
  stringPtr->displayData(); // display data for String object
  delete stringPtr; // delete String object with delete operator

  return 0;
}