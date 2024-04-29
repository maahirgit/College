/*
x=7
x=x<<1
512	256	128	64	8	4	2	1
0	0	0	0	0	1	1	1	->7
0	0	0	0	1	1	1	0	->14
*/
#include<iostream>
using namespace std;
int main()
{
	int x=7;
	cout<<"Value of x="<<x<<endl;
	x=x<<1;
	cout<<"Updated value of x="<<x<<endl;
	x=x>>1;
	cout<<"Updated value of x="<<x<<endl;
}