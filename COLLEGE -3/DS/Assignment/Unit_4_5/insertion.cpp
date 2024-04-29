#include<iostream>
using namespace std;

int main(){
    int arr[7] = {12,10,8,7,25,1,80};
    int key,i,j;
    for(i=1;i<7;i++){
        key = arr[i];
        for(j=i-1;j>=0;j--){
            if(key<arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = key;
    }

    for(i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}