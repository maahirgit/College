#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159265;
double area(double r)
{
    return PI * r * r;
}
double area(double b, double h)
{
    return 0.5 * b * h;
}
double area(double l, double w)
{
    return l * w;
}
int main()
{
    cout << "Circle: r = 3, area = " << area(3) << endl;
    cout << "Triangle: b = 4, h = 5, area = " << area(4, 5) << endl;
    cout << "Rectangle: l = 6, w = 7, area = " << area(6, 7) << endl;
    return 0;
}
