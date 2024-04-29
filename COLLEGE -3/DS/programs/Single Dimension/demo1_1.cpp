#include<iostream>
using namespace std;

int main()
{
	int x[10]={0};
	for(int i=0;i<=9;i++)
	{
	cout<<"\n enter value:";
	cin>>x[i];
	}
	cout<<"\n Elements are:";
	for(int i=0;i<=9;i++)
	{
	cout<<"\n"<<x[i];
	}

	cout<<"\n Elements in reverse:";
	for(int i=9;i>=0;i--)
	{
	cout<<"\n"<<x[i];
	}
	return 0;

}
