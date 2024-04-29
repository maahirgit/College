using namespace std;
#include<iostream>

//basic double
int main()
{
	
	int x[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	/*1 2 3
	4 5 6
	7 8 9 */
	int i,j;
	int sum=0;
	for(i=0;i<3;i++)
	{
		for(j=2;j>=0;j--)
		{
		if(x[i][j]%2!=0)
		{
		sum=sum+x[i][j];
		}
		}
		cout<<"\n";
	}

	cout<<"\n sum is:"<<sum;
	return 0;
}
