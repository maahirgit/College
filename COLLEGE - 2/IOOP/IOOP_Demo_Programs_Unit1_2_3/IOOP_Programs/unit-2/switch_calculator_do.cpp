//Calculator
#include<iostream>
using namespace std;
class test
{
	int n1,n2;
	char option,continu;
	public:
		void calculate()
		{
			cout<<"Calculator Menu"<<endl;
			do
			{
				cout<<"Enter n1 and n2 value";
				cin>>n1>>n2;
				cout<<"Enter option +,-,*,/ to perform";
				cin>>option;
				switch(option)
				{
					case '+':
						cout<<"Add="<<n1+n2<<endl;
						break;
					case '-':
						cout<<"Sub="<<n1-n2<<endl;
						break;
					case '*':
						cout<<"Mul="<<n1*n2<<endl;
						break;
					case '/':
						cout<<"Div="<<n1/n2<<endl;
						break;
				}
				cout<<"Do u want to continue-Press-y/n";
				cin>>continu;
			}while(continu=='y');
		}
};
int main()
{
	test t1;
	t1.calculate();
}