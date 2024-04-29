using namespace std;
#include<iostream>
int main()
{
				
		int array[5]={11,12,23,45,67}; 
		int srch;		
		int i;
		bool found=0;
		for(i=0;i<5;i++)
		{
		cout<<"\n"<<array[i];
		}
		cout<<"\n enter value to be searched:";
		cin>>srch;
		for(i=0;i<5;i++)
		{
			if(array[i]==srch)
			{
			found=1;
			int temp;
			temp=array[0];
			array[0]=array[i];
			array[i]=temp;	
			break;
			}
		}
		if(found==0)
		{
		
		array[i]=srch;
		for(i=0;i<=5;i++)
		{
		cout<<"\n"<<array[i];
		}	
		}
		else
		{
		for(i=0;i<5;i++)
		{
		cout<<"\n"<<array[i];
		}
		}
}
