#include <iostream>

using namespace std;
main()
{
    float u, t, a, s, v;
    cout << "Enter the initial velocity, time taken and the accelaration: \n";
    cin >> u >> t >> a;
    s = (u * t) + 0.5 * a * (t * t),
    cout << "The value of S is: " << s << endl;
    v = (u * u) - 2 * a * s;
    cout << "The value of V^2 is: " << v << endl;
}