#include<iostream>
using namespace std;
#define SIZE 5

class Q{
    public:
    int f;
    int r;
    int queue[SIZE];
    Q(){
        f=-1;
        r=-1;
    }
    void Enqueue(int num){
        if(r==SIZE-1){
            cout<<"Queue is Full";
        }
        else{
            r++;
            queue[r]=num;
        }
        if(f==-1){
            f=0;
        }
    }

    void Dequeue(){
        if(f==-1){
            cout<<"Queue is empty";
        }
        else{
            cout<<"Deleted element = "<<queue[f];
            if(f==r){
                f=-1;
                r=-1;
            }
            else{
                f++;
            }
        }
    }

    void peek(int location){
        cout<<queue[location-1];
    }

    void display(){
        for(int i=f;i<=r;i++){
            cout<<queue[i]<<" ";
        }
    }
};

int main(){
    Q q;
    int choice,num,location;
    while(1){
        cout<<"\n1)For Enqueue \n2)For Dequeue \n3)For Display \n4)For Peek";
        cout<<"\n Enter your choice = ";
        cin>>choice;
        switch(choice){
            case 1 : cout<<"Enter number = ";
                     cin>>num;
                     q.Enqueue(num);
                     break;

            case 2 : q.Dequeue();
                     break;

            case 3 : q.display();
                     break;

            case 4 : cout<<"Enter location for peek = ";
                     cin>>location;
                     q.peek(location);
                     break;

            case 5 : exit(0);
        }
    }
}