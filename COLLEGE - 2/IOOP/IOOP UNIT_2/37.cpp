#include <iostream>
using namespace std;
int sum(int a, int b = 0)
{
    return a + b;
}
int main()
{
    cout << "2 + 3 = " << sum(2, 3) << endl;
    cout << "2 + 0 = " << sum(2) << endl;
    return 0;
}
