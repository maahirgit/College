//inline function - used to save memory space and increase efficiency.
#include<iostream>
using namespace std;
inline int add(int a, int b)
{
	return (a+b);
}
int main()
{
	int n1,n2;
	cout<<"Enter value of n1 and n2";
	cin>>n1>>n2;
	//cout<<add(10,20)<<endl;
	cout<<"sum="<<add(n1,n2)<<endl;
}