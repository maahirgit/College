#include <iostream>
using namespace std;
class ap
{
public:
    int l, b;
    void input()
    {
        cout << "Enter the length and the breath: \n";
        cin >> l >> b;
    }
    int cala()
    {
        return l * b;
    }
    int calp()
    {
        return 2 * (l + b);
    }
};
main()
{
    ap rect;
    int res;
    rect.input();
    res = rect.cala();
    cout << "The Area of the Rectangle is: " << res << endl;
    res = rect.calp();
    cout << "The Perimeter of the Rectangle is: " << res << endl;
}