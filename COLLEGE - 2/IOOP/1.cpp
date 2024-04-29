// create class of employees create two objects of class with different no of parameters and print the information of employee using overloading the constructor 
#include<iostream>
using namespace std;
class Employees{
    public:
    int id,sal;
    string desg,name;
    Employees(int i){
        id=i;
        sal=10000;
        name="def";
        desg="manager";
    }
    Employees(int i,int s,string d,string n){
        id=i;
        sal=s;
        desg=d;
        name=n;

    }
    void display(){
        cout<<id<<sal<<desg<<name;
        
    }
};
int main(){
    Employees e1(3);
    Employees e2(2,560000,"Manager","Maahir");
    e1.display();
    e2.display();
}