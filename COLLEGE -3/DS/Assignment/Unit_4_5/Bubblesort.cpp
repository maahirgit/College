#include<iostream>
using namespace std;
int main(){
    int temp;
    int arr[5] = {121,1,16,8,45};
    for(int i=0;i<5;i++){
        for(int j=0;j<5-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}