#include<iostream>
using namespace std;

class Stack{

		int top;
	public:
		Stack()
		{
			top=-1;
		}
		int stk[5];
		void push();//insertion
		void pop();//deletion
		void peek();//top element
		void display();//display
		void isEmpty();//stack is underflow
	
};
void Stack::isEmpty()
{
	if(top<0)
	{
			cout<<"Is Underflow"
	}
}


void Stack::peek()
{
	cout<<stk[top];
	
}


void Stack::push()
{
	int no;
	if(top>=5)
	{
			cout<<"Stack is overflow"<<endl;
	}
	else
	{
		top++;
		cout<<"Enter the Elements:";
		cin>>no;
		stk[top]=no;
		
	}
	
}
void Stack::pop()
{
	if(top==-1)
	{
			cout<<"Stack is Underflow"<<endl;
	}
	else
	{
			cout<<"Deleted Element is :"<<stk[top];
			top--;
	}
	
}
void Stack::display()
{
		if(top<0)
		{
			cout<<"Stack is Underflow"<<endl;
		}
		else
		{
			for(int i=top;i>=0;i--)
			{
				cout<<"\t"<<stk[i];
			}
		}
}

int main()
{
	int ch;
	Stack s;
	do{
		cout<<endl;
		cout<<"Press 1. for Push"<<endl;
		cout<<"Press 2. for Pop"<<endl;
		cout<<"Press 3. for Display"<<endl;
		cout<<"Press 4. for Exit"<<endl;
		cout<<"Enter Your Choice:";
		cin>>ch;
		
			switch(ch)
			{
				case 1: s.push();
					     break;
				case 2: s.pop();
					     break;
				case 3: s.display();
					     break;
				case 4:exit(0);
				
			}
				
	}while(ch!=4);
	return 0;	
}
