#include<iostream>
using namespace std;

class Node{
    public:
    int rollno;
    string name;
    Node *next;
};

int main(){
    int choice;
    int r;
    string s;
    Node *temp = NULL;
    Node *front = NULL;
    Node *rear = NULL;
    Node *p = NULL;
    while(1){
        cout<<"\n1)For Enqueue \n2)For Dequeue \n3)For Peek \n4)For Display";
        cout<<"\nEnter your choice = ";
        cin>>choice;
    switch(choice){
    case 1 : cout<<"Enter roll no = ";
             cin>>r;
             cout<<"Enter name = ";
             cin>>s;
             temp = new Node();
             temp->rollno=r;
             temp->name=s;
             if(front==NULL && rear==NULL){
                front=rear=temp;
             }
             else{
                rear->next = temp;
                rear = temp;
             }
             break;

    case 2 : if(front==NULL && rear==NULL){
                cout<<"Queue underflow";
             }
             else if(front->next == NULL){
                p = front;
                delete p;
                front=rear=NULL;
             }
             else{
                p=front;
                front = front->next;
                delete p;
             }
             break;

    case 3 : if(front==NULL && rear==NULL){
                cout<<"Underflow";
             }
             else{
                cout<<front->rollno;
             }

    case 4 : if(front==NULL && rear==NULL){
                cout<<"underflow";
             }
             else{
                p=front;
                cout<<"\n";
                while(p!=NULL){
                    cout<<p->rollno<<" "<<p->name<<" ";
                    p=p->next;
                }
             }
        }
    }
}