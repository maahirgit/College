#include<iostream>

using namespace std;

int main()
{
	int x[10]={1,3,5,7,7,3,57,8,8,54};
	x[0]=11;
	x[1]=13;
	
	//float y[5]={11.4,67.4,44.67,76.34,67.5};
	//char name[3]={'A','B','C'};
	
	
	cout<<"\n x (first element} is :"<<x[0];// 11
	cout<<"\n x (last element} is :"<<x[9];//54
	return 0;

}
