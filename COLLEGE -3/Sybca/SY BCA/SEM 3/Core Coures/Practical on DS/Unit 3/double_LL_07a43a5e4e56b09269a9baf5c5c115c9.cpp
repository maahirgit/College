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
class DoubleLL
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

void DoubleLL::createList()
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
	}
	else
	{
		struct Node *p=new Node;
		p=head;
		while(p->next!=NULL)
		{
			p=p->next;//Node Updation..going to next Node..
		}
		p->next=temp;
		temp->prev=p;
	}
	
	
}

void DoubleLL::addFirst()
{
	int value;
	struct Node *temp=new Node;//allocat
	cout<<"Enter the Value :";
	cin>>value;
	temp->data=value;
	temp->prev = NULL;
	temp->next = NULL;
	
	if(head != NULL)
	{
		head->prev = temp ;
		temp->next = head;
	}
	head = temp;
	
	
}

void DoubleLL::addLast()
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
	}
	else
	{
		struct Node *p=new Node;
		p=head;
		while(p->next!=NULL)
		{
			p=p->next;//Node Updation..going to next Node..
		}
		p->next=temp;
		temp->prev=p;
	}
	
}

void DoubleLL::addLocation()
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
			head->prev = temp ;
			temp->next = head;
			head=temp;
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

void DoubleLL::display() 
{
	struct Node* ptr;
	ptr = head;
	while(ptr != NULL) 
	{
		cout<< ptr->data <<"->";
		ptr = ptr->next;
	}
	cout<<"NULL";
}

void DoubleLL::deleteFirst()
{
	struct Node *p=new Node;
	p=head;
	cout<<"Deleted Node is : "<<p->data;
	head=p->next;
	head->prev=NULL;
	delete p;
	
}
void DoubleLL::deleteLast()
{
	struct Node *p=new Node;
	p=head;
		while(p->next!=NULL)
		{
			p=p->next;//Node Updation..going to next Node..
		}
		cout<<"Deleted Node is : "<<p->data;
		(p->prev)->next=NULL;
		delete p;//deallocation of memory..free
}

void DoubleLL::deleteLocation()
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
		cout<<"Deleted Node is : "<<p->data;
		head=p->next;
		head->prev=NULL;
		delete p;
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
		
		delete(p);
		
	}
}

int main() 
{
	int ch;
	DoubleLL s;
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
