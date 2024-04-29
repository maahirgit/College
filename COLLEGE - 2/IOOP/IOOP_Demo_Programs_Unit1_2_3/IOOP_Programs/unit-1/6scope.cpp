//Scope Resolution Operator
#include<iostream>
using namespace std;
int a=20;//global variable
int main()
{
	int a=50;//local variable
	cout<<"Local variable"<<a<<endl;
	cout<<"Global variable using scope res. ope"<<::a<<endl;
}