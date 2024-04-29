#include <iostream>
using namespace std;
main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        if (i == 6 || i == 9)
        {
            continue;
        }
        cout << i << "\t";
    }
}