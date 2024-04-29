#include<iostream>

using namespace std;
class Demo
{
	int matrix[4][4];
	public:
	void input()
	{
		for(int i=0;i<4;i++)
		{	
			for(int j=0;j<4;j++)
			{
			cout<<"\n enter value:";
			cin>>matrix[i][j];
			}
		}

	}
	void print()
	{	
		for(int i=0;i<4;i++)
		{	
			for(int j=0;j<4;j++)
			{
			cout<<matrix[i][j]<<" ";
			}
			cout<<"\n";
		}

	}
	void check()
	{
		int zeros=0,nonzeros=0;		
		for(int i=0;i<4;i++)
		{	
			for(int j=0;j<4;j++)
			{
				if(matrix[i][j]==0)
				zeros++;
				//zeros=zeros+1;
				else
				nonzeros++;
			}
		}
		cout<<"\n Zeros are:"<<zeros;
		cout<<"\n Non Zeros are:"<<nonzeros;
		if(zeros>nonzeros)	
		{
		cout<<"\n Given matrix is sparse:";
		}
		else
		{
		cout<<"\n Given matrix is not sparse:";
		}
		
	}


};

int main()
{
	Demo d1;
	d1.input();
	d1.print();
	d1.check();


}

