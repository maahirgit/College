#include<iostream>
using namespace std;
#define SIZE 5

class A{
    public:
    int f;
    int r;
    int cqueue[SIZE];
    A(){
        f=-1;
        r=-1;
    }

    void Enqueue(int num){
        if(f==0 && r==SIZE-1){
            cout<<"Queue is full";
        }
        else if(r==f-1){
            cout<<"Queue is full";
        }
        else{
            if(r==SIZE-1){
                r=0;
            }
            else{
                r++;
            }
            cqueue[r]=num;
            if(f==-1){
                f++;
            }
        }
    }

    void Dequeue(){
        if(f==-1){
            cout<<"Queue is empty";
        }
        else{
            if(f==r){
                cout<<"Delete element = "<<cqueue[f];
                f=-1;
                r=-1;
            }
            else{
                cout<<"Delete element = "<<cqueue[f];

                if(f==SIZE-1){
                    f=0;
                }
                else{
                    f++;
                }
            }
        }

    }

    void display(){
        if(r<f){
            for(int i=f;i<SIZE;i++){
                cout<<cqueue[i]<<" ";
            }
            for(int i=0;i<=r;i++){
                cout<<cqueue[i]<<" ";
            }
        }
        else{
            for(int i=f;i<=r;i++){
                cout<<cqueue[i]<<" ";
            }
        }
    }
};

int main(){
     int choice;
    int num;
    A obj;
    while(1)
    {
        cout<<"\n1 For insert \n2 For Delete \n3 For Display \n0 For Exit \nEnter your choice";
        cin>>choice;

        switch(choice){
            case 1 :
                cout<<"Enter number";
                cin>>num;
                obj.Enqueue(num);
                break;

            case 2 :
                obj.Dequeue();
                break;

            case 3 : 
                obj.display();
                break;

            case 0 :
                    exit(0);

            default:
                cout<<"Enter valid choice";
        }
    }
    return 0;
}