/* Prepare Student result using function. (Include rollno, name, 3 sub marks,
total, and Grade). Make function to find total and average and grade. */
 
#include<iostream>
using namespace std; 
class student
{   
    int mark1 , mark2 , mark3 , roll ;
    string name ;
    float total , grade ;
    public:
        void input()
        {
            cout<<"Enter the student's name : ";
            cin>>name;
            cout<<"Enter the students's roll no : ";
            cin>>roll;
        
            cout<<"Enter the mark of first subject : ";
            cin>>mark1;
            cout<<"Enter the mark of second subject : ";
            cin>>mark2;
            cout<<"Enter the mark of third subject : ";
            cin>>mark3;
        }
        void process(){
            total = mark1+mark2+mark3 ;
            grade = total/3;
        }
        void output(){
            cout<<"---------------------------------------------------------------------------------"<<endl<<endl ;
            cout<<"The name of student is : " << name <<endl;
            cout<<"The rollno is : " << roll <<endl ;
            cout<<"you entered marks : " <<mark1<<mark2<<mark3 <<endl;
            cout<<"The total is : " << total <<endl;
            cout<<"The grade is : " << grade <<endl<<endl ;
        }
        
};

int main(){

    student s1;
    s1.input();
    s1.process();
    s1.output();   
}
          
