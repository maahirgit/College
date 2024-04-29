#include <iostream>
using namespace std;
main()
{
    int m, n, temp;
    cout << "Enter the values of M and N: \n";
    cin >> m >> n;
    cout << "Before Swapping: \n"
         << "M = " << m << endl
         << "N = " << n << endl;
    temp = m;
    m = n;
    n = temp;
    cout << "After Swapping: \n"
         << "M = " << m << endl
         << "N = " << n << endl;
}