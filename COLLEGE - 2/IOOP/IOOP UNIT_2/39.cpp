#include <iostream>
using namespace std;
int sum(int a, int b = 0, int c = 0, int d = 1)
{
    return a + b + c + d;
}
int main()
{
    cout << "2 + 3 + 4 + 5 = " << sum(2, 3, 4, 5) << endl;
    cout << "2 + 3 + 0 + 1 = " << sum(2, 3) << endl;
    cout << "2 + 0 + 0 + 1 = " << sum(2) << endl;
    cout << "0 + 0 + 0 + 1 = " << sum(0) << endl;
    return 0;
}
