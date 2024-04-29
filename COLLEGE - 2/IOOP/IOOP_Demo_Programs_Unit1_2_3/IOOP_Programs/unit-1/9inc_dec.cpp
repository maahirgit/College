#include<iostream>
using namespace std;
int main()
{
	int a=10;
	cout<<"Pre-inc"<<++a<<endl;
	cout<<"Post-inc"<<a++<<endl;
	//cout<<a
	cout<<"Pre-dec"<<--a<<endl;
	cout<<"Post-dec"<<a--<<endl;
	//cout<<a;
}

/*
11	11	9	9
11	11	10	10
11	10	9	10
11	11	11	11
*/
