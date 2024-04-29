#include<iostream>
using namespace std;

int main(){
    int arr[7] = {12,15,8,1,85,90,3};
    int temp;
    int min;
    for(int i=0;i<7;i++){
        min=i;
        for(int j=i+1;j<8;j++){
            if(arr[min]>arr[j]){
                temp = arr[min];
                arr[min] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}