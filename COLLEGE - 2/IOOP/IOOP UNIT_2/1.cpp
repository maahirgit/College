#include <iostream>
using namespace std;
main()
{
    int sec, h, m, s;
    cout << "Enter the number of Seconds: ";
    cin >> sec;
    s = sec;
    m = s/60;
    h = m/60;
    cout << "H:M:S - "<< h << " Hours : " << m << " Minutes : " << s << " Seconds";
}