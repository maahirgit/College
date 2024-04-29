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
int main()
{
	test1();//scope resolution ope
}
void test1()
{
	hemali::test();
	std::cout<<"I m UDF";
}