using namespace std;
#include<iostream>
//check sparse
int main()
{
			
	int x[3][3]={{0,0,0},{4,4,0},{0,0,0}};
	int zeros=0,nz=0;
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(x[i][j]==0)
			{
				zeros++;
			}
			else
			{
				nz++;
			}
			
		}
	}
	if(zeros>nz)
	{
		
	cout<<"\n sparse";	
	}
	else
	{
	cout<<"\n not sparse";	
	}
	return 0;
}
