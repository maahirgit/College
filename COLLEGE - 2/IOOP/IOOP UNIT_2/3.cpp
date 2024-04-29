#include <iostream>
using namespace std;
const float pi = 3.14;
float area(int r)
{
    return pi * r * r;
}
float cir(int r)
{
    return 2 * pi * r;
}
main()
{
    int r;
    float res;
    cout << "Enter the radius: ";
    cin >> r;
    res = area(r);
    cout << "The Area of the circle is: " << res << endl;
    res = cir(r);
    cout << "The Circumference of the circle is: " << res << endl;
}