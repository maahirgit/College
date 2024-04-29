//double dimension Array
using namespace std;
#include<iostream>
#define row 3
#define col 3
class My4
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
	void sum_of_diagonal()
	{
		int sum=0;
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				//sum=sum+x[i][j];
				if(i==j && x[i][j]==1)
				{
					sum=sum+x[i][j];
				}
			}
			
		}
		cout<<"\n sum is:"<<sum;
	}
	
	
	
};
int main()
{
	My4 M;
	M.getData();
	M.putData();
	M.sum_of_diagonal();
	return 0;
}