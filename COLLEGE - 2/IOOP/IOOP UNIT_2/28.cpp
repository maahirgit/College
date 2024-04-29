#include <iostream>
using namespace std;
int reverse(int num)
{
    int rev = 0,sum;
    while (num > 0)
    {
        sum=num%10;
        rev = rev * 10+sum; 
        num /= 10;
    }
    return rev;
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The reverse of the number is: " << reverse(num) << endl;
    return 0;
}
