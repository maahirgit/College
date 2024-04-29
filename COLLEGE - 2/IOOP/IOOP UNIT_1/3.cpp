/* Write a C++ program to enter the principal, rate & time and print the simple
interest. */

#include<iostream>
using namespace std;

int main() {
   int simple_interest, principal, rate, time;
   
   cout<<"Enter principal : ";
   cin>>principal;
   
   cout<<"Enter rate : ";
   cin>>rate;
   
   cout<<"Enter time : ";
   cin>>time;
   
   simple_interest = (principal * rate * time) / 100;
   cout << "Simple Interest is : = " << simple_interest;
}