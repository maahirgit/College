#include <iostream>
using namespace std;
main()
{
    int l, x, y, z;
    cout << "Enter three Integers: \n";
    cin >> x >> y >> z;
    l = x > y ? (x > z ? x : z) : (y > z ? y : z);
    cout << "The largest value is: " << l;
}