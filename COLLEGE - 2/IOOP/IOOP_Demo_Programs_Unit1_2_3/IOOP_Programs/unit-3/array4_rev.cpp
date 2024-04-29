#include<iostream>
using namespace std;
class fn
{
	int a[5],i;
	public:
	void input()
	{
		cout<<"enter the value of a:"<<endl;
		for(i=0;i<5;i++)
		{
			cin>>a[i];
		}
	}
	void rev()
	{
		for(i=4;i>=0;i--)
		{
			cout<<"after the revers array is::"<<a[i]<<endl;
		}
	}
};
int main()
{
	fn f1;
	f1.input();
	f1.rev();
}
