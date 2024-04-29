#include<iostream>
using namespace std;
class evenarr2d
{
	int a[2][2],i,j;
	public:
		void get()
		{
			cout<<"Enter 1st array elements";
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					cin>>a[i][j];
				}
			}
		}
		void even()
		{
			cout<<"Even numbers are "<<endl;
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					if(a[i][j]%2==0)
					{
						cout<<a[i][j]<<endl;
					}
				}
			}
		}
};
int main()
{
	evenarr2d o1;
	o1.get();
	o1.even();
}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
	