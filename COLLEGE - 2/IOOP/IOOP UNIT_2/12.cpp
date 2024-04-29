#include <iostream>
using namespace std;
main()
{
    int n, i, var = 0;
    cout << "Enter an integer: \n";
    cin >> n;
    if (n <= 1)
    {
        var = 1;
    }
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            var = 1;
        }
    }
    if (var == 0)
    {
        cout << n << " is a prime number!";
    }
    else
    {
        cout << n << " is not a prime number!";
    }
}