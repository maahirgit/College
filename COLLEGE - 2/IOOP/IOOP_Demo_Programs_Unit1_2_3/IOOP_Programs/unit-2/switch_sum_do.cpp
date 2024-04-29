//Sum of positive number
#include<iostream>
using namespace std;
class test
{
	int sum,num;
	public:
		void cal()
		{
			sum=0;
			num=0;
			do
			{
				sum=sum+num;
				cout<<"Enter num";
				cin>>num;//5
			}while(num>=0);
			cout<<"Sum="<<sum<<endl;
		}
};
int main()
{
	test t1;
	t1.cal();
}