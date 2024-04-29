#include<iostream>
#include<stdlib.h>
#define size 5
using namespace std;
class Demo
{
	//data members
	//member functions
	int a[5]={11,12,13,14};
	
	public:
	void insertion()
	{
		int pos,val;
		cout<<"\n insertion";
		cout<<"\n enter position:";
		cin>>pos;
		cout<<"\n enter value:";
		cin>>val;
		for(int i=size-1;i>pos;i--)
		{
		a[i]=a[i-1];
		}
		a[pos]=val;
		traverse(size);
		
	}
	void deletion()
	{
	       	int n;
		cout<<"\n deletion";
		int pos;
		cout<<"\n enter pos:";
		cin>>pos;
		for(int i=pos;i<size;i++)
		{
		a[i]=a[i+1];
		}
		n=size-1;
		traverse(n);

	}
	void search()
	{
		
		cout<<"\n search";
		bool flag=false;
		int value;
		cout<<"\n enter element:";
		cin>>value;
		for(int i=0;i<size;i++)
		{
			if(a[i]==value)
			{
			flag=true;
			cout<<"\n element fount at location:"<<i;
			break;
			}
		}
		if(flag==false)
		{
		cout<<"\n element not found:";
		}		
		
	}
	void reverse()
	{
	     cout<<"\n revesre";
		for(int i=size-1;i>=0;i--)
		{
		cout<<"\n"<<a[i];
		}

	}
	void traverse(int n)
	{
	     cout<<"\n traverse";
		for(int i=0;i<n;i++)
		{
		cout<<"\n"<<&a[i]<<" "<<a[i];
		}

	}

};
int main()
{

	Demo d1;
	int ch;
	do
	{
	cout<<"\n MENU";
	cout<<"\n1. INSERTION";
	cout<<"\n2. DELETION";
	cout<<"\n3. SEARCH";
	cout<<"\n4. REVERSE";
	cout<<"\n5. TRAVERSE";
	cout<<"\n6. Exit";
	cout<<"\n Enter ur choice:";
	cin>>ch;
	
	switch(ch)
	{
		case 1: d1.insertion();
		break;
		case 2: d1.deletion();
		break;
		case 3: d1.search();
		break;
		case 4: d1.reverse();
		break;
		case 5: d1.traverse(size);
		break;
		case 6: exit(0);
		break;

	}	
	}
	while(ch<=6);
	
	return 0;
	
}
	
