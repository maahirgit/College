#include <iostream>
using namespace std;
inline void show_int(int x)
{
    cout << x << endl;
}
inline void show_float(float x)
{
    cout << x << endl;
}
inline void show_double(double x)
{
    cout << x << endl;
}
inline void show_char(char x)
{
    cout << x << endl;
}
inline void show_string(string x)
{
    cout << x << endl;
}
int main()
{
    int x = 10;
    float y = 3.14;
    double z = 1.2345678;
    char a = 'A';
    string b = "Hello";

    show_int(x);
    show_float(y);
    show_double(z);
    show_char(a);
    show_string(b);

    return 0;
}
