// == ->checks both values are same
// === -> checks values and data type are same
#include<iostream>
using namespace std;
int main()
{
	float c;
	int a;
	cout<<"Enter value of c and a";
	cin>>c;
	cin>>a;
	cout<<(c==a)<<endl;
	if(c==a){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false";
	}
}
