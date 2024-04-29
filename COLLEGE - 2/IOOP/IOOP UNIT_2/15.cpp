#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "Enter a integer: ";
    cin >> n;
    if (n < 0)
    {
        cout << n << " is a negative integer!\n";
    }
    else
    {
        cout << n << " is a positive integer!\n";
    }
}