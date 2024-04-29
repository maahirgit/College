#include<iostream>
using namespace std;
class Number{
    public:
        int maximum(int n1,int n2,int n3){
            if(n1>n2 && n1>n3){
                return n1;
            }
            else if(n2>n3){
                return n2;
            }
            else{
                return n3;
            }
        }
        int minimum(int n4,int n5,int n6){
            if(n4<n5 && n4<n6){
                return n4;
            }
            else if(n5<n6){
                return n5;
            }
            else{
                return n6;
            }
        }
};
int main(){
    Number n1;
    int num1,num2,num3,min,max;
    cout<<"Enter the number = ";
    cin>>num1>>num2>>num3;
    max=n1.maximum(num1,num2,num3);
    cout<<"max = "<<max<<endl;
    min=n1.minimum(num1,num2,num3);
    cout<<"min = "<<min;
}