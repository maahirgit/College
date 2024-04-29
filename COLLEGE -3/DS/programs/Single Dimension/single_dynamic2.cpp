
#include<iostream>
using namespace std;
class Demo
{
	int *x;
	int *y;
	int *z;
	public:
	void input()
	{
		int s1,s2;
		cout<<"\n enter size of first array:";
		cin>>s1;
		x=new int[s1];
			for(int i=0;i<s1;i++)
			{
			cout<<"\n enter vallue:";
			cin>>*(x+i);
			}
		cout<<"\n enter size of second array:";
		cin>>s2;
		y=new int[s2];
			for(int i=0;i<s2;i++)
			{
			cout<<"\n enter vallue:";
			cin>>*(y+i);
			}
		merge(s1,s2);	//nested function
	}
		void merge(int n1,int n2)
		{
			int n=n1+n2;			
			z=new int[n];	
			int j=0;       
			for(int i=0;i<n1;i++)
			{
			z[j++]=x[i];  //z[0]=x[0]  z[1]=x[1]  z[2]=x[2] 

			}	
			
			for(int i=0;i<n2;i++)
			{
			z[j++]=y[i]; // z[3]=y[0] z[4]=y[1] z[5]=y[2] z[6]=y[3] z[7]=y[4]
			}

			
			for(int i=0;i<n;i++)
			{
			cout<<"\n"<<z[i];
			}
	}
	
	
};
int main()
{

	Demo d1;
	d1.input();
	//d1.add();
	
	return 0;
}


	


