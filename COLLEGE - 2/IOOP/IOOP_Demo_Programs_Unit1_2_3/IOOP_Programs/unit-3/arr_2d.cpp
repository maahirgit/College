#include<iostream>
using namespace std;
class sum2d
{
	int a[2][2],b[2][2],c[2][2],i,j;
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
			cout<<"Enter 2nd array elements";
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					cin>>b[i][j];
				}
			}
		}
		void disp()
		{
			cout<<"1st array elements are"<<endl;
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					cout<<a[i][j]<<"        ";
				}
				cout<<endl;
			}
			cout<<"2nd array elements are"<<endl;
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					cout<<b[i][j]<<"        ";
				}
				cout<<endl;
			}
		}
		void sum()
		{
			cout<<"Sum of a and b array is "<<endl;
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					cout<<a[i][j]+b[i][j]<<"        ";
					//c[i][j]=a[i][j]+b[i][j];
				}
				cout<<endl;
			}
		}
};
int main()
{
	sum2d o1;
	o1.get();
	o1.disp();
	o1.sum();
}
			
			
			
			
			
			
			
			
			