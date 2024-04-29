// Write a C++ program to make class for circle.
#include<iostream>
using namespace std;
class circle
{
    float radius, area;
    public:
        void circule()
        {
            cout<<"\n Enter the value of Radius : ";
            cin>>radius;
        }
        void calculate(){
            area = 3.14 * radius * radius;
        }
        void display(){
            cout<<"\n Area of Circle : "<<area;
        }          
};
int main()
{
        circle cr;  
        cr.circule();
        cr.calculate(); 
        cr.display();

}