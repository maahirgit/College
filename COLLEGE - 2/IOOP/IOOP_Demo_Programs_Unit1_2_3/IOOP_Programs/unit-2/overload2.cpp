#include<iostream>
using namespace std;
void test();
void test(int);
void test(double);
void test(char);
int main()
{
	test();
	test('A');
	test(10);
	test(15.5564);
}
void test()
{
	cout<<"This is function overloading"<<endl;
}
void test(int a)
{
	cout<<"Value of integer a is "<<a<<endl;
}
void test(double f)
{
	cout<<"Value of float f is "<<f<<endl;
}
void test(char c)
{
	cout<<"Value of character is "<<c<<endl;
}