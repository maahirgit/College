using namespace std;
#include<iostream>
class My1
{
	int a[3][3];
	public:
	void readData()
	{
		
		int i,j;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			cout<<"\n\n\n Enter value:";
			cin>>a[i][j];
			}
			
		}
	}
	void printData()
	{
		int i,j;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			cout<<a[i][j]<<" ";
			}
			cout<<"\n";
		}
		
	}
	
	
	
	
};

int main()
{
	
		
		My1 m1;
		m1.readData();
		m1.printData();
		//m1.serch();
}








