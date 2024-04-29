#include <iostream>
using namespace std;
main()
{
    int x, y;
    cout << "Enter two integers: \n";
    cin >> x >> y;
    if (x == y)
    {
        cout << x << " and " << y << " are equal\n";
    }
    else
    {
        cout << x << " and " << y << " are not equal\n";
    }
}