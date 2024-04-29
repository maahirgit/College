//double dimension Array
using namespace std;
#include<iostream>
#define row 3
#define col 3
class My5
{
	int x[row][col];
	public:
	void getData()
	{
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				cout<<"\n enter value for ["<<i<<"]["<<j<<"]:";
				cin>>x[i][j];
			}
		}
	}
	void putData()
	{
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				cout<<" "<<x[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
	void identity()
	{
	
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				
				if(i==j)
				{
					x[i][j]=1;
				}
				else
				{
					x[i][j]=0;
				}
			}
			
		}
		
	}
	
	
	
};
int main()
{
	My5 M;
	M.getData();
	M.putData();
	M.identity();
	M.putData();
	return 0;
}