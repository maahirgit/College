#include<iostream>
using namespace std;
class Number{
public:              
    void getdata(int num){
        if(num%2==0){
            cout<<"it is a even number ";
        }
        else{
            cout<<"odd number";
        }
    }
};
int main(){
    Number n1;
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    n1.getdata(n);
}