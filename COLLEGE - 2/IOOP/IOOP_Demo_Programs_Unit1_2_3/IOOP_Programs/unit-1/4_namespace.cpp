#include<iostream>
//using namespace std;
void test1();
namespace hemali
{
	int a;
	void test()
	{
		std::cout<<"My namespace";
	}
}
using namespace hemali;
int main()
{
	test();//scope resolution ope
}
