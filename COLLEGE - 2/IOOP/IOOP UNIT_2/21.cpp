#include <iostream>
using namespace std;
main()
{
    int x, y, z;
    cout << "Enter three integers: \n";
    cin >> x >> y >> z;
    if (x > y && x > z)
    {
        cout << "X = " << x << " is the greatest!\n";
    }
    else if (y > x && y > z)
    {
        cout << "Y = " << y << " is the greatest!\n";
    }
    else if (z > y && z > x)
    {
        cout << "Z = " << z << " is the greatest!\n";
    }
    else
    {
        cout << "Two or more integers are equal!\n";
    }
}
