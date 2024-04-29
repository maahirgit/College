//Factorial
#include<iostream>
using namespace std;
class factorial
{
	int num,fact=1;
	public:
		void calculate();
};
void factorial :: calculate()
{
	cout<<"Enter number";
	cin>>num;
	if(num==0 || num==1)
		fact=1;
	else
	{
		while(num>1)
		{
			fact=fact*num;
			num--;
		}
	}
	cout<<"Factorial of a num"<<num<<"===="<<fact;
}
int main()
{
	factorial f1;
	f1.calculate();
}
