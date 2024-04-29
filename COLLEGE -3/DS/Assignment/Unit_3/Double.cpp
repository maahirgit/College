#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;
};

int main(){
    int choice,num,ser,flag;
    Node *head = NULL;
    Node *temp;
    Node *last = NULL;
    Node *p,*q;

    while(1){
        cout<<"\n0)For Exit \n1)For Insert \n2)For For List \n3)For Serach \n4)For insert at beginning \n5)For delete at begining \n6)for delete at end \n7)For insert at any \n8)For delete at any";
        cout<<"\n Enter your choice = ";
        cin>>choice;
        switch(choice){
            case 1 : cout<<"Enter number = ";
                     cin>>num;
                     if(head==NULL){
                        head = new Node();
                        head->prev = NULL;
                        head->data = num;
                        head->next = NULL;
                        last = head;
                     }
                     else{
                        temp = new Node();
                        temp->prev= last;
                        last->next = temp;
                        temp->data=num;
                        temp->next = NULL;
                        last = temp;
                     }
                     break;

            case 2 : p=head;
                     while(p!=NULL){
                        cout<<p->data<<" ";
                        p=p->next;
                     }
                     break;

            case 3 : cout<<"Enter element for search = ";
                     cin>>ser;
                     p=head;
                     flag=0;
                     while(p!=NULL){
                        if(p->data == ser){
                            flag=1;
                            break;
                        }
                        p=p->next;
                     }
                     if(flag==1){
                        cout<<"Found";
                     }
                     else{
                        cout<<"Not Found";
                     }
                     break;

            case 4 : cout<<"Enter number = ";
                     cin>>num;
                     temp = new Node();
                     temp->prev = NULL;
                     temp->data = num;
                     temp->next = head;
                     head=temp;
                     head->prev = temp;
                     break;

            case 5 : p=head;
                     head = head->next;
                     head->prev = NULL;
                     delete p;
                     break;

            case 6 : p=last;
                     last=last->prev;
                     last->next = NULL;
                     delete p;

            case 7 : cout<<"Enter number = ";
                     cin>>num;
                     cout<<"Enter number after which you want to insert = ";
                     cin>>ser;
                     p=head;
                     while(p!=NULL){
                         if(p->data == ser){
                            break;
                         }
                         p=p->next;
                     }
                     if(p==NULL){
                        cout<<"Invalid source";
                     }
                     else{
                        temp = new Node();
                        temp->prev = p;
                        temp->data = num;
                        q = p->next;
                        temp->next =q;
                        p->next=temp;
                        q->prev=temp; 
                        
                     }
                     break;

            case 8 : cout<<"Enter number you want to delete = ";
                     cin>>num;
                     temp = head;
                     while(temp!=NULL){
                        if(temp->data==num){
                            break;
                        }
                        temp = temp->next;
                     }
                     p=temp->prev;
                     q=temp->next;
                     p->next = q;
                     q->prev = p;
                     delete temp;
                     break;
        }
    }
}