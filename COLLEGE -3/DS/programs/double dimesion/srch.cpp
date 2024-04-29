using namespace std;
#include<iostream>
#define size 5
class My1
{
	int array[size];
	public:
	void readData()
	{
		
		int i;
		for(i=0;i<size;i++)
		{
			cout<<"\n ENter value:";
			cin>>array[i];
			
		}
	}
	void printData()
	{
		int i;
		for(i=0;i<size;i++)
		{
			cout<<"\n"<<"value at index "<<i+1<<" is:"<<array[i];
			
		}
		
	}
	void serach(int val)
	{
		int i;
		bool found=0;
		for(i=0;i<size;i++)
		{
			if(array[i]==val)
			{
			found=1;	
			break;
			}
		}
		if(found==0)
		{
		cout<<"NOT FOUND";	
		}
		else
		{
		cout<<"FOUND";
		}
		
	}
	
	
};

int main()
{
	
		
		My1 m1,m2,m3;
		m1.readData();
		m1.printData();
		int srch;
		cout<<"\nENter value to search:";
		cin>>srch;
		m1.serach(srch);
}








