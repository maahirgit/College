#include<iostream>
using namespace std;
int main()
{
	int num,i,sum=0;
	do
	{
		cout<<"Enter a positive number ";
		cin>>num;
	}while(num<=0);
	for(i=1; i<=num;i++)
	{
		sum += i;
	}
	cout<<"Sum ="<<sum;
}