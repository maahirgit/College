#include<iostream>

using namespace std;
class DEMO
{
	int x[3][3];
	public:
	void get()
	{
	cout<<"\n enter values:";
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
			cout<<"\n enter value:";
			cin>>x[i][j];

			}

		}

	}
	void put()
	{
	cout<<"\n MATRIX \n";
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			cout<<"\t"<<x[i][j];

			cout<<"\n";
		}

	}

	void checksparse()
	{
		int zeros=0;
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
			if(x[i][j]==0)
			zeros=zeros+1;
			}
			
		}
		if(zeros>(9/2))	
		{
		cout<<"\n Matrix is sparse";
		}
		else
		{
		cout<<"\n Matrix is not a sparse";
		}

	}
	
	
};
int main()
{
	DEMO d1;
	d1.get();
	d1.put();
	d1.checksparse();
}
