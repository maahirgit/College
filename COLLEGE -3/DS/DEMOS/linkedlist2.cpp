#include<iostream>
using namespace std;

class Node
{
	public:
	int value;
	Node *next;
};

int main()
{
	Node *First=new Node();
	
	Node *Second=new Node();

	Node *Third=new Node();


	First->value=10;
	Second->value=20;
	Third->value=30;

	First->next=Second;
	Second->next=Third;
	Third->next=NULL;

	Node *tmp=First;
	while(tmp!=NULL)
	{
	cout<<"\t"<<tmp->value;
	tmp=tmp->next;
	}
	
	
}
