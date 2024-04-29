using namespace std;
#include<iostream>
//upper triangular
int main()
{
	
	int x[4][4]={{1,2,3,4},{4,5,6,7},{7,8,9,5},{1,5,7,4}};

	int i,j;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			
			cout<<x[i][j]<<" ";
			
		}
		cout<<"\n";
	}
	cout<<"\n OUTPUT:\n";
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			
			if(i<=j)
			{
			cout<<x[i][j]<<" ";
			}
			else
			{
			cout<<"  ";
			}
			
		}
		cout<<"\n";
	}
	
	return 0;
}
