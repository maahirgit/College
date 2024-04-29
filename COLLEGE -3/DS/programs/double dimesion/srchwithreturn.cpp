//double dimension Array
using namespace std;
#include<iostream>
#define row 2
#define col 2
class My2
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
	int search(int val)
	{
		bool found=0;
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				if(x[i][j]==val)
				{
					found=1;
					break;
				}
			}
		}
		return found;
		
	}
	
	
	
	
};
int main()
{
	My2 M;
	int srch;
	M.getData();
	M.putData();
	cout<<"\n enter value to be search:";
	cin>>srch;
	int ans=M.search(srch);
	if(ans)
	{
		cout<<"found";
	}
	else
	{
	cout<<"not found";	
	}
	return 0;
}