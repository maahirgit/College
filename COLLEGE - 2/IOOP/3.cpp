// create a class and find out the square and cube of a number using constructor overloding
#include<iostream>
using namespace std;
class Demo
{
    public:
     int c;
     double s;
    Demo(int n){
      c=n;
    }
    Demo(double d){
        s=d;
    }
    void sqrt(){
        cout<<c*c<<endl;
    }
    void cube(){
        cout<<s*s*s;
    }
};
int main(){
    Demo d1(5);
    Demo d2(10.00);
    d1.sqrt();
    d2.cube();
}