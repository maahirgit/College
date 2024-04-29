#include <iostream>
using namespace std;
main()
{
    float m, p, c, cs, e, sum, per;
    cout << "Enter the marks of Maths: ";
    cin >> m;
    cout << "Enter the marks of Physics: ";
    cin >> p;
    cout << "Enter the marks of Chemistry: ";
    cin >> c;
    cout << "Enter the marks of Computer Science: ";
    cin >> cs;
    cout << "Enter the marks of English: ";
    cin >> e;
    sum = m + p + c + cs + e;
    cout << "Total: " << sum << " out of 500" << endl;
    per = sum / 5;
    cout << "Percentage: " << per << "%" << endl;
}

