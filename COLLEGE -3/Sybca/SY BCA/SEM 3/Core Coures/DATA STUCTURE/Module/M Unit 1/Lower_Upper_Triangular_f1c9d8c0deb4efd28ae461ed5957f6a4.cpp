#include<iostream>
using namespace std;
int main()
{
	int row,col,r,c,Mat[10][10];
	cout<<"Enter the no of Rows";
	cin>>row;
	cout<<"Enter the no of Colls";
	cin>>col;
	
	cout<<"Enter the Elemtns:";
	for(r=0;r<row;r++){
		for(c=0;c<col;c++){
			cin>>Mat[r][c];
		}
	}
	
	cout<<endl;
	cout<<"The Upper Triangular Matrix:";
	for(r=0;r<row;r++){
		cout<<"\n";
		for(c=0;c<col;c++){
			if(r>c)
			{
				cout<<"0";	
				cout<<"\t";
			}
			else
			{
				cout<<"\t"<<Mat[r][c];
			}
			
		}
	}
	
	cout<<endl;
	cout<<"The Lower Triangular Matrix:";
	for(r=0;r<row;r++){
		cout<<"\n";
		for(c=0;c<col;c++){
			if(r>=c)
			{
				cout<<"\t"<<Mat[r][c];	
				//cout<<"\t";
			}
			else
			{
				cout<<"0";
				cout<<"\t";
			}
			
		}
	}
	
	return 0;
}