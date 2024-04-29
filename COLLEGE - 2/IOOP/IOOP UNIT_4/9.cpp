// Create a MAX_MIN class that include two member function max and min. Max
// calculates max from 2 no and min calculates min from 2 no. (use scope resolution
// operator to define function outside of class).
#include <iostream>

class MAX_MIN {
public:
    static int max(int a, int b);
    static int min(int a, int b);
};

int MAX_MIN::max(int a, int b) {
    return a > b ? a : b;
}

int MAX_MIN::min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int x = 10, y = 20;

    std::cout << "Maximum of " << x << " and " << y << " is " << MAX_MIN::max(x, y) << std::endl;
    std::cout << "Minimum of " << x << " and " << y << " is " << MAX_MIN::min(x, y) << std::endl;

    return 0;
}
