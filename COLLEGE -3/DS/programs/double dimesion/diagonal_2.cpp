using namespace std;
#include<iostream>
//upper triangular
int main()
{
	// 1 2 3
         //4 5 6
         //7 8 9
	//later
	//1 2 3
	//0 5 6
	//0 0 9
	int x[3][3]={{1,2,3},{4,5,6},{7,8,9}};

	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i!=j)
			{
			cout<<"0"<<" ";	
			}
			else
			{
			cout<<x[i][j]<<" ";
			}
		}
		cout<<"\n";
	}
	
	return 0;
}
