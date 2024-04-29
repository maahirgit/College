using namespace std;
#include<iostream>

//basic double
int main()
{
	
	int x[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<=2;j++)
		{
		cout<<x[j][i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
