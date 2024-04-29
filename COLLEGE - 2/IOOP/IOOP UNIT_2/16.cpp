#include <iostream>
using namespace std;
main()
{
    int x, y, sum;
    cout << "Enter two integer (not zero): \n";
    cin >> x >> y;
    while (x != 0 && y != 0)
    {
        sum = x + y;
        cout << "The addition is: " << sum << endl;
        cout << "Enter two integer: \n";
        cin >> x >> y;
    }
    cout << "Bye!\n";
}