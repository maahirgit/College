#include<iostream>
using namespace std;
#define SIZE 5
class Stack{
    public:
    int s[SIZE];
    int top,index;
    Stack(){
        top=-1;
    }
    void push(int num){
        if(top==SIZE-1){
            cout<<"Stack Overflow";
        }
        else{
            top++;
            s[top]=num;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"Stack underflow";
        }
        else{
            cout<<"Deleted = "<<s[top];
            top--;
        }
    }

    void display(){
        if(top==-1){
            cout<<"Stack is empty";
        }
        else{
            for(int i=top;i>=0;i--){
                cout<<s[i]<<" ";
            }
        }
    }

    void peek(int location){
        index = location-1;
        cout<<s[index];
    }
};

int main(){
    Stack s;
    int choice,num,index;
    while(1){
        cout<<"\n1)For Push \n2)For Pop \n3)For Display \n4)For Peek";
        cout<<"\nEnter your choice = ";
        cin>>choice;
        switch(choice){
            case 1 : cout<<"Enter number = ";
                     cin>>num;
                     s.push(num);
                     break;

            case 2 : s.pop();
                     break;

            case 3 : s.display();
                     break;

            case 4 : cout<<"Enter index for peek = ";
                     cin>>index;
                     s.peek(index);

            case 0 : exit(0);
        }
    }
}