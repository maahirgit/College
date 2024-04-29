#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    char name[100];
	//string name;
    cout << "Enter a string: ";
    cin>>name;
	
    //cout << "You entered: " << name;
	int length=0;
	
    for(int i=0;name[i]!='\0';i++)
	{
	length++;
	}
    for(int i=0;i<length;i++)
	{
	if(name[i]>=65 && name[i]<=90)
	{
	name[i]=name[i]+32;
	}
	else
	{
	name[i]=name[i]-32;
	}
	}
	cout<<"\n String is:"<<name;	
 
	
    return 0;
}
