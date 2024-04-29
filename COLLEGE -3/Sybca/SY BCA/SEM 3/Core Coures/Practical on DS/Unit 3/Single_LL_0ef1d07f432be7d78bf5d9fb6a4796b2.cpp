//Singly Linked List: forward navigation only;
#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *add;
}*head=NULL;

class SingleLL{
		
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
void SingleLL::deleteLocation()
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
		p=head;
		cout<<"Deleted Node is : "<<p->data;
		head=p->add;
		delete p;
	}
	else
	{
		p=head;
		for(int i=1;i<loc-1;i++)
		{
			if(p!=NULL)
			{
					p=p->add;
			}
			
		}
		if(p!=NULL)
		{
			prev=p;
			p=p->add;
			//next=p;
		}
		cout<<"Deleted Node is : "<<p->data;
		
		prev->add=p->add;
		
		delete(p);
		
	}
}
void SingleLL::addLocation()
{
	int value,loc;
	struct Node *temp=new Node;//Memory Allocation
	struct Node *p=new Node;//Memory Allocation
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
			temp->add=head;//making first node
			head=temp;
	}
	else
	{
		p=head;
		for(int i=1;i<loc-1;i++)
		{
		//	if(p!=NULL)
		//	{
				p=p->add;
		//	}
		}
		//if(p!=NULL)
		//{
			temp->add=p->add;
			p->add=temp;
		//}
	}
}

void SingleLL::deleteFirst()
{
	struct Node *p=new Node;
	//struct Node *secondLast=new Node;
	p=head;
	cout<<"Deleted Node is : "<<p->data;
	head=p->add;
	delete p;
	
}
void SingleLL::deleteLast()
{
	struct Node *p=new Node;
	struct Node *secondLast=new Node;
		p=head;
		while(p->add!=NULL)
		{
			secondLast=p;
			p=p->add;//Node Updation..going to next Node..
		}
		cout<<"Deleted Node is : "<<p->data;
		delete p;//deallocation of memory..free
		secondLast->add=NULL;
		
	
	
}
void SingleLL::addLast()
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
	}
	else
	{
		struct Node *p=new Node;
		p=head;
		while(p->add!=NULL)
		{
			p=p->add;//Node Updation..going to next Node..
		}
		p->add=temp;
	}
	
}
void SingleLL::addFirst()
{
	int value;
	struct Node *temp=new Node;//allocat
	cout<<"Enter the Value :";
	cin>>value;
	temp->data=value;
	temp->add=NULL;
	
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		temp->add=head;
		head=temp;
	}
	
}
void SingleLL::display()
{
	struct Node *p=NULL;
		p=head;
		while(p!=NULL)
		{
			cout<<p->data<<"->";
			p=p->add;//ince nodes
		}
		printf("NULL");
		
}
void SingleLL::createList()
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
	}
	else
	{
		struct Node *p=new Node;
		p=head;
		while(p->add!=NULL)
		{
			p=p->add;//Node Updation..going to next Node..
		}
		p->add=temp;
	}
	
	
}

int main()
{
	int ch;
	SingleLL s;
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