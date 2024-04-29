#include <iostream>
using namespace std;
main()
{
    float x, y, res;
    int ch;
    while (ch != 5)
    {
        cout << "\nEnter: \n"
             << "1. For Addition.\n"
             << "2. For Subtraction.\n"
             << "3. For Multiplication.\n"
             << "4. For Division.\n"
             << "5. To Exit.\n";
        cin >> ch;
        if (ch == 5)
        {
            cout << "Thanks for Visiting!\n";
            break;
        }
        cout << "Enter two numbers: \n";
        cin >> x >> y;
        switch (ch)
        {
        case 1:
            res = x + y;
            cout << "The Addition is: " << res << endl;
            break;
        case 2:
            res = x - y;
            cout << "The Subtractionn is: " << res << endl;
            break;
        case 3:
            res = x * y;
            cout << "The Multiplication is: " << res << endl;
            break;
        case 4:
            res = x / y;
            cout << "The Division is: " << res << endl;
            break;
        default:
            cout << "Invalid Input!";
            break;
        }
    }
}
