using namespace std;
#include<iostream>

int main()
{
	int x[5];;
	int i;
	for(i=0;i<=4;i++)
	{
	cout<<"\n enter value["<<i<<"]:";
	cin>>x[i];
	}
	cout<<"\n array address is:"<<&x;
	cout<<"\n\tindex\taddress\tvalue\n";
	for(i=0;i<=4;i++)
	{
	cout<<"\n\t"<<i<<"\t"<<&x[i]<<"\t"<<x[i];
	}
	return 0;
}
