//if
#include<iostream>
using namespace std;
class large2
{
	int n1,n2;//variable-data mem
	public:
		void get()//UDF-member function
		{
			cout<<"Enter value of n1 and n2";
			cin>>n1>>n2;
		}
		void large()//UDF-member function
		{
			if(n1>n2)
				cout<<n1<<"is large";
			else
				cout<<n2<<"is large";
		}
};
int main()
{
	large2 l1,l2,l3;
	l1.get();
	l1.large();
	l2.get();
	l2.large();
	l3.get();
	l3.large();
}