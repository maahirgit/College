#include<iostream>
using namespace std;
class Number{
    public:
    void max(int a,int b);
    void min(int a,int b);
};
void Number::max(int a,int b){
    if(a>b){
        cout<<"A is greater";
    }
    else{
        cout<<"b";
    }
}
void Number::min(int a,int b){
    if(a<b){
        cout<<"A is smaller";
    }
    else{
        cout<<"b";
    }
}
int main(){
    Number n1;
    n1.max(10,20);
    n1.min(20,55);
    return 0;
}