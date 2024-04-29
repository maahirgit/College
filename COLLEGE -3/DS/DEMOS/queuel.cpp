#include<iostream>
using namespace std;
//queue using liked list  enqueue dequeue peek

class Node
{
	public:	
	int rollno;
	string name;
	Node *next;

};
Node *FRONT=NULL;
Node *REAR=NULL;

void enqueue()
{
	Node *tmp=new Node;
	int no;
	string nm;
	//cout<<"\n tmp is:"<<tmp;
	cout<<"\n enter rollno:";
	cin>>no;
	cout<<"\n enter name:";
	cin>>nm;
	tmp->rollno=no;
	tmp->name=nm;
	if(FRONT==NULL && REAR==NULL)
	{
	FRONT=REAR=tmp;
	}	
	else
	{
	REAR->next=tmp;
	REAR=tmp;
	}
}

void dequeue()
{
	if(FRONT==NULL && REAR==NULL) 
	{
	cout<<"\n UNDERFLOW";
	}
	else if(FRONT->next==NULL) 
	{
	Node *tmp=FRONT;
	delete tmp;
	FRONT=REAR=NULL;
	}
	else 
	{
	Node *tmp=FRONT;
	FRONT=FRONT->next;
	delete tmp;
	}

}
void peek()
{
	if(FRONT==NULL && REAR==NULL) 
	{
	cout<<"\n UNDERFLOW";
	}
	else
	{
	cout<<"\n FIrST ELEMENT OF QUEUE IS:"<<FRONT->rollno;
	}


}
void display()
{
	if(FRONT==NULL && REAR==NULL) 
	{
	cout<<"\n UNDERFLOW";
	}
	else
	{
	Node *tmp=FRONT;
	cout<<"\n";
	while(tmp!=NULL)
	{
	cout<<" |"<<tmp->rollno<<" "<<tmp->name<<" "<<tmp->next<<" |";
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
	cout<<"\n1. ENQUEUE";
	cout<<"\n2. DEQUEUE";
	cout<<"\n3. PEEK";
	cout<<"\n4. DISPLAY";
	cout<<"\n ENTER YOUR CHOICE:";
	cin>>ch;
	switch(ch)
	{
	case 1:enqueue();
		break;
	case 2:dequeue();
		break;
	case 3:peek();
		break;
	case 4: display();
		break;
	}
	}while(ch<=4);



return 0;
}








