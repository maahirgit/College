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
		int i,j,sum=0;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			if(i==j || ((i+j)==2))
			{
			cout<<a[i][j]<<"  ";
			sum=sum+a[i][j];
			}
			else
			{
			cout<<"0"<<"  ";
			}
			}
			cout<<"\n";
		}

		cout<<"\n sum is:"<<sum;
		
	}
	
	
	
	
};

int main()
{
	
		
		My1 m1;
		m1.readData();
		m1.printData();
		//m1.serch();
}








