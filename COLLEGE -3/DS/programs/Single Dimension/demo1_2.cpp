

#include<iostream>
using namespace std;
class Demo
{
	//data members
	//member functions
	int a[5];
	public:
	void getvalues()
	{
		for(int i=0;i<=4;i++)
		{
		cout<<"\n enter value:";
		cin>>a[i];
		}
	}
	void printvalues()
	{
		for(int i=0;i<=4;i++)
		{
		cout<<"\n element of  an Array  A is:"<<a[i];
		}

	}

};
int main()
{

	Demo d1;
	d1.getvalues();
	d1.printvalues();
	//counter
	return 0;
	
}
	
