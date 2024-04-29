//Simple Queue Using Linked List
#include<iostream>
using namespace std;
struct Queue{
	int data;
	struct Queue *add;
}*r=NULL,*f=NULL;

class Que{
		
	public:
		void enque();//insertion
		void deque();//deletion
		void display();//display
		void isEmpty();//stack is underflow
	
};

void Que::display()
{
	struct Queue *p=new Queue;//Memory Allocation
	p=f;
	while(p->add!=NULL)
	{
		cout<<p->data<<"->";
		p=p->add;
	}
	cout<<p->data;
}


void Que::deque()
{
	if(r==NULL || f==NULL)
	{
		cout<<"List Empty";
	}
	else
	{
	struct Queue *p=new Queue;//Memory Allocation
	p=f;
	f=p->add;
	delete p;
	}
}
void Que::enque()
{
	int value;
	struct Queue *temp=new Queue;//Memory Allocation
	cout<<"Enter the Data : ";
	cin>>value;
	temp->data=value;
	temp->add=NULL;
	if(r==NULL || f==NULL)
	{
		r=temp;
		f=temp;
	}
	else
	{
		r->add=temp;
		r=temp;
		
	}
	
	
			
}

		


int main()
{
	Que q;
	int ch;
	
	do{
		cout<<endl;
		cout<<"Press 1. for Insert"<<endl;
		cout<<"Press 2. for Delete"<<endl;
		cout<<"Press 3. for Display"<<endl;
		cout<<"Press 4. for Exit"<<endl;
		cout<<"Enter Your Choice:";
		cin>>ch;
		
			switch(ch)
			{
				case 1: q.enque();
					     break;
				case 2: q.deque();
					     break;
				case 3: q.display();
					     break;
				case 4:exit(0);
				
			}
				
	}while(ch!=4);
	return 0;	
}
