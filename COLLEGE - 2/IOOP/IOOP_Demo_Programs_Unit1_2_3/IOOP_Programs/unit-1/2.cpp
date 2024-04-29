//First Program using class
#include<iostream>
using namespace std;
class test
{
	public:
	int a;//variable-data member
};
int main()
{
	test t1;//object of a class
	t1.a=10;
	cout<<t1.a;
}