#include<iostream>
using namespace std;
//Doubly Linked LIST: To traverse in both the directions forward and backward
class Node
{
	public:
	int value;
	Node *next;
	Node *prev;
};
Node *Head=NULL;
Node *Last=NULL;
void insert_at_last()
{
	Node *tmp=new Node();
	int no;
	cout<<"\n enter value for ur node:";
	cin>>no;
	tmp->value=no;
	tmp->next=NULL;
	tmp->prev=NULL;
	if(Head==NULL)
	{
	Head=tmp;
	tmp->next=Head;
	}
	else
	{
	Node *p=Head;
	while(p->next!=Head)
	{
	p=p->next;
	}
	p->next=tmp;	
	tmp->prev=p;
	Last=tmp;
	Last->next=Head;
	Head->prev=Last;
	}


}
void insert_at_first()
{
	Node *tmp=new Node();
	int no;
	cout<<"\n enter value for ur node:";
	cin>>no;
	tmp->value=no;
	tmp->next=NULL;
	tmp->prev=NULL;
	if(Head==NULL)
	{
	Head=tmp;
	tmp->next=Head;
	Last=Head;
	}
	else
	{
	tmp->next=Head;
	Head->prev=tmp;
	Head=tmp;
	Last->next=Head;
	Head->prev=Last;
	}
}
void delete_at_last()
{
	if(Head==NULL)
	{
	cout<<"\n LINKED LIST IS EMPTY";
	}
	else if(Head->next==NULL)
	{
	cout<<"\n DELETED ELEMENT IS:"<<Head->value;
	Node *p=Head;
	Head=NULL;
	delete p;
	}
	else
	{
	Node *p=Head;
	Node *pr=NULL;
	while(p->next!=Head)
	{
	pr=p;
	p=p->next;
	}
	cout<<"\n DELETED ELEMENT IS:"<<p->value;	
	pr->next=Head;
	Last=pr;
	Head->prev=Last;
	delete p;
	
	}
}
void delete_at_first()
{
	if(Head==NULL)
	{
	cout<<"\n LINKED LIST IS EMPTY";
	}
	else if(Head->next==NULL)
	{
	cout<<"\n DELETED ELEMENT IS:"<<Head->value;
	Node *p=Head;
	Head=NULL;
	delete p;
	}
	else
	{
	cout<<"\n DELETED ELEMENT IS:"<<Head->value;
	Node *p=Head;
	Head=Head->next;
	Head->prev=Last;
	Last->next=Head;	
	delete p;
	}

}
void insert_bet()
{
	int pos;
	cout<<"\n ENter ur position:";
	cin>>pos;
	Node *tmp=new Node;
	cout<<"\n enter value:";
	cin>>tmp->value;
	tmp->next=NULL;
	tmp->prev=NULL;
	int i=1;
	Node *p=Head;
	Node *SV;
	while(i<pos-1)
	{
	p=p->next;
	i=i+1;
	}
	SV=p->next;
	p->next=tmp;
	tmp->prev=p;
	tmp->next=SV;
	SV->prev=tmp;

}

void delete_bet()
{
	int pos;
	cout<<"\n ENter ur position:";
	cin>>pos;
	int i=1;
	Node *p=Head;
	Node *PR,*SV;
	while(i<pos)
	{
	PR=p;
	p=p->next;
	i=i+1;
	}
	SV=p->next;
	PR->next=SV;
	SV->prev=PR;
	delete p;

}
void display_next()
{
Node *tmp=Head;
while(tmp->next!=Head)
{
cout<<"|"<<tmp->value<<"|";
tmp=tmp->next;
}
cout<<"|"<<tmp->value<<"|";
}

int main()
{
	
	int ch;
	do
	{
	cout<<"\n1. INSERT AT LAST";
	cout<<"\n2. INSERT AT FIRST";
	cout<<"\n3. INSERT IN BETWEEN";
	cout<<"\n4. DELETE AT FIRST";
	cout<<"\n5. DELTE AT LAST";
	cout<<"\n6. DELETE IN BETWEEN";
	cout<<"\n7. DISPLAY NEXT";
	cout<<"\nENTER UR CHOICE:";	
	cin>>ch;
	switch(ch)
	{
	case 1: insert_at_last();
		break;
	case 2: insert_at_first();
		break;
	case 3: insert_bet();
		break;
	case 4: delete_at_first();
		break;
	case 5: delete_at_last();
		break;
	case 6: delete_bet();
		break;
	case 7: display_next();
		break;
	}
	}while(ch<=7);
}
