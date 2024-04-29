#include<iostream>
using namespace std;
int factorial(int);//prototype
int main()
{
	int num,ans;
	cout<<"Enter number";
	cin>>num;//4
	ans=factorial(num);
	cout<<"Factorial is"<<ans<<endl;
}
int factorial(int n)
{
	if(n>1)
		return n*factorial(n-1);
	else
		return 1;
}
