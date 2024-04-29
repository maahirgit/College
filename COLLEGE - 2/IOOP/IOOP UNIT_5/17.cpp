#include <iostream>
#include <string>

using namespace std;

class String {
  private:
    string str;

  public:
    String() {
      str = "default string";
    }

    void displayString() {
      cout << "String: " << str << endl;
    }

    void joinString(String s) {
      str += " " + s.str;
    }
};

int main() {
  String s1, s2, s3;

  s1.displayString(); // Output: String: default string

  s2.joinString(String("Hello"));
  s2.joinString(String("world"));
  s2.displayString(); // Output: String: Hello world

  s3.joinString(s1);
  s3.joinString(s2);
  s3.displayString(); // Output: String: default string Hello world

  return 0;
}
