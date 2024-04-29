#include<iostream>
using namespace std;

int main(){
    int arr[5] = {10,20,30,40,50};
    int min=0;
    int max=4;
    int num,mid;
    int flag=0;
    cout<<"Enter nummber to search = ";
    cin>>num;
    while(min<=max){
        mid = (min+max)/2;
        if(arr[mid]==num){
            flag=1;
            break;
        }
        else if(num<arr[mid]){
            max = mid -1;
        }
        else{
            min = mid+1;
        }
    }
    if(flag==1){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
    return 0;
}