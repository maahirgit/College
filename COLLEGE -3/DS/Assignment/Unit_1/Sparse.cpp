#include<iostream>
using namespace std;

int main(){
    int rows,cols,size,flag=0,count=0;
    cout<<"Enter number of rows = ";
    cin>>rows;
    cout<<"Enter number of columns = ";
    cin>>cols;
    int arr[rows][cols];

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<"enter number"<<"["<<i<<"]"<<"["<<j<<"]";
            cin>>arr[i][j];
        }
    }

     for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            size = rows*cols/2;
            if(arr[i][j]==0){
                count++;
            }
           
            // cout<<arr[i][j]<<" ";
            // cin>>a[i][j];
        }
         if(count>=size){
                flag=1;
            }
        // cout<<"\n";
    }
    if(flag==1){
        cout<<count;
        cout<<"Sparse matrix";

    }
    else{
        cout<<"Not";
    }
}


