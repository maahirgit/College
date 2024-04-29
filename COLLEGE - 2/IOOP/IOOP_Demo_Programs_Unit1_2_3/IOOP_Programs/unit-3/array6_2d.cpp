#include<iostream>
using namespace std;
class arr2d
{
	int a[2][2],i,j;
	public:
		void input()
		{
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					cin>>a[i][j];//a[0][0]=10, a[0][1]=20, a[1][0], a[1][1]
				}
			}
		}
		void disp()
		{
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					cout<<a[i][j];
				}
			}
		}
}
		
	