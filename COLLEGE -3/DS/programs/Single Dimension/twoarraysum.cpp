using namespace std;
#include<iostream>
void printsum(int[],int[]);
int main()
{
	int x[5]={10,20,30,40,50};
	int y[5]={1,2,3,4,5};
	printsum(x,y);
	return 0;
}
void printsum(int x[],int y[])
{
	int z[5];
	int i;
	for(i=0;i<5;i++)
	{
		z[i]=x[i]+y[i];
	}
	for(i=0;i<5;i++)
	{
		cout<<"\n"<<x[i]<<"+"<<y[i]<<"="<<z[i];
	}
	
}
