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
	cout<<"\nAddress of first node is:"<<First;
	Node *Second=new Node();
	cout<<"\nAddress of first node is:"<<Second;
	Node *Third=new Node();
	cout<<"\nAddress of first node is:"<<Third;
}
