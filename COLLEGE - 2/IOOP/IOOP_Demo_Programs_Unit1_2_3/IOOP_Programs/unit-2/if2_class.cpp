//if
#include<iostream>
using namespace std;
class large3
{
	int n1,n2;
	public:
	void get();
	void large();
	void test();
	void extra();
};//end of class
void large3 :: get()
{
	cout<<"Enter value of n1 and n2";
	cin>>n1>>n2;
}
void large3 :: large()
{
	if(n1>n2)
		cout<<n1<<"is large";
	else
		cout<<n2<<"is large";
}
int main()
{
	large3 l1;
	l1.get();
	l1.large();
}