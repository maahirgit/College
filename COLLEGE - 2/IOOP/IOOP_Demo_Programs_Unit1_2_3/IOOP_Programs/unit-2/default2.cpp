#include<iostream>
using namespace std;
void test(int , int);
int main()
{
	cout<<"Without argument ";
	cout<<test(30,10)<<endl;
	cout<<"With one argument ";
	cout<<test(22,33)<<endl;
	cout<<"With both argument";
	cout<<test(56,20)<<endl;
}
void test(int a, int b=20)
{
	cout<<"1st value="<<a<<endl;
	cout<<"2nd value="<<b<<endl;
}