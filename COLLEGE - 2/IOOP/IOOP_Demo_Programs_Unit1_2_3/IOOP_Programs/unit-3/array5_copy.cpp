#include<iostream>
using namespace std;
class arraycp
{
	int a1[5],a2[5],i;
	public:
	void input()
	{
		cout<<"enter the value of a1:"<<endl;
		for(i=0;i<5;i++)
		{
			cin>>a1[i];
		}
	}
	void copy1()
	{
		for(i=0;i<5;i++)
		{
			a2[i]=a1[i];
		}
	}
	void disp()
	{
		for(i=0;i<5;i++)
		{
			cout<<a2[i]<<endl;
		}
	}
};
int main()
{
	arraycp c1;
	c1.input();
	c1.copy1();
	c1.disp();
}