using namespace std;
#include<iostream>

//basic double
int main()
{
	//int y[3][4]={{11,23,45,67},{3,5,7,9},{4,7,9,3}};
	int x[3][3]={1,2,3,4,5,6,7,8,9};
	//int x[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	//int x[3][3]={{0},{0},{0}};
	//int x[3][3]={0};
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		cout<<"|"<<&x[i][j]<<"||"<<x[i][j]<<"|";
		
		}
		cout<<"\n";
	}
	return 0;
}
