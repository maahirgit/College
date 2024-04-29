#include <iostream>
#include <stdlib.h>
#define size 10
using namespace std;
class Demo
{
	int arr[size]={11,12,13,14,15}; 
	int n;
	
	public:
	Demo()
	{
	n=5;
	}
	void insertion()
	{
		cout<<"\n insertion";
		int pos,item;
		cout<<"\n enter position:";
		cin>>pos;
		cout<<"\n enter value:";
		cin>>item;
		for(int i=n;i>pos;i--)
		{
		arr[i]=arr[i-1];
		}
		arr[pos]=item;
		n=n+1;
		display(n);
	
		
	}
	void deletion()
	{	
	int pos;
		cout<<"\n deletion";
		cout<<"\n enter position:";
		cin>>pos;
		for(int i=pos;i<size;i++)  
		{
		arr[i]=arr[i+1];
		}
	}
	void reverse()
	{
		cout<<"\n reverse";
		for(int i=n-1;i>=0;i--)
		{
		cout<<"\n"<<arr[i];
		}
	}
	void search()
	{	
		int item;
		bool flag=false;
		cout<<"\n search";
		cout<<"\n ENTER ITEM TO BE SEARCH:";
		cin>>item;
			for(int i=0;i<=n-1;i++)
			{
				if(arr[i]==item)
				{
				flag=true;
				cout<<"\n "<<item<<" found";
				break;
				}
			}
			if(flag==false)
			{
			cout<<"\n "<<item<<" NOT found";

			}
		

	}
	void display(int n)
	{
	for(int i=0;i<n;i++)
		{
		cout<<"\n"<<arr[i];
		}
	}



};

int main()
{	
	int ch;
	Demo d1;
	do
	{
		cout<<"\n MENU";
		cout<<"\n 1. INSERTION";
		cout<<"\n 2. Deletion";
		cout<<"\n 3. SEARCH";
		cout<<"\n 4. REVERSE";
		cout<<"\n 5. TRAVERSE";
		cout<<"\n 6. EXIT";
		cout<<"\n ENTER YOUR CHOICE:";
		cin>>ch;
		switch(ch)
		{
			case 1:	d1.insertion();
				break;
			case 2:	d1.deletion();
				break;
			case 3: d1.search();
				break;
			case 4: d1.reverse();
				break;
			case 5: d1.display(5);
				break;
			case 6:exit(0);

		}

	}while(ch<=6);

	return 0;
}


