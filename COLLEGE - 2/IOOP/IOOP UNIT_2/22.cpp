#include <iostream>
using namespace std;
main()
{
    string str;
    char temp;
    int i, len;
    cout << "Enter a string: ";
    getline(cin, str);
    len = str.length();
    cout << "The normal string is: \n"
         << str << endl;
    for (i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    cout << "The reversed string is: \n"
         << str << endl;
}
