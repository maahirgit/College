/* Write a C++ program to calculate area of triangle.(area=0.5*b*h) */

#include <iostream>
using namespace std;

int main() {
    int height, base;
    float ans;  

    cout<<"Enter height and base : ";
    cin>>height>>base;

    ans= (0.5)*height*base; 

    cout<<"Area of triangle is : "<<ans;

}