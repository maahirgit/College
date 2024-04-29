//function overloading 
#include<iostream>
using namespace std;
class overload
{
	int res,res1;
	public:
		void add(int a, int b)
		{
			res=a+b;
			cout<<res<<endl;
		}
		void add(char c, char d)
		{
			res1=c+d;
			cout<<res1;
		}
};
int main()
{
	overload o1;
	cout<<"Integer = ";
	o1.add(10,20);
	cout<<"Character =";
	o1.add('h','i');
}