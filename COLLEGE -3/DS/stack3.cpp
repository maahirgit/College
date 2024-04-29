#include<iostream>
#define size 5
using namespace std;

class DEMO
{
	string STACK[size];
	int top=-1;
	string value;
	public:
	void PUSH()
	{
		if(isFull())
		cout<<"\n STACK IS FULL/overflow";
		else
		{
		cout<<"\n enter value to be inserted in stack:";
		cin>>value;
		top=top+1;
		STACK[top]=value;
		}

	}
	void POP()
	{
		if(isEmpty())
		cout<<"\n STACK IS EMPTY/underflow";
		else
		{
		cout<<"\n deleted value is:"<<STACK[top];
		top=top-1;
		}
	}
	void PEEP()
	{
		if(isEmpty())
		cout<<"\n STACK IS EMPTY";
		else
		cout<<"\n TOP value is:"<<STACK[top];

	}
	
	void stacksize()
	{
		cout<<"\n size of the stack is :"<<size;
		cout<<"\n top is at currenty :"<<top;

	}
	bool isEmpty()
	{
		if(top==-1)
			return	true;
		else
			return false;

	}

	bool isFull()
	{		
			if(top==size-1)
			return true;
			else
			return false;
			

	}

	void DISPLAY()
	{
		if(isEmpty())
		cout<<"\n STACK IS EMPTY";
		else

		for(int i=top;i>=0;i--)
		{
		cout<<"\n"<<i<<"\t"<<"|"<<STACK[i]<<"|";
		}
	}


};

int main()
{
	DEMO d1;
	int ch;
	do
	{
	cout<<"\n STACK OPERATIONS:";
	cout<<"\n 1. PUSH";
	cout<<"\n 2. POP";
	cout<<"\n 3. PEEP";
	cout<<"\n 4. DISPLAY";
	cout<<"\n 5. STACK SIZE";
	cout<<"\n 6. EXIT";
	cout<<"\n ENTER your choice:";
	cin>>ch;
	switch(ch)
	{

	case 1: d1.PUSH();
		break;

	case 2: d1.POP();
		break;

	case 3: d1.PEEP();
		break;
	case 4: d1.DISPLAY();
		break;
	case 5: d1.stacksize();
		break;
	case 6: exit(0);


	}
	}while(ch<=6);

}
