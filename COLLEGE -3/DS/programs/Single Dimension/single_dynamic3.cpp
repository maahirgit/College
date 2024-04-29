
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
		int s;
		cout<<"\n enter size of first array and second array:";
		cin>>s;
		x=new int[s];
			for(int i=0;i<s;i++)
			{
			cout<<"\n enter vallue:";
			cin>>*(x+i);
			}
		y=new int[s];
			cout<<"\n enter second array:";
			for(int i=0;i<s;i++)
			{
			cout<<"\n enter vallue:";
			cin>>*(y+i);
			}
		add(s);	
	}
		void add(int n)
		{
						
			z=new int[n];	
		       
			for(int i=0;i<n;i++)
			{
			z[i]=x[i]+y[i];

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


	


