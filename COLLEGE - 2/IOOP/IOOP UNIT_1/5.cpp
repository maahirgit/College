/*Write a program to demonstrate swapping of two values using function.*/

#include<iostream>
using namespace std;

void swap(int ,int );
int main()
{
   
    int a,b;
    cout<<"Enter the Two Numbers to Swap : ";
    cin>>a>>b;
    cout<<"\nAfter Swapping of Two Numbers:";
    swap(a,b);
    
    return 0;
}
void swap(int x,int y)
{
 int z;
 z=x;
 x=y;
 y=z;
 cout<<" "<<x<<"   "<<y;
 
}