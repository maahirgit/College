#include <iostream>
#include <math.h>
using namespace std;
main()
{
    int num, n = 0, og, rev = 0, rem, mul, count;
    cout << "Enter an integer: ";
    cin >> num;
    og = num;
    while (og != 0)
    {
        og /= 10;
        ++n;
    }
    og = num;
    while (og != 0)
    {
        rem = og % 10;
        mul = round(pow(rem, n));
        rev += mul;
        og /= 10;
    }
    if (rev == num)
    {
        cout << num << " is an Armstrong Number.\n";
    }
    else
    {
        cout << num << " is not an Armstrong Number.\n";
    }
}