// Make the nested class "Display" is given as "public" member of the class "Nest" and
// access values of display class. (Hint use make object using :: like "Nest::Display")
#include <iostream>

class Nest {
private:
    int x;
public:
    Nest(int n) : x(n) {}
    class Display {
    public:
        void showX(Nest n) {
            std::cout << "The value of x is " << n.x << std::endl;
        }
    };
};

int main() {
    Nest n(5);
    Nest::Display d;
    d.showX(n);
    return 0;
}
