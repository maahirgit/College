#include <iostream>
using namespace std;
 
int main()
{
    int num1, num2;
    double result;
    char option, cont;

    cout << "*** Basic Calculator Project ***";

    do
    {
        cout << "\nEnter the first number:";

        cin >> num1;

        cout << "Enter the 2nd number: ";

        cin >> num2;

        cout << "Enter the operation to perform:";

        cin >> option;

        switch (option)
        {
            case '+':
                {
                    result = num1 + num2;

                    cout << "\nThe answer of multiplication is:" << result;

                    break;
                }

            case '-':
                {
                    result = num1 - num2;

                    cout << "The answer of subtraction is:" << result;

                    break;
                }

            case '*':
                {
                    result = num1 * num2;

                    cout << "The answer of multiplication is:" << result;

                    break;
                }

            case '/':
                {
                    result = num1 / num2;

                    cout << "The answer of division is:" << result;

                    break;
                }
        }

        cout << "\nDo you want to perform another operation? (y/n)";

        cin >> cont;

    }
    while (cont == 'y');
}