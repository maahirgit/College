//double dimension Array
using namespace std;
#include<iostream>
#define row 2
#define col 2
class My3
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
	void transpose()
	{
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				cout<<" "<<x[j][i]<<" ";
			}
			cout<<"\n";
		}
	}
	/*
	
		void transpose()
	{
		for(int j=0;j<col;j++)
		{
			for(int i=0;i<row;i++)
			{
				cout<<" "<<x[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
	*/
	
	
	
};
int main()
{
	My3 M;
	M.getData();
	M.putData();
	cout<<"After Travrse of matrix\n";
	M.transpose();
	return 0;
}
