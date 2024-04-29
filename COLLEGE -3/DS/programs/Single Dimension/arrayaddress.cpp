using namespace std;
#include<iostream>
//in array :array and first element address both r same;
int main()
{
	int x[5]={11,12,13,14,15};
	int i=0;
	cout<<"\narray addres is:"<<x;
	cout<<"\naddress of first element is:"<<&x[0];//check they both line would have 	//same outpt
	cout<<"\n print using pointer";
	for(i=0;i<=4;i++)
	{
		cout<<"\n"<<&x[i]<<" "<<*(x+i);
	}
	cout<<"\n normal print";
	for(i=0;i<=4;i++)
	{
		cout<<"\n"<<x[i];
	}
	return 0;
	
	
}
	
	
	
	
	
	
	
	

