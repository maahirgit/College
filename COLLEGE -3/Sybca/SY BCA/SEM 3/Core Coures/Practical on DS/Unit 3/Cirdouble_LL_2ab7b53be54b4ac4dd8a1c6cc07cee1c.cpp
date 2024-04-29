//Double Linked List: 
#include <iostream>
using namespace std;
struct Node
{
   int data;
   struct Node *prev;
   struct Node *next;
};
struct Node* head = NULL;
class CirDoubleLL
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

void CirDoubleLL::createList()
{
	int value;
	struct Node *temp=new Node;//Memory Allocation
	cout<<"Enter the Value :";
	cin>>value;
	temp->data=value;
	temp->prev=NULL;
	temp->next=NULL;
	
	if(head==NULL)
	{
		head=temp;
		temp->next=head;
		temp->prev=head;
	}
	else
	{
		struct Node *p=new Node;
		p=head;
		while(p->next!=head)
		{
			p=p->next;//Node Updation..going to next Node..
		}
		temp->next=p->next;
		p->next=temp;
		temp->prev=p;
		head->prev=temp;
		//temp->next=head;
	}
	
	
}

void CirDoubleLL::addFirst()
{
	int value;
	struct Node *temp=new Node;//allocat
	cout<<"Enter the Value :";
	cin>>value;
	temp->data=value;
	temp->prev = NULL;
	temp->next = NULL;
	
	if(head == NULL)
	{
		head=temp;
		temp->next=head;
		temp->prev=head;
	}
	else
	{
		/*struct Node *p=new Node;
		p=head;
		while(p->next != head)
			p=p->next;
		p->next=temp;*/
		temp->prev=head->prev;
		temp->next= head;
		(head->prev)->next=temp;
		head->prev=temp;
		head=temp;
	}
	
	
}

void CirDoubleLL::addLast()
{
	int value;
	struct Node *temp=new Node;//Memory Allocation
	cout<<"Enter the Value :";
	cin>>value;
	temp->data=value;
	temp->next=NULL;
	temp->prev=NULL;
	
	if(head==NULL)
	{
		head=temp;
		temp->next=head;
		temp->prev=head;
	}
	else
	{
		/*struct Node *p=new Node;
		p=head;
		while(p->next!=head)
		{
			p=p->next;//Node Updation..going to next Node..
		}
		p->next=temp;
		temp->prev=p;
		temp->next=head;
		head->prev=temp;*/
		temp->prev=head->prev;
		temp->next= head;
		(head->prev)->next=temp;
		head->prev=temp;
	
	}
	
}

void CirDoubleLL::addLocation()
{
	int value,loc;
	struct Node *temp=new Node;//Memory Allocation
	struct Node *p=new Node;//Memory Allocation
	cout<<"Enter the Value :";
	cin>>value;
	temp->data=value;
	temp->next=NULL;
	temp->prev=NULL;
	cout<<"Enter the Location :";
	cin>>loc;
	if(loc<1)
	{
		cout<<"Location must be > 1";
	}
	else if(loc==1)
	{
		if(head == NULL)
		{
			head=temp;
			temp->next=head;
			temp->prev=head;
		}
		else
		{
			/*struct Node *p=new Node;
			p=head;
			while(p->next != head)
				p=p->next;
			p->next=temp;
			temp->prev=p;
			temp->next= head;
			head=temp;*/
			temp->prev=head->prev;
			temp->next= head;
			(head->prev)->next=temp;
			head->prev=temp;
			head=temp;
		}
	}
	else
	{
		p=head;
		for(int i=1;i<loc-1;i++)
		{
			p=p->next;
		}
		temp->next=p->next;
		(p->next)->prev=temp;
		p->next=temp;
		temp->prev=p;
	}
}

void CirDoubleLL::display() 
{
	struct Node *p = new Node;
	p = head;
	
	if(head==NULL)
	{
		cout<<"List is Empty";
	}
	else
	{
		while(p->next!=head)
		{
			cout<<p->data<<"->";
			p=p->next;//incement nodes
		}
		cout<<p->data;
	}
}

void CirDoubleLL::deleteFirst()
{
	struct Node *p=new Node;
	p=head;
	/*while(p->next!=head)
		p=p->next;*/
	cout<<"Deleted Node is : "<<p->data;
	(p->prev)->next=p->next;
	(p->next)->prev=p->prev;
	head=p->next;
	delete p;
		
}
void CirDoubleLL::deleteLast()
{
	struct Node *p=new Node;
	p=head->prev;;
	/*	while(p->next!=head)
		{
			p=p->next;//Node Updation..going to next Node..
		}*/
		cout<<"Deleted Node is : "<<p->data;
		(p->prev)->next=head;
		head->prev=p->prev;
		delete p;//deallocation of memory..free
}

void CirDoubleLL::deleteLocation()
{
	int loc;
	//struct Node *prev=new Node;//Memory Allocation
	struct Node *p=new Node;//Memory Allocation
	
	cout<<"Enter the Location :";
	cin>>loc;
	if(loc<1)
	{
		cout<<"Location must be > 1";
	}
	else if(loc==1)
	{	
		p=head;
		while(p->next!=head)
			p=p->next;
		cout<<"Deleted Node is : "<<head->data;
		p->next=head->next;
		(p->next)->prev=p;
		delete head;
		head=p->next;
	}
	else
	{
		p=head;
		for(int i=1;i<loc;i++)
		{
			p=p->next;
		}
		
		cout<<"Deleted Node is : "<<p->data;
		
		(p->next)->prev=p->prev;
		(p->prev)->next=p->next;
		
		delete p;
		
	}
}

int main() 
{
	int ch;
	CirDoubleLL s;
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
