#include<iostream>
using namespace std;
void rotate(int arr[],int n){
    int last=arr[n-1];
    for(int i=n-2;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=last;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[]={2,7,4,11,5,8};
    int n=6;
    rotate(arr,n);
}