#include<iostream>
using namespace std;
//stack using linked list:
class Node
{
	public:	
	int value;
	Node *next;

};
Node *TOP=NULL;
void PUSH()
{
	Node *tmp=new Node;
	cout<<"\n enter value for node:";
	cin>>tmp->value;
	tmp->next=NULL;
	if(TOP==NULL)
	{
	TOP=tmp;
	}
	else
	{
	tmp->next=TOP;
	TOP=tmp;	
	}

}

void POP()
{
	if(TOP==NULL)
	{
	cout<<"\n UNDERFLOW";
	}
	else
	{
	cout<<"\n deleted element is:"<<TOP->value;
	Node *tmp=TOP;
	TOP=TOP->next;
	delete tmp;
	}

}

void PEEP()
{
	if(TOP==NULL)
	{
	cout<<"\n UNDERFLOW";
	}
	else
	{
	cout<<"\n TOP element is:"<<TOP->value;
	}

}


void display()
{
	if(TOP==NULL)
	{
	cout<<"\n UNDERFLOW";
	}
	else
	{
	cout<<"\n";
	Node *tmp=TOP;
	while(tmp!=NULL)
	{
	cout<<"\n| "<<tmp->value<<"|";
	tmp=tmp->next;
	}
	}



}
int main()
{
	int ch;
	do
	{
	cout<<"\n MENU";
	cout<<"\n 1. PUSH";
	cout<<"\n 2. POP";
	cout<<"\n 3. PEEP";
	cout<<"\n 4. DISPLAY";
	cout<<"\n ENTER UR CHOICE:";
	cin>>ch;
	switch(ch)
	{
	case 1:PUSH();
	break;
	case 2:POP();
	break;
	case 3:PEEP();
	break;
	case 4:display();
	break;
	}

	}while(ch<=4);
return 0;
}










