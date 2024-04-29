//Linear Search

#include<iostream>
using namespace std;

int main()
{
	int ar[10],no,id,flag=0;
	cout<<"Enter the Array ELements";
	
	for(int i=0;i<10;i++)
	{
		cin>>ar[i];
	}
	cout<<"Enter the Element to be search:";
	cin>>no;
	
	for(int i=0;i<10;i++)
	{
	
		if(ar[i]==no)
		{
				id=ar[i];
				flag=1;
		}			
		
	}
	
	if(flag==1)
	{
	cout<<"Element Found at index :"<<id;
	}
	else
	{
		cout<<"Not Found";
		}
	
	
}