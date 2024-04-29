#include<iostream>
using namespace std;

int main(){
    int a[5] = {10,30,50,70,90};
    int b[5] = {20,40,60,80,100};
    int c[10];
    int i=0;
    int j=0;
    int k = 0;

    while(i<5 && j<5){
        if(a[i]<b[j]){
            c[k] = a[i];
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<5){
        c[k] = a[i];
        k++;
        i++;
    }
    while(j<5){
        c[k]=b[j];
        k++;
        j++;
    }

    for(int k=0;k<10;k++){
        cout<<c[k]<<" ";
    }
}