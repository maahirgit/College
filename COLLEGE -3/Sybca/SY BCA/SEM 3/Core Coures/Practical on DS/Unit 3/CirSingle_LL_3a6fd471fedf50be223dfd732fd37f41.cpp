//Singly Linked List: forward navigation only;
#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *add;
}*head=NULL;

class CirSingleLL
{
		
		//also define struct code here.....
	public:
		    void createList();
		    void display();
		    void addFirst();
		    void addLast();
		    void deleteLast();
		    void deleteFirst();
		    void addLocation();
		    void deleteLocation();
};
void CirSingleLL::deleteLocation()
{
	int loc;
	struct Node *prev=new Node;//Memory Allocation
	//struct Node *next=new Node;//Memory Allocation
	struct Node *p=new Node;//Memory Allocation
	
	cout<<"Enter the Location :";
	cin>>loc;
	if(loc<1)
	{
		cout<<"Location must be > 1";
	}
	else if(loc==1)
	{	
		struct Node *p=new Node;
		//struct Node *secondLast=new Node;
		p=head;
		while(p->add!=head)
		{
			p=p->add;//Node Updation..going to next Node..
		}
		cout<<"Deleted Node is : "<<head->data;
		p->add=head->add;
		delete head;
		head=p->add;
		
	}
	else
	{
		p=head;
		for(int i=1;i<=loc-1;i++)
		{
			prev=p;
			p=p->add;
		}
		
		cout<<"Deleted Node is : "<<p->data;
		
		prev->add=p->add;
		
		delete(p);
		
	}
}
void CirSingleLL::addLocation()
{
	int value,loc;
	struct Node *temp=new Node;//Memory Allocation
	struct Node *p=new Node;//Memory Allocation
	struct Node *prev=new Node;//Memory Allocation
	cout<<"Enter the Value :";
	cin>>value;
	temp->data=value;
	temp->add=NULL;
	cout<<"Enter the Location :";
	cin>>loc;
	if(loc<1)
	{
		cout<<"Location must be > 1";
	}
	else if(loc==1)
	{
		if(head==NULL)
		{
			head=temp;
			temp->add=head;
		}
		else
		{
			struct Node *p=new Node;
			p=head;
			while(p->add != head)
				p=p->add;
			p->add=temp;
			temp->add= head;
			head=temp;
		}
	}
	else
	{
		p=head;
		for(int i=1;i<=loc-1;i++)
		{
			prev=p;
			p=p->add;
		}
		prev->add=temp;
		temp->add=p;
	}
}

void CirSingleLL::deleteFirst()
{
	struct Node *p=new Node;
	//struct Node *secondLast=new Node;
	p=head;
	while(p->add!=head)
		{
			p=p->add;//Node Updation..going to next Node..
		}
	cout<<"Deleted Node is : "<<head->data;
	p->add=head->add;
	delete head;
	head=p->add;
	
}
void CirSingleLL::deleteLast()
{
	struct Node *p=new Node;
	struct Node *prev=new Node;
	p=head;
	while(p->add!=head)
		{
			prev=p;
			p=p->add;//Node Updation..going to next Node..
		}
	cout<<"Deleted Node is : "<<p->data;
	delete p;//deallocation of memory..free
	prev->add=head;
		
}
void CirSingleLL::addLast()
{
	int value;
	struct Node *temp=new Node;//Memory Allocation
	cout<<"Enter the Value :";
	cin>>value;
	temp->data=value;
	temp->add=NULL;
	
	if(head==NULL)
	{
		head=temp;
		temp->add=head;
	}
	else
	{
		struct Node *p=new Node;
		p=head;
		while(p->add!=head)
		{
			p=p->add;//Node Updation..going to next Node..
		}
		p->add=temp;
		temp->add= head;
	}
	
}
void CirSingleLL::addFirst()
{
	int value;
	struct Node *temp=new Node;//allocation
	cout<<"Enter the Value :";
	cin>>value;
	temp->data=value;
	temp->add=NULL;
	
	if(head==NULL)
	{
		head=temp;
		temp->add=head;
	}
	else
	{
		struct Node *p=new Node;
		p=head;
		while(p->add != head)
			p=p->add;
		p->add=temp;
		temp->add= head;
		head=temp;
	}
	
}
void CirSingleLL::display()
{
	struct Node *p=new Node;
	p=head;
	
	if(head==NULL)
	{
		cout<<"List is Empty";
	}
	else
	{
		while(p->add!=head)
		{
			cout<<p->data<<"->";
			p=p->add;//incement nodes
		}
		cout<<p->data<<"->";
//		cout<<"NULL";
	}	
}
void CirSingleLL::createList()
{
	int value;
	struct Node *temp=new Node;//Memory Allocation
	cout<<"Enter the Value :";
	cin>>value;
	temp->data=value;
	temp->add=NULL;
	
	if(head==NULL)
	{
		head=temp;
		temp->add=head;
	}
	else
	{
		struct Node *p=new Node;
		p=head;
		while(p->add!=head)
		{
			p=p->add;//Node Updation..going to next Node..
		}
		p->add=temp;
		temp->add=head;
	}
	
}

int main()
{
	int ch;
	CirSingleLL s;
	do{
	cout<<endl<<"0 For Exit"<<endl;
	cout<<"1 for Create List"<<endl;
	cout<<"2 for Display"<<endl;
	cout<<"3 for Add First"<<endl;
	cout<<"4 for Add Last"<<endl;
	cout<<"5 for Add at Location"<<endl;
	cout<<"6 for Delete from Last"<<endl;
	cout<<"7 for Delete from First"<<endl;
	cout<<"8 for Delete at Location"<<endl;

	cout<<"Enter the Choice:";
	cin>>ch;
		switch(ch)
		{
			case 0: break;
			case 1:s.createList();
				      break;
			case 2:s.display();
					break;
			case 3:s.addFirst();
				      break;
			case 4:s.addLast();
				      break;
			case 5:s.addLocation();
					break;
			case 6:s.deleteLast();
					break;
			case 7:s.deleteFirst();
					break;
			case 8:s.deleteLocation();
					break;
		}
		
	}while(ch!=0);
	
}