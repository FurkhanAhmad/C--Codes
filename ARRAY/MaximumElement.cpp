#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int ans=INT_MIN;
    int index=0;
    int arr[]={1,3,100,4,5,6};
    for(int i=0;i<6;i++){
        if(arr[i]>ans){
            ans=arr[i];
            index=i;
        }
    }
    cout<<"onIndex:"<<index<<endl;
    cout<<ans;
}