#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    void setdata(int d){
        data = d;
    }
    void setnext(Node *n){
        next = n;
    }
    int getdata(){
        return data;
    }
    Node *getnext(){
        return next;
    }
};

int main(){
    int choice,num,ser,flag;
    Node *head = NULL;
    Node *last = NULL;
    Node *temp;
    Node *p;
    Node *q;

    while(1){
        cout<<"\n1)For Add \n2)For List \n3)For Search \n4)For insert at first \n5)For dleete at beg \n6)For delete at end \n7)For insert at any \n8)For delete at any";
        cout<<"\nEnter choice = ";
        cin>>choice;
        switch(choice){

        case 0 : exit(0);
        case 1 : cout<<"enter number = ";
                 cin>>num;
                 if(head==NULL){
                 head = new Node();
                 head->setdata(num);
                 head->setnext(NULL);
                 last=head;
                 }
                 else{
                    temp = new Node();
                    temp->setdata(num);
                    temp->setnext(NULL);
                    last->setnext(temp);
                    last=temp;
                 }
                 break;

        case 2 : p=head;
                 while(p!=NULL){
                    cout<<p->getdata()<<" ";
                    p=p->getnext();
                 }
                 break;

        case 3 : cout<<"Enter number for search = ";
                 cin>>ser;
                 p=head;
                 flag=0;
                 while(p!=NULL){
                    if(p->getdata()==ser){
                        flag=1;
                    }
                    p = p->getnext();
                 }

                 if (flag==1){
                    cout<<"Found";
                 }
                 else{
                    cout<<"Not Found";
                 }
                 break;

        case 4 : cout<<"Enter number = ";
                 cin>>num;
                 temp = new Node();
                 temp->setdata(num);
                 temp->setnext(head);
                 head=temp;
                 break;

        case 5 : p=head;
                 head = head->getnext();
                 delete p;
                 break;

        case 6 : p=head;
                 while(p->getnext() != last){
                    p = p->getnext();
                 }
                 p->setnext(NULL);
                 delete last;
                 last=p;
                 break;

        case 7 : cout<<"Enter number = ";
                 cin>>num;
                 cout<<"Enter number after which you want to insert = ";
                 cin>>ser;
                 p=head;
                 while(p!=NULL){
                    if(p->getdata() == ser){
                        break;
                    }
                    p=p->getnext();
                 }
                 if(p!=NULL){
                    q = p->getnext();
                    temp = new Node();
                    p->setnext(temp);
                    temp->setnext(q);
                    temp->setdata(num);
                 }
                 else{
                    cout<<"Invalid Source";
                 }
                 break;

        case 8 : cout<<"Enter number to delete = ";
                 cin>> num;
                 p = head;
                 while(p!=NULL){
                    if(p->getdata()==num){
                        break;
                    }
                    p=p->getnext();
                 }

                 if(p==NULL){
                    cout<<"Invalid Source";
                 }
                 else{
                    temp = p->getnext();
                    q=head;
                    while(q->getnext()!=p){
                        q = q->getnext();
                    }
                    q->setnext(temp);
                    delete p;
                 }
        }
    }
    return 0;
}