#include<iostream>
using namespace std;
class array1
{
	int a[4],i,max;
	public:
		void input()
		{
			for(i=0;i<4;i++)
			{
				cout<<"Enter elements value";
				cin>>a[i];
				/*a[0]=2, a[1]=4, a[2]=6, a[3]=3*/
			}
		}
		void output()
		{
			max=a[0];
			for(i=0;i<4;i++)
			{
				if(a[i]>max)
					max=a[i];
			}
			cout<<"Largest array elements"<<max;
		}
};
int main()
{
	array1 a1;
	a1.input();
	a1.output();
}