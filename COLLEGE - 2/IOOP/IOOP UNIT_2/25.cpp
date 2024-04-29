#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "\nThe ASCII Values of all the Characters are\n";
    for (i = 0; i <= 255; i++)
    {
        cout << "The ASCII value of " << char(i) << " is: " << i << endl;
    }
    return 0;
}