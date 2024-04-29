#include<iostream>
using namespace std;

int main()
{
    int arr[3][3];
    int count=0;
    int i,j;
    int m,n;
    cout<<"Enter m and n";
    cin>>m>>n;
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            cout<<"Enter elemetns";
            cin>>arr[i][j];
        }
    }

    cout<<"Elemetns are"<<endl;
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
           if(arr[i][j] == 0)
           {
                count++;
           }
        }
    }

    if(count > (m*n)/2 )
    {
        cout<<"Sparse matrxi";
    }
    else
    {
        cout<<"not a sparse matrix";
    }
}