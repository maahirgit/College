#include<iostream>
using namespace std;
class test
{
	int num;
	public:
		void get()
		{
			cout<<"Enter value of num";
			cin>>num;
		}
		void posnegz();
		{
			if(num>0)
				cout<<num<<"is positive number";
			else if(num<0)
				cout<<num<<"is negative number";
			else
				cout<<num<<"is zero";
		}
};
int main()
{
	test t1;
	t1.get();
	t1.posnegz();
}