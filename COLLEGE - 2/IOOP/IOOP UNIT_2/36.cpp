#include <iostream>
using namespace std;
int multiply(int a, int b)
{
    return a * b;
}
int multiply(int a, int b, int c)
{
    return a * b * c;
}
int multiply(int a, int b, int c, int d)
{
    return a * b * c * d;
}
int main()
{
    cout << "2 * 3 = " << multiply(2, 3) << endl;
    cout << "2 * 3 * 4 = " << multiply(2, 3, 4) << endl;
    cout << "2 * 3 * 4 * 5 = " << multiply(2, 3, 4, 5) << endl;
    return 0;
}
