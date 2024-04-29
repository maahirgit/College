#include<iostream>
using namespace std;
void test(char ='H', int =3);//prototype->default argument
int main()
{
	cout<<"Calling function without any argument"<<endl;
	test();
	cout<<"-----------------------------------"<<endl;
	cout<<"Calling function with first argument"<<endl;
	test(10);
	cout<<"-----------------------------------"<<endl;
	cout<<"Calling function with first and second argument"<<endl;
	test('M',5);
}
void test(char c, int a)
{
	for(int i=1;i<a;i++)
	{
		cout<<c<<endl;
	}
}
