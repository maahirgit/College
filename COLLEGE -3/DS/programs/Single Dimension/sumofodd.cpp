using namespace std;
#include<iostream>
int printsum(int[],int size);
int main()
{
	int x[5]={10,21,30,41,50};
	int sum;
	sum=printsum(x,5);
	cout<<"\n sum is:"<<sum;
	return 0;
}
int printsum(int x[],int size)
{
	int i,sum=0;
	for(i=0;i<size;i++)
	{
		if(a[i]%2!=0)
		sum=sum+x[i];
	}
	return sum;
	
}
