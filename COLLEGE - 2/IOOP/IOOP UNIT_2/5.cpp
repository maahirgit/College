#include <iostream>
using namespace std;
main()
{
    int x, y, res;
    cout << "Enter two Integers: \n";
    cin >> x >> y;
    res = (x + y) * (x + y);
    cout << "The value of (a+b)^2 is: " << res << endl;
    res = (x * x) + (y * y) + 2 * (x * y);
    cout << "The value a^2 + b^2 + 2ab is: " << res << endl;
}