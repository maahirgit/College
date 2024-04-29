#include<iostream>
#include<cmath>
using namespace std;
class Number{
    public:
    int c,d;
    int power(int a,int b){
        int c = pow(a,b);
        cout<<c<<endl;
    }
    double power(double a,double b){
        double d = pow(a,b);
        cout<<d;
    }
};
int main(){
    Number n;
    n.power(10,2);
    n.power(5.5,2.5);
}