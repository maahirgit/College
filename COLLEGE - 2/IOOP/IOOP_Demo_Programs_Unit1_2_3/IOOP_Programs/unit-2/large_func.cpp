#include<iostream>
using namespace std;
int max(int,int);
int main()
{
	int n1,n2,ans;
	cout<<"Enter n1 and n2";
	cin>>n1>>n2;//10 20 - 50 30
	ans=max(n1,n2);
	cout<<"Large number is"<<ans;
	//cout<<max(n1,n2);
}
int max(int x, int y)//x=10,y=20   -   x=50,y=30
{
	if(x>y)//10>20->false		50>30->true
		return x;
	else
		return y;
}