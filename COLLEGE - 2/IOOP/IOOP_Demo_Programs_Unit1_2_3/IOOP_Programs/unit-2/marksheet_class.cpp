//Marksheet
#include<iostream>
using namespace std;
class student
{
	int rollno;
	string name;
	int m1,m2,m3;
	float tot,per;
	public:
		void input()
		{
			cout<<"Enter student details";
			cin>>rollno;
			cin>>name;
			cin>>m1>>m2>>m3;
		}
		void process()
		{
			tot=m1+m2+m3;
			per=tot/3;
			cout<<"------------------------------";
			cout<<"Student Details are:"<<endl;
			cout<<"Rollno is "<<rollno<<endl;
			cout<<"Name is "<<name<<endl;
			cout<<"Total is"<<tot<<endl;
			cout<<"Percentage is "<<per<<endl;
			if(per>100)
				return;
			if((per>=70)&&(per<100))
				cout<<"Distinction";
			else if((per>=60)&&(per<70))
				cout<<"First Class";
			else if((per>=50)&&(per<60))
				cout<<"Second class";
			else if((per>=40)&&(per<50))
				cout<<"Pass class";
			else
				cout<<"Fail";
		}
};
int main()
{
	student s1;
	s1.input();
	s1.process();
}
	
	
	
	