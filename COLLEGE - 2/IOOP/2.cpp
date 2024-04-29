// create a class of area and find out the area of circle and rectangle with constructor overloading
#include<iostream>
using namespace std;
class Area{
    public:
    int r,l,b;
    Area(int len,int bre){
    l=len;
    b=bre;
    }
    Area(int ra){
        r=ra;
    }
    void display(){
    cout<<l*b<<endl;
    cout<<3.14*r*r<<endl;
}
};

int main(){
    Area a1(5,4),a2(5);
    a1.display();
    a2.display();
}