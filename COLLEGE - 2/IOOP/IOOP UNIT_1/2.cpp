/* Write a C++ program for Addition, multiplication, subtraction, division of
 two number Using switch case */

#include<iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;

  cout <<"Enter operator: +, -, *, /: ";
  cin >> op;

  cout <<"Enter First Number : ";
  cin >>num1;
  cout << "Enter Second Number : ";
  cin >>num2;

  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}
