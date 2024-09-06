#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    int arr[]={13,4,9,0,12,5,3};
    int ans=INT_MAX;
    for( i=0;i<7;i++){
        if(arr[i]<ans){
            ans=arr[i];
          
        }
       
    }
  
  cout<<ans;
}