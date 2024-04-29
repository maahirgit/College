// Write a C++ program that will ask user to input string and display the same.
#include <iostream>
using namespace std;
class print
{
    string a;
    public :

    void input(){
        cout<<"Enter a value : ";
        cin>>a;
    }
    void output(){
        cout<<"you have entered a value = "<<a;
    }
};
int main(){

    print p1;
    p1.input();
    p1.output();
}