#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

int main(){
    int choice;
    int num;
    Node *p;
    Node *top = NULL;
    Node *temp = NULL;
    while(1){
        cout<<"\n1)For Push \n2)For Pop \n3)Peek \n4)For Display";
        cout<<"\nEnter your choice = ";
        cin>>choice;
        switch(choice){
            case 1 : cout<<"Enter number = ";
                     cin>>num;
                     temp = new Node();
                     temp->data = num;
                     temp->next = NULL;
                     if(top==NULL){
                        top=temp;
                     }
                     else{
                        temp->next = top;
                        top = temp;
                     }
                     break;

            case 2 : if(top==NULL){
                        cout<<"Stack underflow";
                     }
                     else{
                        p=top;
                        top = top->next;
                        delete p;
                     }
                     break;

            case 3 : if(top==NULL){
                      cout<<"stack underflow";
                     }
                     else{
                        cout<<"Top value = "<<top->data;
                     }
                     break;

            case 4 : if(top==NULL){
                        cout<<"Stcak undeflow";
                      }
                      p=top;
                      while(p!=NULL){
                        cout<<"\n"<<p->data;
                        p = p->next;
                      }
        }
    }

    return 0;
}