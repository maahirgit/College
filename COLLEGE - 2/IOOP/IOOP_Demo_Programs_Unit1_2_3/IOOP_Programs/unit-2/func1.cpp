#include<iostream>
using namespace std;
void fun();//prototype
int main()
{
	fun();//calling
}
void fun()//definition
{
	cout<<"Recursion"<<endl;
	fun();
}