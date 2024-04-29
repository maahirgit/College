// Create a class name Box, in that create data member as height, breadth and length, and
// also create member function named as volume and compare. Create two objects and
// compare which box volume is greater using ‘this’ pointer.
#include <iostream>
using namespace std;

class Box {
    private:
        double height;
        double breadth;
        double length;

    public:
        void setDimensions(double h, double b, double l) {
            height = h;
            breadth = b;
            length = l;
        }

        double volume() {
            return height * breadth * length;
        }

        bool compare(Box &otherBox) {
            return (this->volume() > otherBox.volume());
        }
};

int main() {
    Box box1, box2;

    box1.setDimensions(3, 4, 5);
    box2.setDimensions(4, 5, 6);

    if (box1.compare(box2)) {
        cout << "Box 1 has greater volume than Box 2" << endl;
    } else {
        cout << "Box 2 has greater volume than Box 1" << endl;
    }

    return 0;
}
