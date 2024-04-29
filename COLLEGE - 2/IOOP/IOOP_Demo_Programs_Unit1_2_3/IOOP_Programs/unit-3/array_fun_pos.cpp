#include<iostream>
using namespace std;
void pos(int a[5]);
int main()
{
	int arr[5],i;
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	pos(arr);
}
void pos(int a[5])
{
	int i;
	for(i=0;i<5;i++)
	{
		if(a[i]>0)
			cout<<a[i]<<"   ";
	}
}