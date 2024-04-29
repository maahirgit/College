#include<iostream>
using namespace std;
#define size 100
class demo
{
  	char stack[size];
	char Reverse[size];
	int top,no;
	public:
	demo()
	{
	top=-1;
	}
	void push();
	void pop();
};

void demo::push()
{
	char ch;
	int i;
	cout<<"\n How many characters u want add:";
	cin>>no;
	for(i=1;i<=no;i++)
	{
		cout<<"\n Enter character:";
		cin>>ch;
		top=top+1;
		stack[top]=ch;
		//stack[++top]=ch;
	}
}
void demo::pop()
{
	int i;
	for(i=0;i<no;i++)
	{
		Reverse[i]=stack[top];
		top=top-1;
	}
	Reverse[i]='\0';
	cout<<"\n REVERSE STRING iS:"<<Reverse<<endl;
}
int main()
{
	demo d1;
	d1.push();
	d1.pop();

return 0;
}
