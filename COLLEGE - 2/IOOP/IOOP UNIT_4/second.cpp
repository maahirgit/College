#include<iostream>
using namespace std;
class Number{
    public:
    void positive(int n){
        if(n>0){
            cout<<"It is a positive num";
        }
    }
    void negative(int n){
        if(n<0){
            cout<<"Number is negative";
        }
    }
};
int main(){
    Number n1;
    int num;
    cout<<"Enter the number ";
    cin>>num;
    n1.positive(num);
    n1.negative(num);
}
