//double dimension Array
using namespace std;
#include<iostream>
#define row 3
#define col 3
class Demo
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
	void convert_lower()
	{
		
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
			if(i>j)
			x[i][j]=0;
			}
			//cout<<"\n";
		}
		
	}
	
	
	
};
int main()
{
	Demo M;
	M.getData();
	M.putData();
	M.convert_lower();
	cout<<"\n OUTPUT\n";
	M.putData();
	return 0;
}
