#include<iostream>
using namespace std;
void sum(int a[5]);
int main()
{
	int arr[5],i;
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	sum(arr);
}
void sum(int a[5])
{
	int total=0,i;
	for(i=0;i<5;i++)
	{
		total=total+a[i];
	}
	cout<<"Total of 5 elements "<<total;
}