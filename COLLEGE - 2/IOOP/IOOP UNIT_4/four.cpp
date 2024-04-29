#include<iostream>
#include<string>
using namespace std;
struct Student{
    public:
    int r_no,sub1,sub2,sub3;
    char name[10];
};
int main(){
    Student s;
    cout<<"Enter roll no =  ";
    cin>>s.r_no;
    cout<<"Entr name = ";
    cin>>s.name;
    cout<<"Enter marks of sub1 = ";
    cin>>s.sub1;
    cout<<"Enter marks of sub2 = ";
    cin>>s.sub2;
    cout<<"Enter marks of sub3 = ";
    cin>>s.sub3;

    cout<<s.r_no;
    cout<<s.name;
    cout<<s.sub1;
    cout<<s.sub2;
    cout<<s.sub3;
    return 0;
}