

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
	void printoddvalues()
	{
		for(int i=0;i<=4;i++)
		{
			if(a[i]%2!=0)
			{
			cout<<"\n element of  an Array  A is:"<<a[i];
			}
		}

	}

};
int main()
{

	Demo d1;
	d1.getvalues();
	d1.printoddvalues();
	//counter
	return 0;
	
}
	
