using namespace std;
#include<iostream>
//123
//456
//789

//321
//654
//987
//basic double
int main()
{
	
	int x[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=2;j>=0;j--)
		{
		cout<<x[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
