#include<iostream>
using namespace std;
class evenarr
{
	int a[5],i,j;
	public:
		void get()
		{
			cout<<"Enter 1st array elements";
			for(i=0;i<5;i++)
			{
				cin>>a[i];
			}
		}
		void even()
		{
			cout<<"Even numbers are "<<endl;
			for(i=0;i<5;i++)
			{
				if(a[i]%2==0)
				{
					cout<<a[i]<<endl;
				}
			}
		}
};
int main()
{
	evenarr o1;
	o1.get();
	o1.even();
}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
	