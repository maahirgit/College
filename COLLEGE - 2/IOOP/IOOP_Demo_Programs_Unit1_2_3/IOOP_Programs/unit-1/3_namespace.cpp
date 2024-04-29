#include<iostream>
using namespace std;

namespace hemali
{
	//int a;
	void test()
	{
		cout<<"My namespace";
	}
}
int main()
{
	hemali::test();//scope resolution ope
}
