#include <iostream>
#include <string.h>
#include <stdio.h> 
using namespace std;
//strlen(char array)
int main()
{
    string name;
    cout << "Enter a string: ";
    getline(cin,name);
	//cin>>name;
    
    cout << "You entered: " << name;
   int	len=name.length();
	
  
    for(int i=0;i<len;i++)
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
