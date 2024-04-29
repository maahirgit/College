// Create a class paper with width and height as data member. Create function outside a
// class that finds out area and perimeter of that paper .Pass object as argument. 
// area=weight*height , perimeter=2+width+height.
#include <iostream>

class Height {
private:
    int feet;
    int inches;
public:
    Height(int f, int i) : feet(f), inches(i) {}
    int get_feet() { return feet; }
    int get_inches() { return inches; }
};

void add_heights(Height h1, Height h2) {
    int total_inches = (h1.get_feet() + h2.get_feet()) * 12 + h1.get_inches() + h2.get_inches();
    int new_feet = total_inches / 12;
    int new_inches = total_inches % 12;
    std::cout << "The sum of " << h1.get_feet() << " feet " << h1.get_inches() << " inches and "
              << h2.get_feet() << " feet " << h2.get_inches() << " inches is "
              << new_feet << " feet " << new_inches << " inches." << std::endl;
}

int main() {
    Height h1(5, 9);
    Height h2(3, 6);
    add_heights(h1, h2);
    return 0;
}
