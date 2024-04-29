#include <iostream>
using namespace std;
main()
{
    int num, rem, rev = 0, og;
    cout << "Enter an Integer: ";
    cin >> num;
    og = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    cout << "The reverse of " << og << " is: " << rev;
}