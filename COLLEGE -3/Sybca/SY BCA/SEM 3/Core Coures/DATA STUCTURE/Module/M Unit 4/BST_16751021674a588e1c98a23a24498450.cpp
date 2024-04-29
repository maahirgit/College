//Binary Search Tree: BST
#include<iostream>
using namespace std;
struct Tree{
	int data;
	struct Tree *left;
	struct Tree *right;
}*root=NULL;

class BSTree{
					
	public:
		    void createList();
		    void preorder(struct Tree *root);
		    void postorder(struct Tree *root);
		    void inorder(struct Tree *root);
		    void search();
};
void BSTree::search()
{
	int no;
	cout<<"Enter the No to Search :";
	cin>>no;
	struct Tree *p=new Tree;//Memory Allocation
	struct Tree *prnt=new Tree;//Memory Allocation
	if(root->data==no)
	{
		cout<<"Found at Root : "<<root->data;
	}
	else
	{
		p=root;
		int flag=0;
		
		while(p!=NULL)
		{
			prnt=p;
			if(prnt->data == no)
			{
				flag =1;
			}
			if(no<p->data)
			{
				p=p->left;				
			}
			else
			{
				p=p->right;
			}
		}
		
		if(flag ==0)
		{
			cout<<"\nNot Found";
		}
		else
		{
			cout<<"\nFound";
		}
	}
	
}
void BSTree::preorder(struct Tree *root)
{
	//Rt-L-R
	if(root!=NULL)
	{
		cout<<root->data<<" , ";
		preorder(root->left);
		preorder(root->right);
		
	}	
}
void BSTree::postorder(struct Tree *root)
{
	//L-R-Rt
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" , ";
	}
}
	
void BSTree::inorder(struct Tree *root)
{
	//L-Rt-R
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->data<<" , ";
		inorder(root->right);
	}
}
void BSTree::createList()
{
	int value;
	struct Tree *temp=new Tree;//Memory Allocation
	struct Tree *p=new Tree;//Memory Allocation
	struct Tree *prnt=new Tree;//Memory Allocation
	cout<<"Enter the Value :";
	cin>>value;
	temp->data=value;
	temp->left=NULL;
	temp->right=NULL;
	
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		p=root;
		
		while(p!=NULL)
		{
			prnt=p;
			
			if(value<p->data)
			{
				p=p->left;				
			}
			else
			{
				p=p->right;
			}
		}
		if(value<prnt->data)
		{
			prnt->left=temp;
		}
		else
		{
			prnt->right=temp;
		}
	}
}

int main()
{
	int ch;
	BSTree d;
	do{
	cout<<endl<<"0 For Exit"<<endl;
	cout<<"1 for Create binary List"<<endl;
	cout<<"2 for Inorder"<<endl;
	cout<<"3 for Preorder"<<endl;
	cout<<"4 for Postorder"<<endl;
	cout<<"5 for Search"<<endl;
	cout<<"Enter the Choice:";
	cin>>ch;
		switch(ch)
		{
			case 0: break;
			case 1:d.createList();
				      break;
			case 2:d.inorder(root);
					break;
			case 3:d.preorder(root);
				      break;
			case 4:d.postorder(root);
				      break;
			case 5:d.search();
				      break;
		}
	}while(ch!=0);
}