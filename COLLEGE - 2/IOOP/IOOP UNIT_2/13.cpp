#include <iostream>
using namespace std;
/* main()
{
    int a = 0, b = 1, c, lim;
    cout << "Enter the limit: ";
    cin >> lim;
    cout << a << "\t" << b << "\t";
    for (int i = 2; i < lim; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << "\t";
    }
} */
// OR
main()
{
    int a = 0, b = 1, c, lim;
    cout << "Enter the limit: ";
    cin >> lim;
    cout << a << "\t" << b << "\t";
    c = a + b;
    cout << c << "\t";
    while (c <= lim)
    {
        cout << c << "\t";
        a = b;
        b = c;
        c = a + b;
    }
}