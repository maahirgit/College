// Create a class paper with width and height as data member. Create function outside a
// class that finds out area and perimeter of that paper .Pass object as argument. 
// area=weight*height , perimeter=2+width+height.
#include <iostream>

class Paper {
private:
    double width;
    double height;
public:
    Paper(double w, double h){
    width=w;
    height=h;
    }
    double get_width() { 
        return width;
        }
    double get_height() {
        return height;
        }
};

void calculate_paper_properties(Paper p) {
    double area = p.get_width() * p.get_height();
    double perimeter = 2 * (p.get_width() + p.get_height());
    std::cout << "Area: " << area << std::endl;
    std::cout << "Perimeter: " << perimeter << std::endl;
}

int main() {
    Paper my_paper(8.5, 11.0);
    calculate_paper_properties(my_paper);
    return 0;
}
