using namespace std;
#include<iostream>
//in array :array and first element address both r same;
int main()
{
	//int A;
	//int *B=new int;
	//int *X=new int[5];
	int x[5]={11,12,13,14,15};
	int n;
	cout<<"\n enter size for array:";
	cin>>n;
	int *y=new int[n];
	//char *name=new char[10];
	for(int i=0;i<n;i++)
	{
		cout<<"\n enter value:";
		cin>>*(x+i);
		cout<<"\n"<<&x[i]<<" "<<*(x+i);
	}
	cout<<"\n normal print";
	for(int i=0;i<n;i++)
	{
		cout<<"\n"<<x[i];
	}
	return 0;
	
	
}
	
	
	
	
	
	
	
	

