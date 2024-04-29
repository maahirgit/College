// Write a C++ Write a static function setcount() that increments the counter every time the
// // function is called.
#include <iostream>
using namespace std;

class Counter {
private:
    static int count;
public:
    static void setcount() {
        count++;
    }
    static int getcount() {
        return count;
    }
};

int Counter::count = 0;

int main() {
    Counter::setcount();
    Counter::setcount();
    Counter::setcount();
    cout << "The counter value is " << Counter::getcount() << endl;
    return 0;
}
