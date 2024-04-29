#include<iostream>
using namespace std;
class test
{
	int num;
	public:
		void get()
		{
			cout<<"Enter value of num";
			cin>>num;
		}
		void sq();		
};
void test :: sq()//member function of a class
{
	cout<<"Square of a numbers is "<<num*num<<endl;
}
void cube(int no)//non-member function of a class - UDF
{
	cout<<"Cube of a numbers is "<<no*no*no<<endl;
}
int main()
{
	int n;
	cout<<"Input value of n";
	cin>>n;
	test t1;
	t1.get();
	t1.sq();
	cube(n);
}




