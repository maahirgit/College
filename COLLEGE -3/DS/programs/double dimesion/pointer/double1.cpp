using namespace std;
#include<iostream>

//basic double
int main()
{
	//arr+i arr[0]
	//e0+0 e0
	//arr+i arr[1]
	//e0+1 f0
	//arr+i arr[2]
	//e0+2
	int arr[3][4] = {{10,11,12,13 }, {20,21,22,23 },{30,31,32,33}};
  
		int i, j;
  		for (i = 0; i < 3; i++)
  		{
   	cout<<"\nAddress of "<<i<<"th array = "<<arr+i<<" "<<arr[i]<<" "<< *(arr + i);


		}
		cout<<"\n";
      		for (i = 0; i < 3; i++)
  		{
    		for (j = 0; j < 4; j++)
			{
			//*(x+i)
				
      			cout<<" "<<*(*(arr + i) + j);

			}
   		cout<<"\n";
  		}
		cout<< "\n address:\n";
		for (i = 0; i < 3; i++)
  		{
    		for (j = 0; j < 4; j++)
			{
      			//cout<<" "<<*(arr + i) + j;
			cout<<" "<<&arr[i][j];
			}
   		cout<<"\n";
  		}
  
  return 0;

}
