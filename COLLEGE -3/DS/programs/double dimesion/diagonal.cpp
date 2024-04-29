using namespace std;
#include<iostream>
class My1
{
	int a[3][3];
	bool flag=false;
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
	void printData1()
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
	void printData2()
	{
		int i,j;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			if(i==j)
			{
			cout<<a[i][j]<<"  ";
			}
			else
			{
			cout<<"0"<<"  ";
			}
			}
			cout<<"\n";
		}
		
	}
	void printData3()
	{
		int i,j;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			if(i!=j && a[i][j]!=0)
			{
				flag=true;
				break;
			}
			}
		}
		if(flag==false)
		{
		cout<<"\n Diagonal";
		}
		else
		{
		cout<<"\n Not Diagonal";
		}
	}
	
	
	
	
};

int main()
{
	
		
		My1 m1;
		m1.readData();
		m1.printData1();
		//cout<<"\n After conversion\n";
		//m1.printData2();
		m1.printData3();
		//m1.serch();
}








