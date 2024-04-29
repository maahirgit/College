#include<iostream>
using namespace std;
class array1
{
	int a[5],i,sum=0;
	public:
		void input()
		{
			for(i=0;i<5;i++)
			{
				cout<<"Enter elements value";
				cin>>a[i];
			}
		}
		void output()
		{
			for(i=0;i<5;i++)
			{
				sum=sum+a[i];
			}
			cout<<"Sum of array elements"<<sum;
		}
};
int main()
{
	array1 a1;
	a1.input();
	a1.output();
}