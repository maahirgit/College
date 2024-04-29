#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}
int main()
{
    int num = 10;
    cout << "The sum of the first " << num << " natural numbers is " << sum(num) << endl;
    return 0;
}
