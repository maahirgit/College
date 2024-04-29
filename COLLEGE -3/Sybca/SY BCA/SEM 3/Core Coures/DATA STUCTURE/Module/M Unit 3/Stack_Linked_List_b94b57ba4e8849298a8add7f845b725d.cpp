//Stack Using Linked List
#include<iostream>
using namespace std;
struct Stack_LL{
	int data;
	struct Stack_LL *add;
}*top=NULL;

class Stack{

	public:
		void push();//insertion
		void pop();//deletion
		void peek();//top element
		void display();//display
		void isEmpty();//stack is underflow
	
};
void Stack::isEmpty()
{
	
}


void Stack::peek()
{
	
	
}


void Stack::push()
{
	int value;
	struct Stack_LL *temp=new Stack_LL;//Memory Allocation
	cout<<"Enter the Data : ";
	cin>>value;
	temp->data=value;
	temp->add=NULL;
	if(top==NULL)
	{
			top=temp;
	}
	else
	{
		
		temp->add=top;
		top=temp;
	}
	
}
void Stack::pop()
{
	struct Stack_LL *p=new Stack_LL;//Memory Allocation
	p=top;
	top=top->add;
	delete p;
	
	
	
}
void Stack::display()
{
	struct Stack_LL *p=new Stack_LL;//Memory Allocation
	p=top;
	while(p!=NULL)
	{
		cout<<p->data<<"->";
		p=p->add;
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
