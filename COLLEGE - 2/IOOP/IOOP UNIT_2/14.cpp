#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    while (n < 0)
    {
        cout << "Enter a POSITIVE integer: ";
        cin >> n;
    }
    cout << "The entered positive integer is: " << n;
}