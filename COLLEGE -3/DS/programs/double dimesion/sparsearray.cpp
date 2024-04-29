using namespace std;
#include<iostream>
//sparse
#define row 10
#define column 10
int main()
{
	
	//const row=10;
	//int x[3][3]={{0,0,1},{0,0,0},{0,0,9}};
	int x[row][column];
	int nz=0;
	int i,j;
	int m,n;
	cout<<"\n enter rows and column:";
	cin>>m>>n;
	cout<<"\n enter values:\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>x[i][j];
			if(x[i][j]!=0)
			{
				nz++;
			}
			
		}
	}
	cout<<"\n Simpple matrix:"<<"\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<x[i][j]<<" ";
			
		}
		cout<<"\n";
	}
	int sparse[nz+1][3];
	sparse[0][0]=m;
	sparse[0][1]=n;
	sparse[0][2]=nz;
	int k=1;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(x[i][j]!=0)
			{
			sparse[k][0]=i;	
			sparse[k][1]=j;	
			sparse[k][2]=x[i][j];
			k++;				
			}
			
		}
		
	}
	cout<<"\n print sparse\n";
	for(i=0;i<=nz;i++)
	{
		for(j=0;j<=2;j++)
		{
		cout<<sparse[i][j]<<" ";	
		}
		cout<<"\n";
	}
	
	
	
	
	
	return 0;
}
