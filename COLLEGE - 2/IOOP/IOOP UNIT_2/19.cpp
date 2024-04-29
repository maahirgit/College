#include <iostream>
using namespace std;
main()
{
    float arr[100], sum = 0, ave;
    int n, temp, x;
inp:
    cout << "Enter the total number of values (1-100) : ";
    cin >> n;
    if (n > 100 || n < 1)
    {
        cout << "The value should be in the range 1-100!\n";
        goto inp;
    }
    cout << "Any negative input will be ignored and will stop the execution.\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Number - " << i + 1 << " : ";
        cin >> arr[i];
        if (arr[i] < 0)
        {
            temp = i;
            goto lout;
        }
        else
        {
            sum += arr[i];
        }
    }
lout:
    x = n - temp;
    n = n - x;
    ave = sum / n;
    cout << "The Average is: " << ave;
}
